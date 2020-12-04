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

extern volatile Button Btn_menu,Btn_exit,Btn_up,Btn_down;

int SET_PWR_CTRL_GET_STATE();
int Power_ctrl_Process(void);
void Button_process(volatile Button *Btn);
void Button_Init(void);
#endif /* APP_GPIO_H_ */
