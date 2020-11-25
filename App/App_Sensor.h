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
#endif /* APP_SENSOR_H_ */
