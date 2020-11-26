/*
 * App_Gpio.c
 *
 *  Created on: Nov 24, 2020
 *      Author: tranh
 */

#include  "main.h"
#include "App_Gpio.h"

int SET_PWR_CTRL_GET_STATE()
{
		int res = 0;
		GPIO_InitTypeDef GPIO_InitStruct = {0};
		GPIO_InitStruct.Pin = PWR_CTRL_Pin;
		GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
		GPIO_InitStruct.Pull = GPIO_NOPULL;
		GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
		HAL_GPIO_Init(PWR_CTRL_GPIO_Port, &GPIO_InitStruct);
		__NOP();
		__NOP();
		res = PWR_CTRL_GET_STATE;
		GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
		HAL_GPIO_Init(PWR_CTRL_GPIO_Port, &GPIO_InitStruct);
		HAL_GPIO_WritePin(PWR_CTRL_GPIO_Port, PWR_CTRL_Pin, GPIO_PIN_SET);
		return res;
}
