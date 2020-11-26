/*
 * AT_Command_driver.h
 *
 *  Created on: Nov 26, 2020
 *      Author: tranh
 */

#ifndef AT_COMMAND_DRIVER_H_
#define AT_COMMAND_DRIVER_H_
#include "stdint.h"
int At_init(void);
int At_Command(char *cmd ,char *RSP1,uint32_t timeout);

#endif /* AT_COMMAND_DRIVER_H_ */
