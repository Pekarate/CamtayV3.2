/******************** (C) COPYRIGHT 2011 STMicroelectronics ********************
* File Name          : stc3115_Driver.c
* Author             : AMS - IMS application
* Version            : V01
* Date               : 10 October 2014
* Description        : STC3115 I2C interface source code
********************************************************************************
* THE PRESENT SOFTWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
* WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE TIME.
* AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY DIRECT,
* INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING FROM THE
* CONTENT OF SUCH SOFTWARE AND/OR THE USE MADE BY CUSTOMERS OF THE CODING
* INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.

* THIS SOURCE CODE IS PROTECTED BY A LICENSE.
* FOR MORE INFORMATION PLEASE CAREFULLY READ THE LICENSE AGREEMENT FILE LOCATED
* IN THE ROOT DIRECTORY OF THIS FIRMWARE PACKAGE.
*******************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include "stc3115_I2C.h" 
#include "stc3115_Driver.h" 
#include "main.h"
/*
  ===============================================================================
                    ##### How to use this file#####
  ===============================================================================

	++ 	Update 	I2C_Write and I2C_Read functions with application I2C driver functions.
		Follow the code example in each function to call the application I2C API.
				
*/

/* ---- External I2C R/W interface  ------------------------------------------- */
extern I2C_HandleTypeDef hi2c1;
/*******************************************************************************
* Function Name  : I2C_Write
* Description    : utility function to write several bytes to STC311x registers
* Input          : NumberOfBytes, RegAddress, TxBuffer
* Return         : error status
* Note: I2C multiple-bytes write function is recommended to be used. If not available,
* STC3115 registers have to be written by 2-byte words (unless NumberOfBytes=1).
* Byte per byte write does not guaranty the data integrity.
*******************************************************************************/
int I2C_Write(int NumberOfBytes, int RegAddress , unsigned char *TxBuffer)
{
	int res=-1;
    
	/* TO DO: replace with your application specific I2C multiple-bytes write function ... */
	if(HAL_I2C_Mem_Write(&hi2c1, STC3115_SLAVE_ADDRESS_7BIT<< 1, RegAddress, I2C_MEMADD_SIZE_8BIT, TxBuffer, NumberOfBytes, 1000) == HAL_OK)
	{
		res = 1;
	}
	//res = My_I2C_Write(STC3115_SLAVE_ADDRESS_7BIT,RegAddress,TxBuffer,NumberOfBytes);
		
	/*End of modification*/
	
  return(res);
}



/*******************************************************************************
* Function Name  : STC31xx_Read
* Description    : utility function to read several bytes from STC311x registers
* Input          : NumberOfBytes, RegAddress, , RxBuffer
* Return         : error status
* Note: I2C multiple-bytes read function is recommended to be used. If not available,
* STC3115 registers have to be read by 2-byte words (unless NumberOfBytes=1).
* Byte per byte read does not guaranty the data integrity.
*******************************************************************************/
int I2C_Read(int NumberOfBytes, int RegAddress , unsigned char *RxBuffer)
{
	int res=-1;
  
	/* TO DO: replace with your application specific I2C multiple-bytes read function ... */
	if(HAL_I2C_Mem_Read(&hi2c1, STC3115_SLAVE_ADDRESS_7BIT<< 1, RegAddress, I2C_MEMADD_SIZE_8BIT, RxBuffer, NumberOfBytes, 1000) == HAL_OK)
	{
		res = 1;
	}
	//res = My_I2C_Read(STC3115_SLAVE_ADDRESS_7BIT,RegAddress,RxBuffer,NumberOfBytes);

	/*End of modification*/
	
  return(res);    
}

/* ---- End of external I2C R/W interface ---------------------------------------- */


/**** END OF FILE ****/
