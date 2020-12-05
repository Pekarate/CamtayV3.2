#ifndef __USER_DEFINE_H
#define __USER_DEFINE_H

#include "main.h"
#include "lvgl.h"

#include "usb_device.h"

#define MAX_SENSOR_NUM 3
typedef struct{
	uint16_t Reg;
	uint16_t Data;
	char	 Unit[5];
	char	 DataName[15];
	uint16_t base;		//cơ số để chia
}Sensor_data_t;
typedef struct {
		uint8_t Id;
		uint8_t Enable;
		uint8_t numData;
		Sensor_data_t Datax[5];
		char Name[50];
		uint8_t status;
}Sensor_typedef_t;

typedef enum{
	SYSTEM_STATE_INIT,
	SYSTEM_STATE_GETDATA,
	SYSTEM_STATE_CONFIG

}System_state_t;

typedef enum{
	BTN_ID_MENU,
	BTN_ID_UP,
	BTN_ID_DOWN,
	BTN_ID_EXIT
}Btn_Id;

typedef enum{
	BTN_RELEASE,
	BTN_START_PRESS
}Btn_state_t;
typedef struct{
	GPIO_TypeDef 	*Btn_Port;
	uint32_t 		Btn_Pin;
	Btn_state_t 	State;
	uint32_t 		Press_time;
	uint32_t 		Start_time;
	Btn_Id 			Id;
}Button;

typedef enum{

	GPS_GET_LOCATION_DONE = 0,
	GPS_GET_LOCATION_FAIL,
	SIM_READY,
	SIM_NOT_READY,
	GSM_ON,
	GSM_OFF,
	SYSTEM_OFF
}_Sys_Event;



typedef enum{

}Sys_State;
typedef struct{
	uint16_t when;
}IO_Event_t;

#define SD_CARD 1
#define NUM_SENSOR 5

#define BTN_READ_PIN_STATE(btn) HAL_GPIO_ReadPin(btn->Btn_Port, btn->Btn_Pin)

extern volatile Button Btn_menu,Btn_exit,Btn_up,Btn_down;
extern USBD_HandleTypeDef hUsbDeviceFS;
extern uint8_t Sensor_Id;


extern Sensor_typedef_t Sensor[MAX_SENSOR_NUM];
void MainfunctionTask(void const * argument);
void UsbProcessTask(void const * argument);
void io_handle_cb(void const * argument);
void System_Add_event(_Sys_Event Event);
#endif
