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
#include "stdio.h"
#include "stdlib.h"
#include "AT_define.h"

char AT_Buff[1024];



int At_init(void)
{
	AT_Hardware_Port_init();
	return 1;
}
int At_Command(char *cmd ,char *RSP1,uint32_t timeout)
{
	#if AT_DEDUG
		sprintf(AT_Debug_buf,"[%lu] AT_CMD: %s",Get_Millis(),cmd);
		AT_Debug_write(AT_Debug_buf);
	#endif
	uint32_t Time_t = Get_Millis() + timeout;
	uint32_t Tol = 0;
	if(cmd != NULL)
		AT_Send_buf((uint8_t *)cmd, strlen(cmd), timeout);
	//AT_Free_Rxbuffer();
	memset(AT_Buff,0,100);
	int s = AT_Get_Data_Avaiable(AT_Buff);

	if(AT_Recv_until(AT_Buff+s, RSP1, timeout))
	{
		#if AT_DEDUG
			sprintf(AT_Debug_buf,"[%lu] AT_DONE: %lu ms,%s",Get_Millis(),timeout - (Time_t -Get_Millis()),AT_Buff);
			AT_Debug_write(AT_Debug_buf);
		#endif
		return timeout - (Time_t -Get_Millis() );;
	}
	#if AT_DEDUG
			sprintf(AT_Debug_buf,"[%lu] AT_FAIL: %s",Get_Millis(),AT_Buff);
			AT_Debug_write(AT_Debug_buf);
	#endif
//	while(Get_Millis() < Time_t)
//	{
//		recv = AT_Recv_Rx_buf((uint8_t *)AT_Buff+Tol , 1024);
//		if(recv > 0 )
//		{
//			Tol+= recv;
//			AT_Buff[Tol] = 0;
//			if(strstr(AT_Buff,RSP1))
//				return timeout - (Time_t -Get_Millis() );
//		}
//		AT_delay(1);
//	}
	return -1;
}

int AT_Getstring_index(char *des,char *scr,char *key,int index)
{
   char *p;
   if(!(p = strstr(scr,key))) //tim kiem key
      return -1;
   uint16_t len = strlen(p);
   char *tmp = (char *)malloc(len);
   len = sprintf(tmp,",%s",p+2);
   uint8_t cnt=0;
   uint16_t i=0;
   //printf("%s\n",tmp);
   for(i=0;i<len;i++)
   {
      if(tmp[i] == ',')
      {
         if(cnt == index)
            break;
         cnt++;
      }
   }
   char *start= (tmp+i+1);
   if(i != len)
   {
      //printf("find match\n");
      uint8_t tot;
      if(!(p = strstr(start,",")))
      {
         if(!(p = strstr(start,"\r")))
         {
            tot = strlen(start);
         }
         else tot = strlen(start)-strlen(p);
      }
      else
        tot = strlen(start)-strlen(p);
      memcpy(des,start,tot);
      des[tot]=0;
      free(tmp);
      return 1;
   }
   free(tmp);
   printf("not find index\n" );
   return -3;
}
int AT_Getint_index(int *res,char *src,char *key,int index)
{
   char des[20];
   if(AT_Getstring_index(des,src,key,index)<0)
   {
      return-1;
   }
   *res = atoi(des);
   return *res;
}



