/*
 * App_Callback.c
 *
 *  Created on: Nov 25, 2020
 *      Author: tranh
 */


#include  "main.h"
#include "stdint.h"



extern UART_HandleTypeDef huart2;
extern UART_HandleTypeDef huart1;
extern UART_HandleTypeDef huart3;

__weak void App_Huart2_Tx_callback(){
	return;
}
__weak void App_Huart2_rx_callback(){
	return;
}

__weak void App_Huart1_Tx_callback(){
	return;
}
__weak void App_Huart1_rx_callback(){
	return;
}
__weak void App_Huart3_Tx_callback(){
	return;
}
__weak void App_Huart3_rx_callback(){
	return;
}


void HAL_UART_TxCpltCallback(UART_HandleTypeDef *huart)
{
	if(huart->Instance == huart2.Instance)
	{
		App_Huart2_Tx_callback();
//		#if HALF_DUPLEX      //hafp duplex
//			MB_RECEI_ENABLE;
//			Txbufer_empty = 1;
//		#endif
	}else 	if(huart->Instance == huart1.Instance)
	{
		App_Huart1_Tx_callback();
//		#if HALF_DUPLEX      //hafp duplex
//			MB_RECEI_ENABLE;
//			Txbufer_empty = 1;
//		#endif
	}

}
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
	if(huart->Instance == huart1.Instance)
	{
		App_Huart1_rx_callback();

	}
	else if(huart->Instance == huart2.Instance)
	{
		App_Huart2_rx_callback();
//		#if HALF_DUPLEX      //hafp duplex
//			Rx_Done = 1;
//		#endif
	}
	else if(huart->Instance == huart3.Instance)
	{
		App_Huart3_rx_callback();
//		#if HALF_DUPLEX      //hafp duplex
//			Rx_Done = 1;
//		#endif
	}
}



