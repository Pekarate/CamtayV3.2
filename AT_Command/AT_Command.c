/*
 * AT_Comand.c
 *
 *  Created on: Nov 27, 2020
 *      Author: tranh
 */



#include "AT_Hardware_Driver.h"
#include "AT_Command_driver.h"
#include  "AT_Command.h"

int AT_CheckModule_ready(void)
{
	if(At_Command((char*)"AT\r\n", (char*)"OK\r\n", 2000) <0)
		return 0;
	return 1;
}
int AT_Echo_Off(void)
{
	if(At_Command((char*)"ATE0\r\n", (char*)"OK\r\n", 2000) <0)
		return 0;
	return 1;
}
int AT_Check_SimReady(void)
{
	if(At_Command((char*)"AT+CPIN?\r\n", (char*)"READY", 2000)<0)
		return 0;
	return 1;
}
int AT_TurnOn_network(void)
{
	if(At_Command((char *)"AT+CREG=1\r\n",(char *)"OK\r\n",5000)< 0)
		return 0;
	return 1;
}
int AT_Check_Network_Quality(int *rssi)
{
	 if(At_Command((char*)"AT+CSQ\r\n", (char*)"OK\r\n", 2000)>=0)
	 {
		 if(AT_Getint_index(rssi, AT_Buff, ": ", 0)>=0)
			 return 1;
	 }
	 return 0;
}

