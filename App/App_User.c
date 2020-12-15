#include "App_User.h"
#include "main.h"
#include "cmsis_os.h"
#include "usb_device.h"

#include "ST7565.h"
#include "stc3115_Driver.h"
#include "App_Lvgl.h"
#include "App_SD_Card.h"
#include "lv_port_disp_template.h"
#include "lv_port_indev_template.h"
#include "cJSON.h"
#include  "App_Sensor.h"
#include "User_define.h"
#include "App_Gpio.h"
#include "AT_Command_driver.h"
#include "AT_Uc20_http.h"
#include "AT_Gps.h"
#include "AT_Command.h"

#include "lwgps/lwgps.h"

#define UID0 (*(volatile uint32_t *)0x1FFF7A10) //Unique device ID register
#define UID1 (*(volatile uint32_t *)0x1FFF7A14)
#define UID2 (*(volatile uint32_t *)0x1FFF7A18)
#define FLASH_SIZE (*(volatile uint32_t *)0x1FFF7A22)

extern UART_HandleTypeDef huart1;
extern UART_HandleTypeDef huart3;
extern RTC_HandleTypeDef hrtc;
char UID[20];
uint32_t at_ok =0,at_fail = 0;
uint8_t tmpp[100];
uint8_t Simready = 0;

char lat[20] = {0};
char Longs[20] = {0};
int rssi;
uint8_t Sensor_def;
float Sensor_value;
char SysTemData[1024] = {0};
uint16_t Packeg_len = 0;
uint32_t Sensor_ScanFail_cnt = 0;



typedef struct
{
   uint8_t handle_id;
}xMessage;

char Sys_config[1024] = "{\"Sys_Setting\":{\"Sensor_index\":1,\"language_index\":1},\"Systeminfo\":{\"Config_title\":[\"Cài đặt\",\"Setting\"],\"language_config\":[\"Ngôn ngữ\",\"Language\"],\"save_ok\":[\"Lưu thành công\",\"Save data successful\"],\"save_fail\":[\"Lưu thành thất bại\",\"Failed to save data\"],\"language_title\":[\"Chọn ngôn ngữ\",\"Language select\"]},\"info\":[{\"Addr\":4,\"SSname\":[\"Đo mặn\",\"Saility\"],\"para\":[{\"Reg\":30007,\"Regname\":[\"Độ mặn\",\"Salinity\"],\"Unit\":[\"ppt\",\"ppt\"],\"base\":100}]}]}";
char Sensor_info[512];// ="[{\"Addr\":4,\"SSname\":[\"Đo mặn\",\"Saility\"],\"para\":[{\"Reg\":30007,\"Regname\":[\"Độ mặn\",\"Salinity\"],\"Unit\":[\"ppt\",\"ppt\"],\"base\":100}]},{\"Addr\":5,\"SSname\":[\"Đo PH\",\"PH\"],\"para\":[{\"Reg\":30001,\"Regname\":[\"PH\",\"PH\"],\"Unit\":[\"\",\"\"],\"base\":100}]}]";
char Systeminfo[512];// = "{\"Config_title\":[\"Cài đặt\",\"Setting\"],\"language_config\":[\"Ngôn ngữ\",\"Language\"],\"save_ok\":[\"Lưu thành công\",\"Save data successful\"],\"save_fail\":[\"Lưu thành thất bại\",\"Failed to save data\"],\"language_title\":[\"Chọn ngôn ngữ\",\"Language select\"]}";
char Sys_Setting[256];

char *url = "http://apihandsetmanager.namlongtekgroup.com/api/station/AddStationData";
char *dt = "{\"APIKey\":\"9E95D850FD2096889E8B30102BB0FEF4\",\"StationID\":\"76-17-174-111-249-236\",\"Extention1\":\"10.834650\",\"Extention2\":\"106.700431\",\"Extention3\":\"1\",\"Extention4\":\"123\",\"Extention5\":\"string\",\"Extention6\":\"string\",\"Extention7\":\"string\",\"Extention8\":\"string\",\"Extention9\":\"string\",\"Extention10\":\"string\"}";


