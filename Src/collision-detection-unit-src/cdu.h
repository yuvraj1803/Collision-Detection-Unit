/*
 * cdu.h
 *
 *  Created on: Mar 14, 2023
 *      Authors:
 *      	Soham Sarkar
 *      	Varun Muthanna K A
 *      	Vivek Gunapalaiah
 *      	Yuvraj Sakshith
 */



#ifndef COLLISION_DETECTION_UNIT_SRC_CDU_H_
#define COLLISION_DETECTION_UNIT_SRC_CDU_H_

#include "../stm32f4xx.h"

void proximity_sensor_init(void);
uint8_t get_proximity(void);

#endif /* COLLISION_DETECTION_UNIT_SRC_CDU_H_ */
