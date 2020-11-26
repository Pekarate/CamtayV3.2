/*
 * AT_Hardware_Driver.h
 *
 *  Created on: Nov 25, 2020
 *      Author: tranh
 */

#ifndef AT_HARDWARE_DRIVER_H_
#define AT_HARDWARE_DRIVER_H_

#include "main.h"
#include "stdint.h"

int AT_Hardware_Port_init();
int AT_Send_buf(uint8_t *data,uint16_t len,uint8_t timeout);
int AT_Recv_Rx_buf(uint8_t *des,uint16_t size); // return data in rx bufer
uint32_t Get_Millis(void);
void AT_delay(uint32_t dl);
int AT_Free_Rxbuffer(void);
#endif /* AT_HARDWARE_DRIVER_H_ */
