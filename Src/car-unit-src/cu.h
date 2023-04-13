#ifndef __CU_H__
#define __CU_H__

/*
 * cdu.c
 *
 *  Created on: Mar 23, 2023
 *      Authors:
 *      	Soham Sarkar
 *      	Varun Muthanna K A
 *      	Vivek Gunapalaiah
 *      	Yuvraj Sakshith
 */

#include "../stm32f4xx.h"


void car_init(void);
void car_start(void);
void car_stop(void);
void GPIOB_INIT(void);


#endif
