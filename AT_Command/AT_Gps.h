/*
 * AT_Gps.h
 *
 *  Created on: Nov 27, 2020
 *      Author: tranh
 */

#ifndef AT_GPS_H_
#define AT_GPS_H_
int AT_Gps_On(void);
int AT_Gps_Getlocation(char *lat,char *longs);
int AT_Gps_Off(void);
int AT_Gps_Getconfig(void);
int AT_Gps_Set_auto(void);
#endif /* AT_GPS_H_ */