uint8_t Update_Name = 1;
char SensorNam[30];
uint8_t Update_Data = 1;
float Sensor_Data;
uint8_t Update_Unit = 1;
char SensorUnit[10];
STC3115_ConfigData_TypeDef STC3115_ConfigData;
STC3115_BatteryData_TypeDef STC3115_BatteryData;

uint32_t Ramfree;
uint32_t Battery_Gettime = 0;

uint32_t Sensor_Updatetime = 0;
uint32_t Sensor_Scan_Time = 0;
int8_t Sensor_Scan_res = -1;
uint8_t Sensor_request_update = 1;
uint32_t Battery_Updatetime = 0;
uint32_t Time_sendata;
uint8_t Sensor_index = 0;
uint32_t DateTime_Updatetime = 0;

SemaphoreHandle_t xSemaphore;
SemaphoreHandle_t xSemaphore_battery;
SemaphoreHandle_t xSemaphore_Sensordata;
SemaphoreHandle_t xSemaphore_UCsim;

QueueHandle_t Queue_Handle = NULL;

RTC_TimeTypeDef sTime = {0};
RTC_DateTypeDef sDate = {0};
uint32_t System_runtime;

uint8_t GPS_done = 0;
uint8_t Network_on = 0;

uint8_t result_calib;
Updat_data_state update_state = UPDATE_IDLE;

void Sys_refresh_time(void)
{
	System_runtime = HAL_GetTick() +TIME_RUN;
}
int Make_aData_packeg()
{
	Packeg_len = sprintf(SysTemData,"{\"APIKey\":\"9E95D850FD2096889E8B30102BB0FEF4\","
			 	 	 "\"StationID\":\"%s\","
			 	 	 "\"Extention1\":\"%s\"," //lat
			 	 	 "\"Extention2\":\"%s\"," //long
			 	 	 "\"Extention3\":\"%d\"," //Code thiet bi
			 	 	 "\"Extention4\":\"%02f\"," //gia tri
			 	 	 "\"Extention5\":\"string\","
			 	 	 "\"Extention6\":\"string\","
			 	 	 "\"Extention7\":\"string\","
			 	 	 "\"Extention8\":\"string\","
			 	 	 "\"Extention9\":\"string\","
			 	 	 "\"Extention10\":\"%d\"}",
					 UID,
					 lat,
					 Longs,
					 Sensor_def,
					 Sensor_value,
					 (int)STC3115_BatteryData.SOC/10);
	return Packeg_len;
}

void Sendata_via_Ble()
{
	HAL_UART_Transmit(&huart3,(uint8_t *)SysTemData, Packeg_len, 2000);
//	HAL_UART_Transmit(&huart3, (uint8_t *)"\r\n", 2, 100);
}
uint32_t UniqueID0,UniqueID1,UniqueID2,Flash;
int Sys_Get_UID()
{
	 UniqueID0 = UID0;
	 UniqueID1 = UID1;
	 UniqueID2 = UID2;
	 return sprintf(UID,"%lu",UID0);
}



void System_Add_event(_Sys_Event Event)
{
	 xMessage Message;
	 Message.handle_id = Event;
	 xQueueSend(Queue_Handle,( void * ) &Message,( TickType_t )1000);
}

static void STC3115_Hardware_reset()
{
	HAL_GPIO_WritePin(STC3115_RESET_GPIO_Port, STC3115_RESET_Pin, GPIO_PIN_RESET);
	HAL_Delay(100);
	HAL_GPIO_WritePin(STC3115_RESET_GPIO_Port, STC3115_RESET_Pin, GPIO_PIN_SET);
}


