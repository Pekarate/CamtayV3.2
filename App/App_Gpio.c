/*
 * App_Gpio.c
 *
 *  Created on: Nov 24, 2020
 *      Author: tranh
 */

#include  "main.h"
#include "App_Gpio.h"

#include "User_define.h"
#if SYS_USE_RTOS
#include "cmsis_os.h"
#endif
#define BTN_READ_PIN_STATE(btn) HAL_GPIO_ReadPin(btn->Btn_Port, btn->Btn_Pin)
volatile Button Btn_menu,Btn_exit,Btn_up,Btn_down;

#if SYS_USE_RTOS

QueueHandle_t Gpio_queue = NULL;
int GPIO_Add_message(uint8_t event,uint8_t btn_id,uint16_t Time_press)
{
				 IoMessage Message;
				 Message.event = event;
				 Message.when = HAL_GetTick();
				 Message.btn_id = btn_id;
				 Message.Time_press = Time_press;
				 if(xQueueSend(Gpio_queue,( void * ) &Message,( TickType_t )10) == pdPASS )
				 {
					 return 1;
				 }
				 return 0;
}



int GPIO_Get_message(IoMessage *Message)
{
	IoMessage  Message_t;
	if(xQueueReceive(Gpio_queue, &Message_t, ( TickType_t )1) == pdPASS )
	{
		*Message = Message_t;
		return 1;
	}
	return 0;
}
#endif

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
Btn_state_t Pwr_State = BTN_STATE_RELEASE;
uint32_t Pwr_Time = 0;
int Power_ctrl_Process(void)
{
	  if(SET_PWR_CTRL_GET_STATE())
	  {
		  if( Pwr_State == BTN_STATE_RELEASE)
		  {
			  HAL_Delay(15);
			  if(SET_PWR_CTRL_GET_STATE())
			  {
				  Pwr_State = BTN_STATE_START_PRESS;
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
			if(Pwr_State == BTN_STATE_START_PRESS)
			{
					if(!SET_PWR_CTRL_GET_STATE())
					{
						Pwr_State = BTN_STATE_RELEASE;
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

	#if SYS_USE_RTOS
	Gpio_queue = xQueueCreate(15, sizeof( IoMessage ) );
	#endif
	 Btn_menu.Btn_Pin = BTN_MENU_Pin;
	 Btn_menu.Btn_Port = BTN_MENU_GPIO_Port;
	 Btn_menu.Id = BTN_ID_MENU;
	 Btn_menu.State = BTN_STATE_RELEASE;

	 Btn_exit.Btn_Pin = BTN_EXIT_Pin;
	 Btn_exit.Btn_Port = BTN_EXIT_GPIO_Port;
	 Btn_exit.Id = BTN_ID_EXIT;
	 Btn_exit.State = BTN_STATE_RELEASE;

	 Btn_down.Btn_Pin = BTN_DOWN_Pin;
	 Btn_down.Btn_Port = BTN_DOWN_GPIO_Port;
	 Btn_down.Id = BTN_ID_DOWN;
	 Btn_down.State = BTN_STATE_RELEASE;

	 Btn_up.Btn_Pin = BTN_UP_Pin;
	 Btn_up.Btn_Port = BTN_UP_GPIO_Port;
	 Btn_up.Id = BTN_ID_UP;
	 Btn_up.State = BTN_STATE_RELEASE;



}
void Button_process(volatile Button *Btn)
{
	 if(!BTN_READ_PIN_STATE(Btn))
	 {
		 switch (Btn->State) {
			case BTN_STATE_RELEASE:
				 osDelay(15);
				 if(!BTN_READ_PIN_STATE(Btn))
				 {
					 GPIO_Add_message(BTN_PRESSED,Btn->Id,0);
					 Btn->State = BTN_STATE_START_PRESS;
					 Btn->Start_time = HAL_GetTick();
				 }
				break;
			case BTN_STATE_START_PRESS:
				 if((HAL_GetTick() - Btn->Start_time)> PRESS_LONG_TIME)
				 {
					 GPIO_Add_message(BTN_PRESS_LONG,Btn->Id,PRESS_LONG_TIME);
					 Btn->State = BTN_STATE_PRESS_LONG;
				 }
				break;
			case BTN_STATE_PRESS_LONG:
				break;
			default:
				break;
		}
//		 if(Btn->State ==BTN_STATE_RELEASE)
//		 {
//			 osDelay(15);
//			 if(!BTN_READ_PIN_STATE(Btn))
//			 {
//				 Btn->State = BTN_STATE_START_PRESS;
//				 Btn->Start_time = HAL_GetTick();
//			 }
//		 }
//		 else
//		 {
//			 if((HAL_GetTick() - Btn->Start_time)> PRESS_LONG_TIME)
//			 {
//				 GPIO_Add_message(BTN_PRESS_LONG,0);
//			 }
//		 }
	 }
	 else {
		 switch (Btn->State) {
			case BTN_STATE_RELEASE:
//				 osDelay(15);
//				 if(!BTN_READ_PIN_STATE(Btn))
//				 {
//					 GPIO_Add_message(BTN_PRESSED,0);
//					 Btn->State = BTN_STATE_START_PRESS;
//					 Btn->Start_time = HAL_GetTick();
//				 }
				break;
			case BTN_STATE_START_PRESS:
				osDelay(5);
				if(BTN_READ_PIN_STATE(Btn))
				{
					Btn->State = BTN_STATE_RELEASE;
					Btn->Press_time  = HAL_GetTick() - Btn->Start_time;
					GPIO_Add_message(BTN_RELEASE,Btn->Id,Btn->Press_time);
				}
				break;
			case BTN_STATE_PRESS_LONG:
				osDelay(5);
				if(BTN_READ_PIN_STATE(Btn))
				{
					Btn->State = BTN_STATE_RELEASE;

					Btn->Press_time  = HAL_GetTick() - Btn->Start_time;
					GPIO_Add_message(BTN_RELEASE,Btn->Id,Btn->Press_time);
				}
				break;
			default:
				break;
		}
//		if(Btn->State == BTN_STATE_START_PRESS)
//		{
//			osDelay(15);
//			if(BTN_READ_PIN_STATE(Btn))
//			{
//				Btn->State = BTN_STATE_RELEASE;
//				Btn->Press_time  = HAL_GetTick() - Btn->Start_time;
//			}
//		}
	}
}
