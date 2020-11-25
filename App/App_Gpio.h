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




int SET_PWR_CTRL_GET_STATE();

#endif /* APP_GPIO_H_ */
