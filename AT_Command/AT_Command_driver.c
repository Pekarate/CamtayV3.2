/*
 * AT_Command_driver.c
 *
 *  Created on: Nov 26, 2020
 *      Author: tranh
 */

#include "AT_Command_driver.h"
#include "AT_Hardware_Driver.h"

#include "stdint.h"
#include "string.h"

char AT_Buff[1024];
int At_init(void)
{
	AT_Hardware_Port_init();
	return 1;
}
int At_Command(char *cmd ,char *RSP1,uint32_t timeout)
{
	uint32_t Time_t = Get_Millis() + timeout;
	uint32_t Tol = 0,recv;
	AT_Send_buf((uint8_t *)cmd, strlen(cmd), timeout);
	AT_Free_Rxbuffer();
	memset(AT_Buff,0,1024);
	while(Get_Millis() < Time_t)
	{
		recv = AT_Recv_Rx_buf((uint8_t *)AT_Buff+Tol , 1024);
		if(recv > 0 )
		{
			Tol+= recv;
			AT_Buff[Tol] = 0;
			if(strstr(AT_Buff,RSP1))
				return timeout - (Time_t -Get_Millis() );
		}
		AT_delay(1);
	}
	return -1;
}

