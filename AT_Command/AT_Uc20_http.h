/*
 * AT_Uc20_http.h
 *
 *  Created on: Nov 27, 2020
 *      Author: tranh
 */

#ifndef AT_UC20_HTTP_H_
#define AT_UC20_HTTP_H_

#define CUSTUM_HEADER 1

int AT_Http_Init(void);
int AT_Http_set_url(char *url);
int AT_Http_post(char *data);


#endif /* AT_UC20_HTTP_H_ */

