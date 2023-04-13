/*
 * cdu.c
 *
 *  Created on: Mar 14, 2023
 *      Authors:
 *      	Soham Sarkar
 *      	Varun Muthanna K A
 *      	Vivek Gunapalaiah
 *      	Yuvraj Sakshith
 */

#include "cdu.h"
#include "../car-unit-src/cu.h"


/*
 *
 * We shall be using GPIOB PIN 2 to read digital signals from the proximity sensor.
 *
 *
 * */



uint32_t GPIOB_PB2_READ(void){

	/*
	 * Reads from GPIOB PIN 2 and returns its value.
	 *
	 * */

	return (GPIOB->IDR & (1U << 2)) == 0;

}

void proximity_sensor_init(void){

	GPIOB_INIT();

}

uint8_t get_proximity(void){
	/* Returns 1 if the proximity sensor detects any object.  Else 0*/

	return GPIOB_PB2_READ();

	/* The input data register is 28 if there is no object detected. 24 if there is one.
	 *
	 * As of now, I have no idea why these values are so specific.
	 *
	 *  */

}
