/*
 * App_Lvgl.c
 *
 *  Created on: Nov 24, 2020
 *      Author: tranh
 */

#include "User_define.h"
#include "lvgl.h"
#include "lv_port_disp_template.h"
#include "App_Lvgl.h"
//#include  'stri'

LV_FONT_DECLARE(Number_40);
LV_FONT_DECLARE(Number_37);
LV_FONT_DECLARE(Number_32);
LV_FONT_DECLARE(Number_30);
LV_FONT_DECLARE(Number_35);
LV_FONT_DECLARE(Dseg7_55);
LV_FONT_DECLARE(Arial_20);
LV_FONT_DECLARE(Arial_16);
LV_FONT_DECLARE(Arial_14);
LV_FONT_DECLARE(Arial1_13);
LV_FONT_DECLARE(Arial_12);
LV_FONT_DECLARE(Arial_10);
LV_FONT_DECLARE(Arial_8);

LV_IMG_DECLARE(Imagetest);
LV_IMG_DECLARE(Location);

extern uint8_t Is_mounted;

#define FONT_NUM_LAGE  Number_35
#define FONT_TEXT_NOMAL	Arial_14
#define FONT_TEXT_SMALL	lv_font_montserrat_12
#define FONT_TEXT_VERY_SMALL	Arial_10


lv_obj_t *Lb_Data,*Lb_Unit,*Lb_Name,*LB_Time;

lv_obj_t *Lb_line1,*Lb_line2,*Lb_line3,*Lb_line4,*Lb_line5;

char Lb1_dt[10];
lv_obj_t * list_btn[5];

lv_style_t text_style_num_lage,text_style_nomal,text_style_smal,text_style_very_smal;

uint8_t Max_list_btn = 3;
uint8_t List_btn_cnt = 0;
lv_obj_t * listConfig;

lv_obj_t *Lv_btn_menu,*Lv_btn_exit,*Lv_btn_down,*Lv_btn_up;

lv_obj_t * LvSimready,*Gsm_on;
lv_obj_t * Battery;
lv_obj_t * Img_Sd;
lv_obj_t * Gps_on;
lv_obj_t * Img_Warnig;
lv_obj_t * Main_Screen;
lv_obj_t * Setup_Screen;
uint32_t Bat_cnt =0;
uint8_t bat_offset[] = {10,33,66,96};

Sys_Screen_Active current_active = MAIN_SCREEN;
void Lv_switch_to_screen(Sys_Screen_Active screen)
{
	current_active =screen;
	switch (screen) {
		case SETUP_SCREEN:
			lv_scr_load(Setup_Screen);
			break;
		case MAIN_SCREEN:
			lv_scr_load(Main_Screen);
			break;
		default:
			break;
	}

	lv_scr_load(Setup_Screen);
}
void Lv_list_up(uint8_t up_down)
{
	if(up_down){
		List_btn_cnt --;
		if(List_btn_cnt == 255)
		{
			List_btn_cnt = Max_list_btn -1;
		}
	}else
	{
		List_btn_cnt ++;
		if(List_btn_cnt == Max_list_btn)
		{
			List_btn_cnt = 0;
		}
	}
	lv_list_focus_btn(listConfig, list_btn[List_btn_cnt]);
}

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
void lv_Gps_on()
{
	lv_obj_set_hidden(Gps_on, false);
}

void lv_Gps_off()
{
	lv_obj_set_hidden(Gps_on, true);
}
void lv_Sim_ready()
{
		lv_obj_set_hidden(LvSimready, false);
}

void lv_Sim_not_ready()
{
		lv_obj_set_hidden(LvSimready, true);
}

void lv_Gsm_on()
{
	lv_obj_set_hidden(Gsm_on, false);
}

void lv_Gsm_off()
{
	lv_obj_set_hidden(Gsm_on, true);
}

