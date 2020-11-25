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
extern UART_HandleTypeDef huart1;
#define AT_PORT huart1


uint8_t AT_Rx_done = 0;
uint8_t AT_Tx_done = 0;

uint8_t Huart1_rx_buf[1025];

void App_Huart1_Tx_callback(){
	AT_Tx_done = 1;
}


uint16_t Rx_index_reg=0,Rx_index_next=0;
__IO uint8_t Rx_overload = 0;




void App_Huart1_rx_callback(){
	HAL_UART_Receive_DMA(&huart1, Huart1_rx_buf, 1024);
	AT_Rx_done = 1;
}
int AT_Port_init()
{
	HAL_UART_Receive_DMA(&huart1, Huart1_rx_buf, 1024);
	return 1;
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
	if(Rx_overload)
	{

	}
	return -1;
}
int AT_Recv_buf(uint8_t *data,uint16_t len,uint8_t timeout)
{
	return -1;
}




