/*
 * AT_Command_driver.h
 *
 *  Created on: Nov 26, 2020
 *      Author: tranh
 */

#ifndef AT_COMMAND_DRIVER_H_
#define AT_COMMAND_DRIVER_H_

#include "stdint.h"
#include "string.h"
#include "stdio.h"

int At_init(void);

int At_Command(char *cmd ,char *RSP1,uint32_t timeout);
int AT_Getstring_index(char *des,char *scr,char *key,int index);
int AT_Getint_index(int *res,char *src,char *key,int index);
extern char AT_Buff[1024];

#endif /* AT_COMMAND_DRIVER_H_ */
