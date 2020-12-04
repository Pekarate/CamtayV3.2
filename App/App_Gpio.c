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


#define BTN_READ_PIN_STATE(btn) HAL_GPIO_ReadPin(btn->Btn_Port, btn->Btn_Pin)
volatile Button Btn_menu,Btn_exit,Btn_up,Btn_down;

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
int Power_ctrl_Process(void)
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
void Button_Init(void)
{
	 Btn_menu.Btn_Pin = BTN_MENU_Pin;
	 Btn_menu.Btn_Port = BTN_MENU_GPIO_Port;
	 Btn_menu.Id = BTN_ID_MENU;
	 Btn_menu.State = BTN_RELEASE;

	 Btn_exit.Btn_Pin = BTN_EXIT_Pin;
	 Btn_exit.Btn_Port = BTN_EXIT_GPIO_Port;
	 Btn_exit.Id = BTN_ID_EXIT;
	 Btn_exit.State = BTN_RELEASE;

	 Btn_down.Btn_Pin = BTN_DOWN_Pin;
	 Btn_down.Btn_Port = BTN_DOWN_GPIO_Port;
	 Btn_down.Id = BTN_ID_DOWN;
	 Btn_down.State = BTN_RELEASE;

	 Btn_up.Btn_Pin = BTN_UP_Pin;
	 Btn_up.Btn_Port = BTN_UP_GPIO_Port;
	 Btn_up.Id = BTN_ID_UP;
	 Btn_up.State = BTN_RELEASE;

}
void Button_process(volatile Button *Btn)
{
	 if(!BTN_READ_PIN_STATE(Btn))
	 {
		 if(Btn->State ==BTN_RELEASE)
		 {
			 osDelay(15);
			 if(!BTN_READ_PIN_STATE(Btn))
			 {
				 Btn->State = BTN_START_PRESS;
				 Btn->Start_time = HAL_GetTick();
			 }
		 }
	 }
	 else {
		if(Btn->State == BTN_START_PRESS)
		{
			osDelay(15);
			if(BTN_READ_PIN_STATE(Btn))
			{
				Btn->State = BTN_RELEASE;
				Btn->Press_time  = HAL_GetTick() - Btn->Start_time;
			}
		}
	}
}
