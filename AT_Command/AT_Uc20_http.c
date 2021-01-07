/*
 * AT_Uc20_http.c
 *
 *  Created on: Nov 27, 2020
 *      Author: tranh
 */


#include "AT_Hardware_Driver.h"
#include "AT_Command_driver.h"
#include "AT_Uc20_http.h"
#include "AT_Command.h"



int AT_Http_Init(void){
	 if(At_Command((char *)"AT+QHTTPCFG=\"contextid\",1\r\n",(char *)"OK\r\n",5000)> 0)
	 {

	 }
//	 if(At_Command((char *)"AT+QHTTPCFG=\"requestheader\",1\r\n",(char *)"OK\r\n",5000)> 0)
//	 {
//
//	 }
	 if(At_Command((char *)"AT+QIACT?\r\n",(char *)"OK\r\n",5000)> 0)
	 {

	 }
	 if(At_Command((char *)"AT+QICSGP=1,1,\"UNINET\",\"\",\"\",1\r\n",(char *)"OK\r\n",5000)> 0)
	 {

	 }
	 if(At_Command((char *)"AT+QIACT=1\r\n",(char *)"OK\r\n",5000)> 0)
	 {

	 }
	 if(At_Command((char *)"AT+QIACT?\r\n",(char *)"OK\r\n",5000)> 0)
	 {

	 }
	 return 1;
}
int AT_Http_set_url(char *url)
{
	uint16_t url_len =  strlen(url);
	sprintf(AT_Buff,"AT+QHTTPURL=%d,2\r\n",url_len);
	 if(At_Command(AT_Buff,(char *)"CONNECT\r\n",5000)> 0)
	 {
		 if(At_Command(url,(char *)"OK\r\n",5000)> 0)
		 {
			 return 1;
		 }
	 }
	 return -1;
}

char *header1 = 	"POST /api/station/AddStationData HTTP/1.1\r\n"
					"Host: apihandsetmanager.namlongtekgroup.com\r\n"
					"Connection: keep-alive\r\n"
					"Content-Length: ";//293
char *header2=  	"\r\n"
					"accept: text/plain\r\n"
					"User-Agent: Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.198 Safari/537.36\r\n"
					"Content-Type: application/json-patch+json\r\n"
					"Origin: http://apihandsetmanager.namlongtekgroup.com\r\n"
					"Referer: http://apihandsetmanager.namlongtekgroup.com/swagger/index.html\r\n"
					"Accept-Encoding: gzip, deflate\r\n"
					"Accept-Language: vi-VN,vi;q=0.9,en-US;q=0.8,en;q=0.7,fr-FR;q=0.6,fr;q=0.5\r\n\r\n";

int AT_Http_post(char *data)
{
	char data_tmp[2048];
#if CUSTUM_HEADER
	uint16_t dt_len =  sprintf(data_tmp,"%s%d%s%s",header1,strlen(data),header2,data);//strlen(data);
#else
	uint16_t dt_len =  sprintf(data_tmp,"%s%d%s",header1,strlen(data),header2);//strlen(data);
#endif
	sprintf(AT_Buff,"AT+QHTTPPOST=%d,2,60\r\n",dt_len);
	 if(At_Command(AT_Buff,(char *)"CONNECT\r\n",5000)> 0)
	 {
		 AT_Send_buf((uint8_t *)data_tmp, strlen(data_tmp), 2000);
		 //if(At_Command(data_tmp,(char *)"OK\r\n",5000)> 0)
		 int s = AT_Get_Data_Avaiable(AT_Buff);
		 if(AT_Recv_until(AT_Buff+s, "OK\r\n",5000))
		 {
			AT_Get_Data_Avaiable(AT_Buff);
			if(AT_Check_Response(AT_Buff, (char *)"POST", 103000)>0)
//			printf("[%lu] HTTP Send data done\n",Get_Millis());
			//if(AT_Recv_until(AT_Buff,(char *)"\r\n" , 60000)>0)
			//if(At_Command(NULL, (char *)"\r\n" , 60000)>0)
			{
				int http_res = 0;
				AT_Getint_index(&http_res, AT_Buff, ": ", 1);
				printf("[%lu] HTTP Read: %d byte: %s\n",Get_Millis(),strlen(AT_Buff),AT_Buff);
				return http_res;
			}
		 }
		 else
			 printf("Send data FAIL\n");
	 }
	 return -1;
}
int AT_Http_get_data(char *des)
{
	At_Command((char *)"AT+QHTTPREAD=80\r\n",(char *)"+QHTTPREAD",5000);

	return  1;
}


