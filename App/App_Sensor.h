/*
 * App_Sensor.h
 *
 *  Created on: Nov 24, 2020
 *      Author: tranh
 */

#ifndef APP_SENSOR_H_
#define APP_SENSOR_H_
void App_Sensor_Init(char *Sensor_info);
int Sensor_Scan(int Sensor_index,int valueIndex);
int App_Sensor_Get_NumSensor();

int Calib_PH();
int  Calib_sanity();

typedef enum{
	SS_INIT,
	SS_RUN,
	SS_INIT_CALIB,
	SS_START_CALIB,
	SS_WAIT_CALIB
}Sensor_state_typedef;
#endif /* APP_SENSOR_H_ */
