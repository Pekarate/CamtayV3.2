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
uint32_t Battery_Updatetime = 0;
uint32_t Sensor_Updatetime = 0;
uint32_t Sensor_Scan_Time = 0;

uint8_t Sensor_index = 0;

SemaphoreHandle_t xSemaphore;
SemaphoreHandle_t xSemaphore_battery;
SemaphoreHandle_t xSemaphore_Sensordata;

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
//		 			  if( xSemaphoreTake( xSemaphore, ( TickType_t ) 10 ) == pdTRUE )
//		 			  {

//		 			  }
//		 			  else
//		 			  {
//		 				  while(1);
//		 			  }


		 		}
		 		if(HAL_GetTick()> Sensor_Updatetime)
		 		{
					  if( xSemaphoreTake( xSemaphore_Sensordata, ( TickType_t ) 10 ) == pdTRUE )
					  {
							 Sensor_Updatetime =HAL_GetTick() +500;
							 Lv_Sensor_Data_set((float)Sensor[Sensor_index].Datax[0].Data/Sensor[Sensor_index].Datax[0].base);
							 if(Update_Name)
							 {
								 Lv_Sensor_Name_set(Sensor[Sensor_index].Name);
								 Update_Name = 0;
							 }
							 if(Update_Unit)
							 {
								 Lv_Sensor_Unit_set(Sensor[Sensor_index].Datax[0].Unit);
								 Update_Unit= 0;
							 }
							 xSemaphoreGive( xSemaphore_Sensordata );
					  }

		 		}
		 		osDelay(1); // 5ms
	}
 }


 Btn_state_t Pwr_State = BTN_RELEASE;
 uint32_t Pwr_Time = 0;


 void io_handle_cb(void const * argument){
	 for (;;) {
		  if(SET_PWR_CTRL_GET_STATE())
		  {
			  if( Pwr_State == BTN_RELEASE)
			  {
				  HAL_Delay(15);
				  if(SET_PWR_CTRL_GET_STATE())
				  {
					  Pwr_State = BTN_START_PRESS;
					  Pwr_Time = HAL_GetTick();
				  }
			  }
			  else
			  {
					if(HAL_GetTick() - Pwr_Time > 3000)
					{
						HAL_GPIO_WritePin(PWR_OFF_GPIO_Port, PWR_OFF_Pin, GPIO_PIN_SET);
					}
			  }
		  }
		  else {
				if(Pwr_State == BTN_START_PRESS)
				{
						if(!SET_PWR_CTRL_GET_STATE())
						{
							Pwr_State = BTN_RELEASE;
							Pwr_Time = HAL_GetTick() - Pwr_Time;
							if(Pwr_Time > 3000)
							{
								HAL_GPIO_WritePin(PWR_OFF_GPIO_Port, PWR_OFF_Pin, GPIO_PIN_SET);
							}
						}


				}
		 }
		 osDelay(1); // 5ms

	}
 }


uint8_t UID[16];
#define UID0 (*(volatile uint32_t *)0x1FFF7A10) //Unique device ID register
#define UID1 (*(volatile uint32_t *)0x1FFF7A14)
#define UID2 (*(volatile uint32_t *)0x1FFF7A18)
#define FLASH_SIZE (*(volatile uint32_t *)0x1FFF7A22)

uint32_t UniqueID0,UniqueID1,UniqueID2,Flash;
 void STC3115_handle_cb(void const * argument){

	 uint32_t Bat_cnt = 0;
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
				 Ramfree = xPortGetFreeHeapSize();
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
				 if(Sensor_Scan(Sensor_index,0)>-1)
				 {
					 Sensor_Scan_Time = HAL_GetTick() +500;

				 }
				 else
				 {
					Sensor_index++;
					if(Sensor_index >App_Sensor_Get_NumSensor() )
						Sensor_index = 0;
	//				 Lv_Sensor_Data_set(0.00f);
	//				 Lv_Sensor_Name_set("Scan...");
	//				 Lv_Sensor_Unit_set("");
				 }
				 xSemaphoreGive( xSemaphore_Sensordata );
			 }
		 }

		 osDelay(1); // 5ms
	}
 }
