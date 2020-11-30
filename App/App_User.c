#include "App_User.h"
#include "main.h"
#include "cmsis_os.h"
#include "usb_device.h"

#include "ST7565.h"
#include "stc3115_Driver.h"
#include "App_Lvgl.h"
#include "App_SD_Card.h"
#include "lv_port_disp_template.h"
#include "cJSON.h"
#include  "App_Sensor.h"
#include "User_define.h"
#include "App_Gpio.h"
#include "AT_Command_driver.h"
#include "AT_Uc20_http.h"
#include "AT_Gps.h"
#include "AT_Command.h"

extern UART_HandleTypeDef huart1;



typedef struct
{
   uint8_t handle_id;
}xMessage;

char Sys_config[1024] = "{\"Sys_Setting\":{\"Sensor_index\":1,\"language_index\":1},\"Systeminfo\":{\"Config_title\":[\"Cài đặt\",\"Setting\"],\"language_config\":[\"Ngôn ngữ\",\"Language\"],\"save_ok\":[\"Lưu thành công\",\"Save data successful\"],\"save_fail\":[\"Lưu thành thất bại\",\"Failed to save data\"],\"language_title\":[\"Chọn ngôn ngữ\",\"Language select\"]},\"info\":[{\"Addr\":4,\"SSname\":[\"Đo mặn\",\"Saility\"],\"para\":[{\"Reg\":30007,\"Regname\":[\"Độ mặn\",\"Salinity\"],\"Unit\":[\"ppt\",\"ppt\"],\"base\":100}]}]}";
char Sensor_info[512];// ="[{\"Addr\":4,\"SSname\":[\"Đo mặn\",\"Saility\"],\"para\":[{\"Reg\":30007,\"Regname\":[\"Độ mặn\",\"Salinity\"],\"Unit\":[\"ppt\",\"ppt\"],\"base\":100}]},{\"Addr\":5,\"SSname\":[\"Đo PH\",\"PH\"],\"para\":[{\"Reg\":30001,\"Regname\":[\"PH\",\"PH\"],\"Unit\":[\"\",\"\"],\"base\":100}]}]";
char Systeminfo[512];// = "{\"Config_title\":[\"Cài đặt\",\"Setting\"],\"language_config\":[\"Ngôn ngữ\",\"Language\"],\"save_ok\":[\"Lưu thành công\",\"Save data successful\"],\"save_fail\":[\"Lưu thành thất bại\",\"Failed to save data\"],\"language_title\":[\"Chọn ngôn ngữ\",\"Language select\"]}";
char Sys_Setting[256];

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

uint8_t Sensor_index = 0;

SemaphoreHandle_t xSemaphore;
SemaphoreHandle_t xSemaphore_battery;
SemaphoreHandle_t xSemaphore_Sensordata;


QueueHandle_t Queue_Handle = NULL;

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
 void MainfunctionTask(void const * argument)
 {
	  xSemaphore = xSemaphoreCreateMutex();
	  xSemaphore_battery = xSemaphoreCreateMutex();
	  xSemaphore_Sensordata = xSemaphoreCreateMutex();
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
	  ST7565_begin(10);
	  lv_init(); // init lvgl
	  lv_port_disp_init();
	  lv_obj_init();
	  for (;;) {
		  Ramfree = xPortGetFreeHeapSize();
		 		lv_task_handler();
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
				  if( xSemaphoreTake( xSemaphore_Sensordata, ( TickType_t ) 10 ) == pdTRUE )
				  {
					if(Sensor_request_update)
					{
						  if(Sensor_Scan_res>= 0)
						  {
							 Lv_Sensor_Data_set((float)Sensor[Sensor_index].Datax[0].Data/Sensor[Sensor_index].Datax[0].base);
//							 if(Update_Name)
//							 {
								 Lv_Sensor_Name_set(Sensor[Sensor_index].Name);
								 Update_Name = 0;
//							 }
//							 if(Update_Unit)
//							 {
								 Lv_Sensor_Unit_set(Sensor[Sensor_index].Datax[0].Unit);
								 Update_Unit= 0;
//							 }
						  }
						  else
						  {
							 Lv_Sensor_Data_set(0.0f);
//							 if(Update_Name)
//							 {
								 Lv_Sensor_Name_set("Scan...");
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

		 		}
				  xMessage Handle;
				if(xQueueReceive(Queue_Handle, &Handle, ( TickType_t )2) == pdPASS )
				{
					switch (Handle.handle_id) {
						case GPS_GET_LOCATION_DONE:
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
		 		osDelay(1); // 5ms
	}
 }

uint32_t time_tt1,time_tt2 = 0;

 void io_handle_cb(void const * argument){
	 for (;;) {
		 time_tt1 = HAL_GetTick();


		 osDelay(1); // 5ms
		 time_tt2 = HAL_GetTick() - time_tt1;

	}
 }


uint8_t UID[16];
#define UID0 (*(volatile uint32_t *)0x1FFF7A10) //Unique device ID register
#define UID1 (*(volatile uint32_t *)0x1FFF7A14)
#define UID2 (*(volatile uint32_t *)0x1FFF7A18)
#define FLASH_SIZE (*(volatile uint32_t *)0x1FFF7A22)
uint32_t UniqueID0,UniqueID1,UniqueID2,Flash;
 void STC3115_handle_cb(void const * argument){
//	 for(;;)
//	 {
//		 osDelay(1);
//	 }
//	 uint32_t Bat_cnt = 0;
	 UniqueID0 = UID0;
	 UniqueID1 = UID1;
	 UniqueID2 = UID2;
	 Flash = FLASH_SIZE;
	 STC3115_Hardware_reset();
	 osDelay(1000);
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
 uint32_t at_ok =0,at_fail = 0;
 uint8_t tmpp[100];
 uint8_t Simready = 0;
 uint8_t Network_on = 0;
 char lat[20] = {0};
 char Longs[20] = {0};
 int rssi;
 void Start_Uc20(void const * argument){
	 HAL_GPIO_WritePin(V_BOOT_EN_GPIO_Port, V_BOOT_EN_Pin, GPIO_PIN_RESET);
	 HAL_GPIO_WritePin(PCIE_RST_GPIO_Port, PCIE_RST_Pin, GPIO_PIN_RESET);
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
	 AT_Gps_On();
//	 AT_Gps_Getconfig();
	 char *url = "http://apihandsetmanager.namlongtekgroup.com/api/station/AddStationData";
	 char *dt = "{\"APIKey\":\"9E95D850FD2096889E8B30102BB0FEF4\",\"StationID\":\"76-17-174-111-249-236\",\"Extention1\":\"123123\",\"Extention2\":\"12312\",\"Extention3\":\"1\",\"Extention4\":\"123\",\"Extention5\":\"string\",\"Extention6\":\"string\",\"Extention7\":\"string\",\"Extention8\":\"string\",\"Extention9\":\"string\",\"Extention10\":\"string\"}";

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
				 Simready = 1;
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
		 if(AT_Gps_Getlocation(lat, Longs)<1)
		 {
//			 xMessage Gps;
//			 Gps.handle_id = GPS_GET_LOCATION_FAIL;
//			 xQueueSend(Queue_Handle,( void * ) &Gps,( TickType_t )1000);
			 System_Add_event(GPS_GET_LOCATION_FAIL);
		 }
		 if(Network_on)
			 if(AT_Http_set_url(url)>0)
			 {
				 AT_Http_post(dt);
			 }
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
