/*
 * App_Gpio.c
 *
 *  Created on: Nov 24, 2020
 *      Author: tranh
 */

#include  "main.h"
#include "App_Gpio.h"
#include "cmsis_os.h"
#include "User_define.h"

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
Btn_state_t Pwr_State = BTN_RELEASE;
uint32_t Pwr_Time = 0;
int Power_ctrl_Process()
{
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
				if(HAL_GetTick() - Pwr_Time > 2000)
				{
					System_Add_event(SYSTEM_OFF);
//					 xMessage Gps;
//					 Gps.handle_id = SYSTEM_OFF;
//					 xQueueSend(Queue_Handle,( void * ) &Gps,( TickType_t )1000);
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
	  return 1;
}