int Setting_Config_Parse(char *info)
{
	cJSON *input  = cJSON_Parse(info);
	cJSON *data = cJSON_GetObjectItem(input, "info");
	sprintf(Sensor_info,"%s",cJSON_PrintUnformatted(data));
	data = cJSON_GetObjectItem(input, "Systeminfo");
	sprintf(Systeminfo,"%s",cJSON_PrintUnformatted(data));
	data = cJSON_GetObjectItem(input, "Sys_Setting");
	sprintf(Sys_Setting,"%s",cJSON_PrintUnformatted(data));
	return 1;
}

uint32_t Battery_Display = 0;
static void SYS_Get_Time()
{
	HAL_RTC_GetTime(&hrtc, &sTime, RTC_FORMAT_BIN);
	HAL_RTC_GetDate(&hrtc, &sDate, RTC_FORMAT_BIN);

}
static void Update_Datetime()
{
	SYS_Get_Time();
	char strr[7];
	sprintf(strr,"%d:%02d",sTime.Hours,sTime.Minutes);
	Lv_DateTime_update(strr);
}
static int Sensor_calib(void)
{
	int res = -1;
	if( xSemaphoreTake( xSemaphore_Sensordata, ( TickType_t ) 1000 ) == pdTRUE )
	{
		switch (Sensor_index) {
			case 0:
				res =  Calib_sanity();
				break;
			case 1:
				res =  Calib_PH();
				break;
			default:
				break;
		}
		xSemaphoreGive( xSemaphore_Sensordata );
		return res;
	}
	return -2;
}
static void Updata_data_sensor()
{
	  if( xSemaphoreTake( xSemaphore_Sensordata, ( TickType_t ) 10 ) == pdTRUE )
	  {
		if(Sensor_request_update)
		{
			  if(Sensor_Scan_res>= 0)
			  {
				 Sensor_value = (float)Sensor[Sensor_index].Datax[0].Data/Sensor[Sensor_index].Datax[0].base;
				 Lv_Sensor_Data_set(Sensor_value);
				 Lv_Sensor_Name_set(Sensor[Sensor_index].Name);
				 Update_Name = 0;
				 Lv_Sensor_Unit_set(Sensor[Sensor_index].Datax[0].Unit);
				 Update_Unit= 0;
				 switch (Sensor[Sensor_index].Id) {
					case 4:
						Sensor_def = 1; // cảm biến mặn
						break;
					case 5:
						Sensor_def = 2; // cảm biến PH
						break;
					default:
						Sensor_def = 3; // Không xác định
						break;
				}
			  }
			  else
			  {
				  Sensor_ScanFail_cnt++;
				 Lv_Sensor_Data_set(0.0f);
				 switch (Sensor_ScanFail_cnt%3) {
					case 0:
						Lv_Sensor_Name_set("Scan.");
						break;
					case 1:
						Lv_Sensor_Name_set("Scan..");
						break;
					case 2:
						Lv_Sensor_Name_set("Scan...");
						break;
					default:
						break;
				}

			   Update_Name = 0;
//							 }
//							 if(Update_Unit)
//							 {
					 Lv_Sensor_Unit_set("");
					 Update_Unit= 0;
//							 }
			  }

		}
		xSemaphoreGive( xSemaphore_Sensordata );
		Sensor_request_update = 0;
		if(HAL_GetTick() > Time_sendata)
		{
			Time_sendata = HAL_GetTick() + 2000;
			Make_aData_packeg();
			//Sendata_via_Ble();
		}
	}
}

