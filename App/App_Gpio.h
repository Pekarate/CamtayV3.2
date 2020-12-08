/*
 * APP_Gpio.h
 *
 *  Created on: Nov 24, 2020
 *      Author: tranh
 */

#ifndef APP_GPIO_H_
#define APP_GPIO_H_
#include "main.h"
#include "User_define.h"

#define PWR_CTRL_GET_STATE HAL_GPIO_ReadPin(PWR_CTRL_GPIO_Port, PWR_CTRL_Pin)



#define SYS_USE_RTOS 1

typedef enum{
	BTN_STATE_RELEASE,
	BTN_STATE_START_PRESS,
	BTN_STATE_PRESS_LONG
}Btn_state_t;
typedef enum
{
	BTN_PRESSED = 0,
	BTN_PRESS_LONG,
	BTN_PRESS_VERY_LONG,
	BTN_RELEASE
}IO_EVENT;
typedef struct
{
   uint8_t event;
   uint16_t Time_press;
   uint16_t btn_id;
   uint32_t when;
}IoMessage;

typedef enum{
	BTN_ID_MENU,
	BTN_ID_UP,
	BTN_ID_DOWN,
	BTN_ID_EXIT,
	BTN_FREE
}Btn_Id;


typedef struct{
	GPIO_TypeDef 	*Btn_Port;
	uint32_t 		Btn_Pin;
	Btn_state_t 	State;
	uint32_t 		Press_time;
	uint32_t 		Start_time;
	Btn_Id 			Id;
}Button;


#define PRESS_LONG_TIME 1000
#define PRESS_VERY_LONG_TIME 2000
extern volatile Button Btn_menu,Btn_exit,Btn_up,Btn_down;

int SET_PWR_CTRL_GET_STATE();
int Power_ctrl_Process(void);
void Button_process(volatile Button *Btn);
void Button_Init(void);
int GPIO_Get_message(IoMessage *Message);
#endif /* APP_GPIO_H_ */