void Lv_DateTime_update(char *Time)
{
	lv_label_set_text(LB_Time, Time);
}
static void lv_Battery_setting(void)
{
//    lv_obj_t * img1 = lv_img_create(Main_Screen, NULL);
//    lv_img_set_src(img1, &Google);
//    lv_obj_align(img1, NULL, LV_ALIGN_CENTER, 0, -20);

	Battery = lv_img_create(Main_Screen, NULL);
    lv_img_set_src(Battery, LV_SYMBOL_BATTERY_EMPTY);
    lv_obj_set_pos(Battery, 127-lv_obj_get_width(Battery), -3);//(img2, NULL, LV_ALIGN_CENTER, 0, -20);

//    Img_Sd = lv_img_create(Main_Screen, NULL);
//    lv_img_set_src(Img_Sd, LV_SYMBOL_SD_CARD);
//    lv_obj_set_pos(Img_Sd, 127-lv_obj_get_width(Battery) - lv_obj_get_width(Img_Sd)-3, -2);//(img2, NULL, LV_ALIGN_CENTER, 0, -20);



    Gps_on = lv_img_create(Main_Screen, NULL);
    lv_img_set_src(Gps_on, LV_SYMBOL_GPS);
    lv_obj_set_pos(Gps_on, 64, -2);//(img2, NULL, LV_ALIGN_CENTER, 0, -20);
    lv_Gps_off();

    LvSimready = lv_img_create(Main_Screen, NULL);
    lv_img_set_src(LvSimready, LV_SYMBOL_BLUETOOTH);
    lv_obj_set_pos(LvSimready, 40, -2);//(img2, NULL, LV_ALIGN_CENTER, 0, -20);
    lv_Sim_not_ready();

    Gsm_on = lv_img_create(Main_Screen, NULL);
    lv_img_set_src(Gsm_on, LV_SYMBOL_LOOP);
   	lv_obj_set_pos(Gsm_on,0, -2);//(img2, NULL, LV_ALIGN_CENTER, 0, -20);
   	lv_Gsm_off();

//    Img_Warnig = lv_img_create(Main_Screen, NULL);
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

	//lv_style_set_pad_top(&text_style_smal, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_all(&text_style_smal, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&text_style_smal, LV_STATE_DEFAULT, 8);
	//lv_style_set_border_color(&text_style_smal, LV_STATE_FOCUSED, LV_COLOR_BLACK);
	lv_style_set_bg_color(&text_style_smal, LV_STATE_FOCUSED, LV_COLOR_BLACK);
	lv_style_set_text_color(&text_style_smal, LV_STATE_FOCUSED, LV_COLOR_WHITE);

//	lv_style_set_bg_color(&text_style_smal, LV_STATE_DEFAULT, LV_COLOR_BLACK);
//	lv_style_set_bg_color(&text_style_smal, LV_STATE_PRESSED, LV_COLOR_BLACK);
//	lv_style_set_bg_color(&text_style_smal, LV_STATE_FOCUSED, LV_COLOR_BLACK);
	lv_style_set_bg_color(&text_style_very_smal, LV_STATE_FOCUSED | LV_STATE_PRESSED, lv_color_hex(0xf88));
	lv_style_set_text_color(&text_style_very_smal, LV_STATE_DEFAULT, LV_COLOR_BLACK);
	lv_style_set_text_font(&text_style_very_smal, LV_STATE_DEFAULT, &FONT_TEXT_VERY_SMALL);

}
uint32_t  line_cnt = 0;
char dataL1[50] = {0};
char dataL2[50] = {0};
char dataL3[50] = {0};
char dataL4[50] = {0};
char dataL5[50] = {0};
uint8_t line1_cnt = 0,line2_cnt = 0,line3_cnt = 0,line4_cnt = 0,line5_cnt = 0;
uint8_t nexline = 0;
void lv_add_console_log_io(char c)
{
	if(nexline)
	{
		memcpy(dataL1,dataL2,50);
		memcpy(dataL2,dataL3,50);
		memcpy(dataL3,dataL4,50);
		memcpy(dataL4,dataL5,50);
		nexline = 0;
		line5_cnt = 0;
	}
	if( c != '\n')
	{
		dataL5[line5_cnt] = c;
		line5_cnt ++;
		if(line5_cnt == 39)
		{
			nexline++;
		}
	}
	else
	{
		nexline = 1;
	}

}
int App_add_console_log(char *log,int len)
{
	uint16_t i;
	for(i =0;i< len;i++)
	{
		lv_add_console_log_io(*log);
		log++;
	}
	lv_label_set_text(Lb_line1,dataL1);
	lv_label_set_text(Lb_line2,dataL2);
	lv_label_set_text(Lb_line3,dataL3);
	lv_label_set_text(Lb_line4,dataL4);
	lv_label_set_text(Lb_line5,dataL5);
	return i;

}
static void event_handler(lv_obj_t * obj, lv_event_t event)
{
    if(event == LV_EVENT_CLICKED) {
        printf("Clicked: %s\n", lv_list_get_btn_text(obj));
    }
}
//static void event_btn_menu_handler(lv_obj_t * obj, lv_event_t event)
//{
//    if(event == LV_EVENT_LONG_PRESSED) {
//        //printf("Clicked\n");
//    	//Screen_change =2;
//    	lv_scr_load(Setup_Screen);
//    }
//    else if(event == LV_EVENT_VALUE_CHANGED) {
//        //printf("Toggled\n");
//        //Screen_change =100;
//    }
//}
//static void event_btn_up_handler(lv_obj_t * obj, lv_event_t event)
//{
//    if(event == LV_EVENT_CLICKED) {
//        //printf("Clicked\n");
//    	//Screen_change =3;
//    }
//    else if(event == LV_EVENT_VALUE_CHANGED) {
//        //printf("Toggled\n");
//       // Screen_change =100;
//    }
//}
//static void event_btn_down_handler(lv_obj_t * obj, lv_event_t event)
//{
//    if(event == LV_EVENT_CLICKED) {
//        //printf("Clicked\n");
//    	//Screen_change =4;
//    }
//    else if(event == LV_EVENT_VALUE_CHANGED) {
//        //printf("Toggled\n");
//       // Screen_change =100;
//    }
//}
//static void event_btn_exit_handler(lv_obj_t * obj, lv_event_t event)
//{
//    if(event == LV_EVENT_LONG_PRESSED) {
//        //printf("Clicked\n");
////    	Screen_change =5;
////    	lv_scr_load(Result_screen);
//    }
//    else if(event == LV_EVENT_VALUE_CHANGED) {
//        //printf("Toggled\n");
//        //Screen_change =100;
//    }
//}
void lv_obj_init(void) {

	Main_Screen = lv_obj_create(NULL, NULL);
	Setup_Screen = lv_obj_create(NULL, NULL);
	lv_Battery_setting();
	lv_font_init();
	/*Create a Label on the currently active screen*/
	Lb_Data = lv_label_create(Main_Screen, NULL);
	Lb_Unit = lv_label_create(Main_Screen, NULL);
	Lb_Name = lv_label_create(Main_Screen, NULL);
	LB_Time = lv_label_create(Main_Screen, NULL);
	/*Modify the Label's text*/
	lv_obj_add_style(Lb_Data, LV_OBJ_PART_MAIN, &text_style_num_lage);
	lv_label_set_text(Lb_Data, "0.00");

	lv_obj_add_style(LB_Time, LV_OBJ_PART_MAIN, &text_style_smal);
	lv_label_set_text(LB_Time, "0:00");
	lv_obj_set_pos(LB_Time,50,0);

	lv_obj_add_style(Lb_Unit, LV_OBJ_PART_MAIN, &text_style_smal);
	lv_label_set_text(Lb_Unit, "mg/l");
	lv_obj_set_pos(Lb_Unit, 125- lv_obj_get_width(Lb_Unit) , 61 - lv_obj_get_height(Lb_Data) - 1 -lv_obj_get_height(Lb_Unit) );

	lv_obj_add_style(Lb_Name, LV_OBJ_PART_MAIN, &text_style_nomal);
	lv_label_set_text(Lb_Name, "Đo Mặn");
	lv_obj_set_pos(Lb_Name, 0,8);

	/* Align the Label to the center
     * NULL means align on parent (which is the screen now)
     * 0, 0 at the end means an x, y offset after alignment*/
	lv_obj_set_pos(Lb_Data, 127- lv_obj_get_width(Lb_Data), 63 - lv_obj_get_height(Lb_Data));

	//lv_scr_load(Main_Screen);



    /*Create a label on the page*/
//    Lb_line1 = lv_label_create(Setup_Screen, NULL);
//    Lb_line2 = lv_label_create(Setup_Screen, NULL);
//    Lb_line3 =lv_label_create(Setup_Screen, NULL);
//    Lb_line4 =lv_label_create(Setup_Screen, NULL);
//    Lb_line5 = lv_label_create(Setup_Screen, NULL);
//    lv_obj_add_style(Lb_line1,LV_OBJ_PART_MAIN,&text_style_very_smal);
//    lv_obj_add_style(Lb_line2,LV_OBJ_PART_MAIN,&text_style_very_smal);
//    lv_obj_add_style(Lb_line3,LV_OBJ_PART_MAIN,&text_style_very_smal);
//    lv_obj_add_style(Lb_line4,LV_OBJ_PART_MAIN,&text_style_very_smal);
//    lv_obj_add_style(Lb_line5,LV_OBJ_PART_MAIN,&text_style_very_smal);
//    lv_obj_set_pos(Lb_line1, 0, 0);
//    lv_obj_set_pos(Lb_line2, 0, 12);
//    lv_obj_set_pos(Lb_line3, 0, 24);
//    lv_obj_set_pos(Lb_line4, 0, 36);
//    lv_obj_set_pos(Lb_line5, 0, 48);
//    lv_label_set_text(Lb_line1, "");
//    lv_label_set_text(Lb_line2,	"");
//    lv_label_set_text(Lb_line3,	"");
//    lv_label_set_text(Lb_line4,	"");
//    lv_label_set_text(Lb_line5,	"");



	listConfig = lv_list_create(Setup_Screen, NULL);
	lv_obj_set_size(listConfig, 128, 64);
	lv_obj_set_pos(listConfig, 0, 0);

	/*Add buttons to the list*/



	list_btn[0] = lv_list_add_btn(listConfig, NULL, "SETUP");
	lv_obj_add_style(list_btn[0],LV_OBJ_PART_MAIN,&text_style_smal );

	lv_obj_set_event_cb(list_btn[0], event_handler);

	list_btn[1] = lv_list_add_btn(listConfig, NULL, "OPEN");
	lv_obj_add_style(list_btn[1],LV_OBJ_PART_MAIN,&text_style_smal );
	lv_obj_set_event_cb(list_btn[1], event_handler);

	list_btn[2] = lv_list_add_btn(listConfig, NULL, "DEVICE INFO");
	lv_obj_add_style(list_btn[2],LV_OBJ_PART_MAIN,&text_style_smal );
	lv_obj_set_event_cb(list_btn[2], event_handler);
	lv_list_focus_btn(listConfig,list_btn[0]);

//    Lv_btn_menu = lv_btn_create(Main_Screen, NULL);
//    lv_obj_set_event_cb(Lv_btn_menu, event_btn_menu_handler);
//    lv_obj_set_size(Lv_btn_menu, 128/4, 2);
//    lv_obj_set_pos(Lv_btn_menu, 0, 62);
//    lv_obj_t *label = lv_label_create(Lv_btn_menu, NULL);
//    lv_label_set_text(label, "");
//
//    Lv_btn_up = lv_btn_create(Main_Screen,Lv_btn_menu);
//    lv_obj_set_event_cb(Lv_btn_up, event_btn_up_handler);
//    lv_obj_align(Lv_btn_up, Lv_btn_menu, LV_ALIGN_IN_BOTTOM_MID, 128/4, 0);
//    label = lv_label_create(Lv_btn_up, NULL);
//    //lv_label_set_text(label, "up");
//
//    Lv_btn_down = lv_btn_create(Main_Screen,Lv_btn_menu);
//    lv_obj_set_event_cb(Lv_btn_down, event_btn_down_handler);
//	lv_obj_align(Lv_btn_down, Lv_btn_up, LV_ALIGN_IN_BOTTOM_MID, 128/4, 0);
//	label = lv_label_create(Lv_btn_down, NULL);
//	//lv_label_set_text(label, "down");
//
//	Lv_btn_exit = lv_btn_create(Main_Screen,Lv_btn_menu);
//	lv_obj_set_event_cb(Lv_btn_exit, event_btn_exit_handler);
//	lv_obj_align(Lv_btn_exit, Lv_btn_down, LV_ALIGN_IN_BOTTOM_RIGHT, 128/4, 0);
//	label = lv_label_create(Lv_btn_exit, NULL);
	//lv_label_set_text(label, "exit");


	lv_scr_load(Main_Screen);

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