static void Update_Baterry_Data()
{
		if(HAL_GetTick() > Battery_Updatetime)
		{
			if( xSemaphoreTake( xSemaphore_battery, ( TickType_t ) 10 ) == pdTRUE )
			{
			if(STC3115_BatteryData.Current >0 )//charge
			{
				 Lv_Battery_set(STC3115_BatteryData.SOC/10,1);
			 }
			 else
			 {
				 Lv_Battery_set(STC3115_BatteryData.SOC/10,0);
			 }
			Battery_Updatetime =HAL_GetTick()+1000;
			xSemaphoreGive( xSemaphore_battery );
			}

		}
}
uint8_t cnt = 0;
uint32_t cnttask = 0;
IoMessage BTN_Message;
void Btn_Main_Screen_process()
{
	switch (BTN_Message.btn_id){
		case BTN_ID_MENU:
			switch (BTN_Message.event) {
				case BTN_RELEASE:
					if(BTN_Message.Time_press <1000) //pre Presslong
					{
						//
						Lv_switch_to_screen(SETUP_SCREEN);
					}
					break;
				case BTN_PRESS_LONG:

					break;
				default:
					break;
			}
			break;
		case BTN_ID_EXIT:
			break;
		case BTN_ID_UP:
			switch (BTN_Message.event) {
				case BTN_RELEASE:
					if(BTN_Message.Time_press <1000) //pre Presslong
					{
						//

					}
					break;
				case BTN_PRESS_LONG:
					update_state = WAITING_GPS;
					Lv_switch_to_screen(UPDATE_DATA);
					break;
				default:
					break;
			}
			break;
		case BTN_ID_DOWN:
			break;
		default:
			break;
	}
}
void Btn_Setup_Screen_process()
{
	switch (BTN_Message.btn_id){
		case BTN_ID_MENU:
			switch (BTN_Message.event) {
				case BTN_RELEASE:
					if(BTN_Message.Time_press <1000) //pre Presslong
					{
						if(lv_list_get_forcus_index() == 1)
						{
						//Lv_switch_to_screen(GET_UID_SCREEN);
								if(Sensor_Scan_res >= 0) // cam bien running
								{
									lv_set_sensor_running(Sensor[Sensor_index].Id);
								}
								else
									lv_set_sensor_running(0);
						}
						lv_list_forcus_btn();
					}
					break;
				case BTN_PRESS_LONG:

					break;
				default:
					break;
			}
			break;
		case BTN_ID_EXIT:
				if(BTN_Message.event == BTN_RELEASE)
				{
					Lv_switch_to_screen(MAIN_SCREEN);
				}
			break;
		case BTN_ID_UP:
			if(BTN_Message.event == BTN_RELEASE)
			{
				Lv_list_up(1);
			}
			break;
		case BTN_ID_DOWN:
			if(BTN_Message.event == BTN_RELEASE)
			{
				Lv_list_up(0);
			}
			break;
		default:
			break;
	}
}
void Btn_calib_init_Screen_process()
{
	switch (BTN_Message.btn_id){
		case BTN_ID_MENU:
			switch (BTN_Message.event) {
				case BTN_RELEASE:
					if(BTN_Message.Time_press <1000) //pre Presslong
					{
						//Lv_switch_to_screen(GET_UID_SCREEN);
						//lv_list_forcus_btn();
						if(Sensor_Scan_res >= 0) // cam bien running
						{
							Lv_switch_to_screen(CALIB_START);
						}

					}
					break;
				case BTN_PRESS_LONG:

					break;
				default:
					break;
			}
			break;
		case BTN_ID_EXIT:
			if(BTN_Message.event == BTN_RELEASE)
			{
				Lv_switch_to_screen(SETUP_SCREEN);
			}
			break;
		case BTN_ID_UP:
			break;
		case BTN_ID_DOWN:
			break;
		default:
			break;
	}
}
void Btn_calib_Start_Screen_process()
{
	switch (BTN_Message.btn_id){
		case BTN_ID_MENU:

			break;
		case BTN_ID_EXIT:
			if(BTN_Message.event == BTN_RELEASE)
			{
				Lv_switch_to_screen(SETUP_SCREEN);
			}
			break;
		case BTN_ID_UP:
			break;
		case BTN_ID_DOWN:
			break;
		default:
			break;
	}
}
void Btn_calib_result_Screen_process()
{
	switch (BTN_Message.btn_id){
		case BTN_ID_MENU:
			if(BTN_Message.event == BTN_RELEASE)
			{
				Lv_switch_to_screen(SETUP_SCREEN);
			}
			break;
		case BTN_ID_EXIT:
			if(BTN_Message.event == BTN_RELEASE)
			{
				Lv_switch_to_screen(SETUP_SCREEN);
			}
			break;
		case BTN_ID_UP:
			if(BTN_Message.event == BTN_RELEASE)
			{
				Lv_switch_to_screen(SETUP_SCREEN);
			}
			break;
		case BTN_ID_DOWN:
			if(BTN_Message.event == BTN_RELEASE)
			{
				Lv_switch_to_screen(SETUP_SCREEN);
			}
			break;
		default:
			break;
	}
}
void Btn_get_id_Screen_process()
{
	switch (BTN_Message.btn_id){
		case BTN_ID_MENU:
			if(BTN_Message.event == BTN_RELEASE)
			{
				Lv_switch_to_screen(SETUP_SCREEN);
			}
			break;
		case BTN_ID_EXIT:
			if(BTN_Message.event == BTN_RELEASE)
			{
				Lv_switch_to_screen(SETUP_SCREEN);
			}
			break;
		case BTN_ID_UP:
			if(BTN_Message.event == BTN_RELEASE)
			{
				Lv_switch_to_screen(SETUP_SCREEN);
			}
			break;
		case BTN_ID_DOWN:
			if(BTN_Message.event == BTN_RELEASE)
			{
				Lv_switch_to_screen(SETUP_SCREEN);
			}
			break;
		default:
			break;
	}
}

