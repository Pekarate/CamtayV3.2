/*
 * App_Lvgl.h
 *
 *  Created on: Nov 24, 2020
 *      Author: tranh
 */

#ifndef APP_LVGL_H_
#define APP_LVGL_H_

void lv_obj_init(void);
void Lv_Battery_set(int Presen,int change);
void Lv_Sensor_Data_set(float val);
void Lv_Sensor_Name_set(char *Name);
void Lv_Sensor_Unit_set(char *Unit);

int App_add_console_log(char *log,int len);
#endif /* APP_LVGL_H_ */
