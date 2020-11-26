/*
 * AT_Hardware_Driver.c
 *
 *  Created on: Nov 25, 2020
 *      Author: tranh
 */

#include "main.h"
#include "AT_Hardware_Driver.h"
#include "cmsis_os.h"
#include "fatfs.h"
#include "usb_device.h"
#include "string.h"


extern UART_HandleTypeDef huart1;
#define AT_PORT huart1
#define AT_RX_SIZE 1024

__IO uint16_t AT_Rx_done = 0;
__IO uint16_t AT_Tx_done = 0;

uint8_t Huart1_rx_buf[AT_RX_SIZE +1];

void App_Huart1_Tx_callback(){
	AT_Tx_done = 1;
}


uint16_t Rx_index_reg=0,Rx_index_next=0;
__IO uint8_t Rx_overload = 0;
__IO uint32_t Rx_overload_tot = 0;



void App_Huart1_rx_callback(){
	Rx_overload_tot++;
	Rx_overload++;
	HAL_UART_Receive_DMA(&huart1, Huart1_rx_buf, 1024);
	AT_Rx_done = 1;
}
int AT_Hardware_Port_init()
{
	HAL_UART_Receive_DMA(&huart1, Huart1_rx_buf, 1024);
	return 1;
}

uint32_t Get_Millis(void)
{
	return HAL_GetTick();
}

void AT_delay(uint32_t dl)
{
	osDelay(dl);
}

int AT_Send_buf(uint8_t *data,uint16_t len,uint8_t timeout)
{
	AT_Tx_done = 0;
	if(HAL_UART_Transmit_DMA(&AT_PORT, data, len) != HAL_OK)
	{
		return -1;
	}
	uint32_t timetx = HAL_GetTick() + timeout;
	while(HAL_GetTick() <timetx )
	{
		if(AT_Tx_done)
			return len;
		osDelay(1);
	}
	return -2;
}
int AT_Recv_1byte(uint16_t *len)
{
//	Rx_index_next = AT_RX_SIZE - AT_PORT.hdmarx->Instance->NDTR; // NDTR counter down
//	if(Rx_overload)
//	{
//	//	if()
//	}
//	else
//	{
//
//	}
	return -1;
}
int AT_Free_Rxbuffer(void){
	Rx_index_next = AT_RX_SIZE - AT_PORT.hdmarx->Instance->NDTR; // NDTR counter down
	Rx_index_reg = Rx_index_next; // reset contro
	Rx_overload = 0;
	return 1;
}

int AT_Recv_Rx_buf(uint8_t *des,uint16_t size) // return data in rx bufer
{
	Rx_index_next = AT_RX_SIZE - AT_PORT.hdmarx->Instance->NDTR; // NDTR counter down
	uint16_t Rxsize = 0;
	if(Rx_overload)
	{
		if(Rx_index_next>= Rx_index_reg)
		{
			Rxsize = AT_RX_SIZE;
			if(Rxsize >size)
			{
				Rxsize = AT_RX_SIZE;
				memcpy(des,Huart1_rx_buf+ Rx_index_next,AT_RX_SIZE -Rx_index_next);
				memcpy(des + AT_RX_SIZE -Rx_index_next,Huart1_rx_buf,Rx_index_next);
				Rx_index_reg = Rx_index_next;
				Rx_overload = 0;
			}
		}
		else
		{
			Rxsize = Rx_index_next+ AT_RX_SIZE -Rx_index_reg;

			memcpy(des,Huart1_rx_buf+ Rx_index_next,AT_RX_SIZE -Rx_index_reg);
			memcpy(des + AT_RX_SIZE -Rx_index_reg,Huart1_rx_buf,Rx_index_next);


			Rx_index_reg = Rx_index_next;
			Rx_overload = 0;

		}
	}
	else
	{
		if(Rx_index_next !=Rx_index_reg )
		{
			Rxsize = Rx_index_next - Rx_index_reg;
			memcpy(des,Huart1_rx_buf+Rx_index_reg ,Rx_index_next-Rx_index_reg );
			Rx_index_reg = Rx_index_next;
			Rx_overload = 0;
		}
		else
			return 0;
	}
	return Rxsize;
}

int AT_Recv_buf(uint8_t *data,uint16_t len,uint8_t timeout)
{
	return -1;
}
int AT_Recv_until(uint8_t *data,char* end,uint8_t timeout)
{
	uint32_t Time_t = Get_Millis()+ timeout;
	uint16_t tol = 0,recv = 0;
	while(Get_Millis() < Time_t)
	{
		recv = AT_Recv_Rx_buf((uint8_t *)data+ tol , 1024);
		if(recv > 0 )
		{
			tol+= recv;
			end[tol] = 0;
			if(strstr((char *)data,end))
				return timeout - (Time_t -Get_Millis() );
		}
		AT_delay(1);
	}
	return 0;
}