void Btn_Update_Data_process()
{
	switch (BTN_Message.btn_id){
		case BTN_ID_MENU:
			if(BTN_Message.event == BTN_RELEASE)
			{
				Lv_switch_to_screen(MAIN_SCREEN);
			}
			break;
		case BTN_ID_EXIT:
			if(BTN_Message.event == BTN_RELEASE)
			{
				Lv_switch_to_screen(MAIN_SCREEN);
			}
			break;
		case BTN_ID_UP:
			if(BTN_Message.event == BTN_RELEASE)
			{
				Lv_switch_to_screen(MAIN_SCREEN);
			}
			break;
		case BTN_ID_DOWN:
			if(BTN_Message.event == BTN_RELEASE)
			{
				Lv_switch_to_screen(MAIN_SCREEN);
			}
			break;
		default:
			break;
	}
}

uint8_t http_request_url = 1;
int Http_Res = -1;

void Screen_process()
{

	BTN_Message.btn_id = BTN_FREE;
	GPIO_Get_message(&BTN_Message);
	if(BTN_Message.btn_id != BTN_FREE)
	{
		System_runtime = HAL_GetTick() +TIME_RUN; // update time
	}
	switch (current_active) {
		case MAIN_SCREEN:
  	  	  	if(HAL_GetTick()> DateTime_Updatetime)
			{
				DateTime_Updatetime = HAL_GetTick()+30000;
				Update_Datetime();
			}
			Updata_data_sensor();
			Update_Baterry_Data();
			Btn_Main_Screen_process();
			break;
		case SETUP_SCREEN:
			Btn_Setup_Screen_process();
					break;
		case CALIB_MODE:
			Btn_calib_init_Screen_process();
			break;

		case CALIB_START:
			//Btn_calib_Start_Screen_process();
			{
				result_calib = Sensor_calib();
				Sys_refresh_time();
				current_active = CALIB_RESULT;
			}
			break;
		case CALIB_RESULT:
			lv_cablib_result_show(result_calib);
			Btn_calib_result_Screen_process();
					break;
		case GET_UID_SCREEN:
			Btn_get_id_Screen_process();
					break;
		case UPDATE_DATA:
			switch (update_state) {
				case WAITING_GPS:
					Http_Res = -1;
					lv_update_data_show(WAITING_GPS,0);
					if(GPS_done)
						update_state = WAITING_NETWORK;
					break;
				case WAITING_NETWORK:
					osDelay(100);
					lv_update_data_show(WAITING_NETWORK,0);
					if(Network_on)
						update_state = WAITING_RESULT;
					break;
				case WAITING_RESULT:
					lv_update_data_show(WAITING_RESULT,0);
					if( xSemaphoreTake( xSemaphore_UCsim, ( TickType_t ) 100 ) == pdTRUE )
					{
						 if(http_request_url == 0)
						 {
								Make_aData_packeg();
								Http_Res = AT_Http_post(SysTemData);
								update_state = UPDATE_DONE;
						 }
						 else
						 {
							 if(AT_Http_set_url(url)>0)
							 {
								 http_request_url = 0;
							 }
						 }
						 xSemaphoreGive(xSemaphore_UCsim);
					}
					break;
				case UPDATE_DONE:
					lv_update_data_show(UPDATE_DONE,Http_Res);
					break;
				default:
					break;
			}
			Btn_Update_Data_process();
			break;
		default:
			break;
	}
}
 void MainfunctionTask(void const * argument)
 {
	 Sys_Get_UID();
	  xSemaphore = xSemaphoreCreateMutex();
	  xSemaphore_battery = xSemaphoreCreateMutex();
	  xSemaphore_Sensordata = xSemaphoreCreateMutex();
	  xSemaphore_UCsim  =xSemaphoreCreateMutex();
	  Queue_Handle = xQueueCreate(10, sizeof( xMessage ) );

	  if( xSemaphoreTake( xSemaphore, ( TickType_t ) 10 ) == pdTRUE )
	  {


	  }
	  else
	  {
		  while(1);
	  }
	  xSemaphoreGive( xSemaphore );
	  if(SD_Card_Mount())
	  {
		  SD_Card_Get_Setting(Sys_config);
	  }
	  Setting_Config_Parse(Sys_config);
	  App_Sensor_Init(Sensor_info);
	  ST7565_begin(12);
	 // ST7565_clear_display();
	  lv_init(); // init lvgl
	  lv_port_disp_init();
	  lv_obj_init();
	  Time_sendata = HAL_GetTick()+2000;
	  DateTime_Updatetime = HAL_GetTick()-1;
	  xMessage Handle;

	  cnttask = HAL_GetTick();
	  System_runtime = HAL_GetTick() +TIME_RUN;
	  for (;;) {
		  	  	  	Ramfree = xPortGetFreeHeapSize();
		  	  	  	Screen_process();
		  	  	  	if(System_runtime < HAL_GetTick())
		  	  	  	{
		  	  	  		//System_Add_event(SYSTEM_OFF);
		  	  	  	}
					if(xQueueReceive(Queue_Handle, &Handle, ( TickType_t )1) == pdPASS )
					{
						switch (Handle.handle_id) {
							case GPS_GET_LOCATION_DONE:
								GPS_done = 1;
								lv_Gps_on();
								break;
							case GPS_GET_LOCATION_FAIL:
								lv_Gps_off();
								break;
							case SIM_READY:
								lv_Sim_ready();
								break;
							case SIM_NOT_READY:
								lv_Sim_not_ready();
								break;
							case GSM_ON:
								Network_on = 1;
								lv_Gsm_on();
								break;
							case GSM_OFF:
								lv_Gsm_off();
								break;
							case SYSTEM_OFF:
								//lv_Gsm_off();
								HAL_GPIO_WritePin(PWR_OFF_GPIO_Port, PWR_OFF_Pin, GPIO_PIN_SET);
								break;
							default:
								break;
						}
					}
				lv_task_handler();
		 		osDelay(1); // 5ms
	  }
 }

