/*
 * App_Lvgl.c
 *
 *  Created on: Nov 24, 2020
 *      Author: tranh
 */

#include "User_define.h"
#include "lvgl.h"
#include "lv_port_disp_template.h"

LV_FONT_DECLARE(Number_40);
LV_FONT_DECLARE(Number_37);
LV_FONT_DECLARE(Number_32);
LV_FONT_DECLARE(Number_30);
LV_FONT_DECLARE(Number_35);
LV_FONT_DECLARE(Dseg7_55);
LV_FONT_DECLARE(Arial_20);
LV_FONT_DECLARE(Arial_16);
LV_FONT_DECLARE(Arial_14);
LV_FONT_DECLARE(Arial_12);


extern uint8_t Is_mounted;

#define FONT_NUM_LAGE  Number_35
#define FONT_TEXT_NOMAL	Arial_16
#define FONT_TEXT_SMALL	Arial_12


lv_obj_t *Lb_Data,*Lb_Unit,*Lb_Name;

char Lb1_dt[10];


lv_style_t text_style_num_lage,text_style_nomal,text_style_smal;
void Sys_Update_Data(float val)
{
	if(val<10)
	{
		sprintf(Lb1_dt,"%0.3f",val);
	}else if (val<100)
	{
		sprintf(Lb1_dt,"%0.2f",val);
	}else
	{
		sprintf(Lb1_dt,"%0.1f",val);
	}
	lv_label_set_text(Lb_Data, Lb1_dt);
	lv_obj_set_pos(Lb_Data, 127- lv_obj_get_width(Lb_Data), 63 - lv_obj_get_height(Lb_Data));
}
LV_IMG_DECLARE(Google);

lv_obj_t * Battery;
lv_obj_t * Img_Sd;
lv_obj_t * Img_Warnig;

uint32_t Bat_cnt =0;
uint8_t bat_offset[] = {10,33,66,96};
void Lv_Battery_set(int Presen,int change)
{
		if(!change)
		{
			if(Presen <10 )
			{
				lv_img_set_src(Battery, LV_SYMBOL_BATTERY_EMPTY);
			}
			else if(Presen <33 )
			{
				lv_img_set_src(Battery, LV_SYMBOL_BATTERY_1);
			}
			else if(Presen <66 )
			{
				lv_img_set_src(Battery, LV_SYMBOL_BATTERY_2);
			}
			else if(Presen <96 )
			{
				lv_img_set_src(Battery, LV_SYMBOL_BATTERY_3);
			}
			else
			{
				lv_img_set_src(Battery, LV_SYMBOL_BATTERY_FULL);
			}
		}
		else
		{
			Bat_cnt ++;
			if(Presen <10 )
			{
				if(Bat_cnt%2)
					lv_img_set_src(Battery, LV_SYMBOL_BATTERY_EMPTY);
				else
					lv_img_set_src(Battery, LV_SYMBOL_BATTERY_1);
			}
			else if(Presen <33 )
			{
				if(Bat_cnt%2)
					lv_img_set_src(Battery, LV_SYMBOL_BATTERY_1);
				else
					lv_img_set_src(Battery, LV_SYMBOL_BATTERY_2);
			}
			else if(Presen <66 )
			{
				if(Bat_cnt%2)
					lv_img_set_src(Battery, LV_SYMBOL_BATTERY_2);
				else
					lv_img_set_src(Battery, LV_SYMBOL_BATTERY_3);
			}
			else if(Presen <96 )
			{
				if(Bat_cnt%2)
					lv_img_set_src(Battery, LV_SYMBOL_BATTERY_3);
				else
					lv_img_set_src(Battery, LV_SYMBOL_BATTERY_FULL);
			}
			else
			{
				lv_img_set_src(Battery, LV_SYMBOL_BATTERY_FULL);
			}
		}
}
static void lv_Battery_setting(void)
{
//    lv_obj_t * img1 = lv_img_create(lv_scr_act(), NULL);
//    lv_img_set_src(img1, &Google);
//    lv_obj_align(img1, NULL, LV_ALIGN_CENTER, 0, -20);

	Battery = lv_img_create(lv_scr_act(), NULL);
    lv_img_set_src(Battery, LV_SYMBOL_BATTERY_EMPTY);
    lv_obj_set_pos(Battery, 127-lv_obj_get_width(Battery), -2);//(img2, NULL, LV_ALIGN_CENTER, 0, -20);

    Img_Sd = lv_img_create(lv_scr_act(), NULL);
    lv_img_set_src(Img_Sd, LV_SYMBOL_SD_CARD);
    lv_obj_set_pos(Img_Sd, 127-lv_obj_get_width(Battery) - lv_obj_get_width(Img_Sd)-3, -2);//(img2, NULL, LV_ALIGN_CENTER, 0, -20);

//    Img_Warnig = lv_img_create(lv_scr_act(), NULL);
//	lv_img_set_src(Img_Warnig, LV_SYMBOL_SD_CARD);
//	lv_obj_set_pos(Img_Warnig, 127-lv_obj_get_width(Battery) - lv_obj_get_width(Img_Warnig)-3, -2);//(img2, NULL, LV_ALIGN_CENTER, 0, -20);
//
//	if(Is_mounted)
//	{
//		lv_obj_set_hidden(Img_Warnig, true);
//	}
//	else
//	{
//		lv_obj_set_hidden(Img_Sd, true);
//	}
}

