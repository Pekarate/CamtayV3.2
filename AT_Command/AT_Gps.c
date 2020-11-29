/*
 * AT_Gps.c
 *
 *  Created on: Nov 27, 2020
 *      Author: tranh
 */


#include "AT_Gps.h"
#include "AT_Command_driver.h"

int AT_Gps_On(void)
{
	 if(At_Command((char*)"AT+QGPS=1\r\n", (char*)"OK\r\n", 2000)>=0)
	 {
		 return 1;
	 }
	 else
	 {
		 return -1;
	 }
}

int AT_Gps_Getlocation(char *lat,char *longs)
{
	 if(At_Command((char*)"AT+QGPSLOC=2\r\n", (char*)"OK\r\n", 2000)>0)
	 {
		 AT_Getstring_index(lat, AT_Buff, (char *)": ", 1);
		 AT_Getstring_index(longs, AT_Buff, (char *)": ", 2);
		 return 1;
	 }else
	 {

	 }
	return -1;
}

int AT_Gps_Off(void)
{
	 if(At_Command((char*)"AT+QGPSEND\r\n", (char*)"OK\r\n", 2000)>=0)
	 {
		 return 1;
	 }
	 else
	 {
		 return -1;
	 }
}

