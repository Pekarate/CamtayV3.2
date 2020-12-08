/*
 * App_Lvgl.h
 *
 *  Created on: Nov 24, 2020
 *      Author: tranh
 */

#ifndef APP_LVGL_H_
#define APP_LVGL_H_

void lv_obj_init(void);


typedef enum{
	MAIN_SCREEN,
	SETUP_SCREEN,
	GET_UID_SCREEN,
	CALIB_MODE,
	CALIB_START,
	CALIB_RESULT,
	IDE_MODE
}Sys_Screen_Active;

extern Sys_Screen_Active current_active;
void Lv_switch_to_screen(Sys_Screen_Active screen);
void lv_Gps_on();
void lv_Gps_off();
void lv_Sim_ready();
void lv_Sim_not_ready();
void lv_Gsm_on();
void lv_Gsm_off();



void Lv_Battery_set(int Presen,int change);
void Lv_Sensor_Data_set(float val);
void Lv_Sensor_Name_set(char *Name);
void Lv_Sensor_Unit_set(char *Unit);

int App_add_console_log(char *log,int len);

void Lv_DateTime_update(char *Time);
int lv_list_get_forcus_index();
void Lv_list_up(uint8_t up_down);
void lv_list_forcus_btn();
void lv_set_sensor_running(int id);
#endif /* APP_LVGL_H_ */
