/*
 * App_Sensor.c
 *
 *  Created on: Nov 24, 2020
 *      Author: tranh
 */

#include "User_define.h"
#include "App_Sensor.h"
#include "ModbusMaster.h"
#include "cJSON.h"
#include "cmsis_os.h"
Sensor_typedef_t Sensor[MAX_SENSOR_NUM];

int Sensor_num = 0;


int Sensor_parse(char *info,int language)
{
	cJSON *jSOninfo;
	jSOninfo = cJSON_Parse(info);
	if(cJSON_IsArray(jSOninfo))
	{
		Sensor_num = cJSON_GetArraySize(jSOninfo);
		printf("num sensor: %d\n",Sensor_num);
		cJSON *ssinfo;
		for(uint8_t i =0;i<Sensor_num;i++)
		{
			printf("SS %d:\n",i);
			ssinfo = cJSON_GetArrayItem(jSOninfo, i);
			if(cJSON_IsObject(ssinfo))
			{
				printf("ssinfo %d is Object,%s\n",i,cJSON_PrintUnformatted(ssinfo));
				cJSON *detail;
				detail = cJSON_GetObjectItem(ssinfo, "Addr");
				if(cJSON_IsNumber(detail))
				{
					Sensor[i].Id = cJSON_GetNumberValue(detail);
					printf("Sensor %d addr is %d\n",i,Sensor[i].Id );
					detail = cJSON_GetObjectItem(ssinfo, "SSname");
					if(cJSON_IsArray(detail))
					{
						cJSON *detail_t = cJSON_GetArrayItem(detail, language);
						if(cJSON_IsString(detail_t))
						{
							sprintf(Sensor[i].Name,"%s",cJSON_GetStringValue(detail_t));
							printf("Sensor %d name is %s\n",i,Sensor[i].Name);
							cJSON *reg_detail = cJSON_GetObjectItem(ssinfo, "para");
							if(cJSON_IsArray(reg_detail))
							{
								Sensor[i].numData = cJSON_GetArraySize(reg_detail);
								printf("Sensor %d have  %d reg\n",i,Sensor[i].numData);
								for(uint8_t j=0;j<Sensor[i].numData;j++)
								{
									cJSON *regx = cJSON_GetArrayItem(reg_detail,j);
									cJSON *reg = cJSON_GetObjectItem(regx, "Reg");
									if(cJSON_IsNumber(reg))
									{
										Sensor[i].Datax[j].Reg = cJSON_GetNumberValue(reg);
										printf("Sensor %d   reg addr : %d \n",i,Sensor[i].Datax[j].Reg);
										cJSON *Regname = cJSON_GetObjectItem(regx, "Regname");
										cJSON *Regname_t = cJSON_GetArrayItem(Regname, language);
										sprintf(Sensor[i].Datax[j].DataName,"%s",cJSON_GetStringValue(Regname_t));
										printf("sensor %d Reg %d name: %s\n",i,Sensor[i].Datax[j].Reg,Sensor[i].Datax[j].DataName);
										cJSON *Regunit = cJSON_GetObjectItem(regx, "Unit");
										cJSON *Regnnit_t = cJSON_GetArrayItem(Regunit, language);
										sprintf(Sensor[i].Datax[j].Unit,"%s",cJSON_GetStringValue(Regnnit_t));
										printf("sensor %d Reg %d uinit: %s\n",i,Sensor[i].Datax[j].Reg,cJSON_GetStringValue(Regnnit_t));
										cJSON *BaseJson = cJSON_GetObjectItem(regx, "base");
										if(cJSON_IsNumber(BaseJson))
										{
											Sensor[i].Datax[j].base = (int)cJSON_GetNumberValue(BaseJson);
											printf("sensor %d Reg %d base: %d\n",i,Sensor[i].Datax[j].Reg,Sensor[i].Datax[j].base);
										}
									}
									else
									{
										break;
									}
								}
							}else	return -1*(i+1);
						}else	return -2*(i+1);
					}else	return -3*(i+1);
				}else	return -4*(i+1);
			}else	return -5*(i+1);
		}
		return Sensor_num;
	}
	return -1000;
}
void App_Sensor_Init(char *Sensor_info)
{
	Sensor_parse(Sensor_info,0);
}
int App_Sensor_Get_NumSensor()
{
	return Sensor_num;
}
uint16_t id;
#define SENSOR_LOG printf
int  Calib_sanity()
{
	SENSOR_LOG("start calib sanity");
	if(MBm_Write_signal_data(4,40001+0x40,0x60) == MB_OK)
	{
		SENSOR_LOG("Enter the calibration successful");
		if(MBm_Write_signal_data(4,40001+0x41,1288) == MB_OK)
		{
			SENSOR_LOG("Wait for 2 minutes");
			osDelay(60000);
			SENSOR_LOG("Wait for 1 minutes");
			osDelay(60000);
			{
				uint16_t result =100;
				MBm_Read_data_hoilding(4,40001+0x43,1,&result);
				SENSOR_LOG("result: %d",result);
				return result;
			}
		}
	}
	else
	{
		SENSOR_LOG("Enter the calibration fail");
	}
	return -1;

}
int Calib_PH()
{
	SENSOR_LOG("start calib PH");
	if(MBm_Write_signal_data(5,40001+0x40,0x60) == MB_OK)
	{
		SENSOR_LOG("Enter the calibration successful");
		if(MBm_Write_signal_data(5,40001+0x41,0x04) == MB_OK)
		{
			SENSOR_LOG("Wait for 10 seconds");
			osDelay(15000);
			{
				uint16_t result =100;
				MBm_Read_data_hoilding(5,40001+0x43,1,&result);
				SENSOR_LOG("result: %d",result);
				return result;
			}
		}
	}
	else
	{
		SENSOR_LOG("Enter the calibration fail");
	}
	return -1;
}


int Sensor_Scan(int Sensor_index,int valueIndex)
{
		for(uint8_t i =0;i<3;i++)
		{
			if(MBm_Read_data_hoilding(Sensor[Sensor_index].Id,Sensor[Sensor_index].Datax[valueIndex].Reg, 1, &Sensor[Sensor_index].Datax[valueIndex].Data) ==MB_OK)
			{
				return Sensor_index;
			}
			else
			{
				__NOP();
			}

		}

		return -1;
}
