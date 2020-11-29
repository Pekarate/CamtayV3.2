/*
 * AT_Command.h
 *
 *  Created on: Nov 27, 2020
 *      Author: tranh
 */

#ifndef AT_COMMAND_H_
#define AT_COMMAND_H_

int AT_Check_SimReady(void);
int AT_Echo_Off(void);
int AT_CheckModule_ready(void);
int AT_TurnOn_network(void);
int AT_Check_Network_Quality(int *rssi);
#endif /* AT_COMMAND_H_ */
