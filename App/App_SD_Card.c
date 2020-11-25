/*
 * App_SD_Card.c
 *
 *  Created on: Nov 24, 2020
 *      Author: tranh
 */


#include "fatfs.h"
#include "App_SD_Card.h"
#include "string.h"
FATFS my_FatRS;
extern char SDPath[4];   /* SD logical drive path */
FRESULT res = FR_OK;
FIL File_Log;
FRESULT fr;
uint8_t Is_mounted =0;
int SD_Card_Mount(void)
{
	  if((res = f_mount(&my_FatRS, SDPath, 1))==FR_OK)
	  {
		  Is_mounted=1;

	  }
	  else
	  {
		  Is_mounted =0;

	  }
	  return Is_mounted;
}
int SD_Card_Get_Setting(char *des)
{
	  FIL File_Setting;
	  UINT br;
	  char Sys_config_t[1024];
	  f_open(&File_Setting, "SETTING.txt", FA_OPEN_ALWAYS | FA_READ);
	  f_read(&File_Setting, Sys_config_t, 2048, &br);
	  if(br<100)
	  {
		  //no file
	  }
	  else
	  {
		  memcpy(des,Sys_config_t,br);
	  }
	  f_close(&File_Setting);
}