uint32_t time_tt1,time_tt2 = 0;

 void io_handle_cb(void const * argument){
	 Button_Init();
	 //lv_port_indev_init();
	 for (;;) {
		 time_tt1 = HAL_GetTick();
		 Power_ctrl_Process();
		  Button_process(&Btn_down);
		  Button_process(&Btn_exit);
		  Button_process(&Btn_menu);
		  Button_process(&Btn_up);
		 osDelay(1); // 5ms
		 time_tt2 = HAL_GetTick() - time_tt1;

	}
 }



 void STC3115_handle_cb(void const * argument){
//	 for(;;)
//	 {
//		 osDelay(1);
//	 }
//	 uint32_t Bat_cnt = 0;

		int status = GasGauge_Initialization(&STC3115_ConfigData, &STC3115_BatteryData);
		if(status!=0 && status!=-2)
		{
			printf("STC3115: Error in GasGauge_Initialization\n");
		}
	 //STC3115_Hardware_reset();
	 osDelay(1500);
	 for (;;) {

		 if(HAL_GetTick() > Battery_Gettime)
		 {
			 if( xSemaphoreTake( xSemaphore_battery, ( TickType_t ) 10 ) == pdTRUE )
			 {

				 GasGauge_Task(&STC3115_ConfigData, &STC3115_BatteryData);
				 Battery_Gettime = HAL_GetTick()+1000;
				 if(STC3115_BatteryData.OCV == 0)
				 {
					STC3115_Hardware_reset();
				 }
				 xSemaphoreGive( xSemaphore_battery );
			 }
		 }
		 if(HAL_GetTick() >Sensor_Scan_Time)
		 {
			 if( xSemaphoreTake( xSemaphore_Sensordata, ( TickType_t ) 10 ) == pdTRUE )
			 {
				 if((Sensor_Scan_res = Sensor_Scan(Sensor_index,0))>-1)
				 {
					 Sensor_Scan_Time = HAL_GetTick() +300;

				 }
				 else
				 {
					Sensor_index++;
					if(Sensor_index >App_Sensor_Get_NumSensor() )
						Sensor_index = 0;
				 }
				 Sensor_request_update = 1;
				 xSemaphoreGive( xSemaphore_Sensordata );
			 }
		 }

		 osDelay(1); // 5ms
	}
 }
 lwgps_t hgps;