static void lv_font_init(void)
{
	//	static lv_style_t style_line;
//	lv_style_set_bg_color(&text_style_num_lage, LV_STATE_DEFAULT, LV_COLOR_WHITE);
//	lv_style_set_bg_color(&text_style_num_lage, LV_STATE_FOCUSED | LV_STATE_PRESSED, lv_color_hex(0xf88));
	lv_style_set_text_color(&text_style_num_lage, LV_STATE_DEFAULT, LV_COLOR_BLACK);
	lv_style_set_text_font(&text_style_num_lage, LV_STATE_DEFAULT, &FONT_NUM_LAGE);

//	lv_style_set_bg_color(&text_style_nomal, LV_STATE_DEFAULT, LV_COLOR_WHITE);
//	lv_style_set_bg_color(&text_style_nomal, LV_STATE_FOCUSED | LV_STATE_PRESSED, lv_color_hex(0xf88));
	lv_style_set_text_color(&text_style_nomal, LV_STATE_DEFAULT, LV_COLOR_BLACK);
	lv_style_set_text_font(&text_style_nomal, LV_STATE_DEFAULT, &FONT_TEXT_NOMAL);
	lv_style_set_border_color(&text_style_nomal, LV_STATE_DEFAULT, LV_COLOR_BLACK);
	lv_style_set_border_color(&text_style_nomal, LV_STATE_FOCUSED|LV_STATE_PRESSED, LV_COLOR_GRAY);

//	lv_style_set_bg_color(&text_style_smal, LV_STATE_DEFAULT, LV_COLOR_BLACK);
//	lv_style_set_bg_color(&text_style_smal, LV_STATE_PRESSED, LV_COLOR_BLACK);
//	lv_style_set_bg_color(&text_style_smal, LV_STATE_FOCUSED, LV_COLOR_BLACK);
	lv_style_set_bg_color(&text_style_smal, LV_STATE_FOCUSED | LV_STATE_PRESSED, lv_color_hex(0xf88));
	lv_style_set_text_color(&text_style_smal, LV_STATE_DEFAULT, LV_COLOR_BLACK);
	lv_style_set_text_font(&text_style_smal, LV_STATE_DEFAULT, &FONT_TEXT_SMALL);

}
void lv_obj_init(void) {


	lv_Battery_setting();
	lv_font_init();
	/*Create a Label on the currently active screen*/
	Lb_Data = lv_label_create(lv_scr_act(), NULL);
	Lb_Unit = lv_label_create(lv_scr_act(), NULL);
	Lb_Name = lv_label_create(lv_scr_act(), NULL);
	/*Modify the Label's text*/
	lv_obj_add_style(Lb_Data, LV_OBJ_PART_MAIN, &text_style_num_lage);
	lv_label_set_text(Lb_Data, "0.00");

	lv_obj_add_style(Lb_Unit, LV_OBJ_PART_MAIN, &text_style_smal);
	lv_label_set_text(Lb_Unit, "mg/l");
	lv_obj_set_pos(Lb_Unit, 125- lv_obj_get_width(Lb_Unit) , 61 - lv_obj_get_height(Lb_Data) - 1 -lv_obj_get_height(Lb_Unit) );

	lv_obj_add_style(Lb_Name, LV_OBJ_PART_MAIN, &text_style_nomal);
	lv_label_set_text(Lb_Name, "Đo Mặn");
	lv_obj_set_pos(Lb_Name, 0,2);

	/* Align the Label to the center
     * NULL means align on parent (which is the screen now)
     * 0, 0 at the end means an x, y offset after alignment*/
	lv_obj_set_pos(Lb_Data, 127- lv_obj_get_width(Lb_Data), 63 - lv_obj_get_height(Lb_Data));

}
void Lv_Sensor_Data_set(float val)
{
	if(val<10)
	{
		sprintf(Lb1_dt,"%0.3f",val);
	}else if (val<100)
	{
		sprintf(Lb1_dt,"%0.2f",val);
	}else
	{
		sprintf(Lb1_dt,"%0.1f",val);
	}
	lv_label_set_text(Lb_Data, Lb1_dt);
	lv_obj_set_pos(Lb_Data, 127- lv_obj_get_width(Lb_Data), 63 - lv_obj_get_height(Lb_Data));
}
void Lv_Sensor_Name_set(char *Name)
{
	lv_label_set_text(Lb_Name, Name);
}
void Lv_Sensor_Unit_set(char *Unit)
{
	lv_label_set_text(Lb_Unit, Unit);
	lv_obj_set_pos(Lb_Unit, 125- lv_obj_get_width(Lb_Unit) , 61 - lv_obj_get_height(Lb_Data) - 1 -lv_obj_get_height(Lb_Unit) );
}