uint8_t PECi_run = 0;
 void Start_Uc20(void const * argument){
	 uint8_t Network_on_t = 0;
	 HAL_GPIO_WritePin(V_BOOT_EN_GPIO_Port, V_BOOT_EN_Pin, GPIO_PIN_RESET);
	 HAL_GPIO_WritePin(PCIE_RST_GPIO_Port, PCIE_RST_Pin, GPIO_PIN_RESET);
//	 for(;;)
//	 {
//		 if(PECi_run == 1)
//		 {
//			 HAL_GPIO_WritePin(V_BOOT_EN_GPIO_Port, V_BOOT_EN_Pin, GPIO_PIN_SET);
//			 HAL_GPIO_WritePin(PCIE_RST_GPIO_Port, PCIE_RST_Pin, GPIO_PIN_SET);
//			 HAL_GPIO_WritePin(PCIE_WLAN_DIS_GPIO_Port, PCIE_WLAN_DIS_Pin, GPIO_PIN_RESET);
//			 PECi_run = 0;
//		 }
//		 if(PECi_run == 2)
//		 {
//			 HAL_GPIO_WritePin(V_BOOT_EN_GPIO_Port, V_BOOT_EN_Pin, GPIO_PIN_SET);
//			 HAL_GPIO_WritePin(PCIE_RST_GPIO_Port, PCIE_RST_Pin, GPIO_PIN_SET);
//			 HAL_GPIO_WritePin(PCIE_WLAN_DIS_GPIO_Port, PCIE_WLAN_DIS_Pin, GPIO_PIN_SET);
//			 PECi_run = 0;
//		 }
//		osDelay(1);
//	 }
	 osDelay(10);
	 HAL_GPIO_WritePin(V_BOOT_EN_GPIO_Port, V_BOOT_EN_Pin, GPIO_PIN_SET);
	 HAL_GPIO_WritePin(PCIE_RST_GPIO_Port, PCIE_RST_Pin, GPIO_PIN_SET);
	 HAL_GPIO_WritePin(PCIE_WLAN_DIS_GPIO_Port, PCIE_WLAN_DIS_Pin, GPIO_PIN_SET);
	 osDelay(5000);
	 At_init();
	 while(AT_CheckModule_ready() == 0)
	 {
		 osDelay(500);
	 }
	 while(AT_Echo_Off() == 0)
	 {
		 osDelay(100);
	 }
//	 AT_Gps_Getconfig();
	 AT_Gps_Set_auto();
	 while(AT_Gps_On()!=1)
	 {
		 osDelay(1000);
		 AT_Gps_Off();
	 }
	 osDelay(1000);
	 AT_GNSS_nmeasrc_enable();
	 osDelay(2000);
//	 AT_Gps_GNSS_nmeasrc_enable();
//	 while(1)
//	 {
//		 AT_Gps_GNSS_nmeasrc_data();
//		 osDelay(1000);
//	 }
//	 AT_Gps_Getconfig();
	 uint8_t RequestGps =1;
	 for(;;)
	 {
		  if( xSemaphoreTake( xSemaphore_UCsim, ( TickType_t ) 10 ) == pdTRUE )
		  {
			 if(!Simready)
			 {
				 if(AT_Check_SimReady())
				 {
					 Simready =1;
					 System_Add_event(SIM_READY);
				 }
			 }
			 else
			 {
				 if (!Network_on_t)
				 {
					 if(AT_TurnOn_network())
					 {
						 Network_on_t = 1;
						 System_Add_event(GSM_ON);
						 AT_Http_Init();

					 }
				 }
			 }
			  AT_GNSS_nmeasrc_RMC();
			  AT_GNSS_nmeasrc_GGA();
			 if(RequestGps)
			 {
				 if(AT_Gps_Getlocation(lat, Longs) == 1)
				 {
					 System_Add_event(GPS_GET_LOCATION_DONE);
					 RequestGps = 0;
				 }
			 }
			 AT_CheckModule_ready();
			 AT_Check_Network_Quality(&rssi);
			 xSemaphoreGive(xSemaphore_UCsim);
		 }
		 osDelay(2000);
	 }
	 for(;;)
	 {
		 if(!Simready)
		 {
			 if(AT_Check_SimReady())
			 {
				 Simready =1;
				 System_Add_event(SIM_READY);
//				 xMessage Gps;
//				 Gps.handle_id = SIM_READY;
//				 xQueueSend(Queue_Handle,( void * ) &Gps,( TickType_t )1000);
			 }
		 }
		 else
		 {
			 if (!Network_on)
			 {
				 if(AT_TurnOn_network())
				 {
					 Network_on = 1;
					 System_Add_event(GSM_ON);
//					 xMessage Gps;
//					 Gps.handle_id = GSM_ON;
//					 xQueueSend(Queue_Handle,( void * ) &Gps,( TickType_t )1000);

					 AT_Http_Init();

				 }
			 }
		 }

		 if(AT_Check_Network_Quality(&rssi)<0)
		 {

		 }
		 else
		 {
			 printf("network quality: %d\n",rssi);
		 }

		 if(Network_on)
			 if(AT_Http_set_url(url)>0)
			 {
				 Make_aData_packeg();
				 int Http_Res = AT_Http_post(SysTemData);
				 printf("Http res: %d\n",Http_Res);
			 }
		 HAL_UART_Transmit(&huart3, (uint8_t*)SysTemData, strlen(SysTemData), 2000);
		 HAL_UART_Transmit(&huart3, (uint8_t *)"\r\n", 2, 100);
		 osDelay(2000);
	 }

	 osDelay(1000);

	 for(;;)
	 {
		 osDelay(100);
	 }
	 for(;;)
	 {
		 if(At_Command((char*)"AT+CSQ\r\n", (char*)"OK\r\n", 2000)>=0)
		 {
			 at_ok ++;

		 }
		 else
		 {
			 at_fail++;
		 }
		 //At_Command((char*)"AT+CPIN?\r\n", (char*)"READY", 2000);
		 osDelay(100);
	 }
 }
