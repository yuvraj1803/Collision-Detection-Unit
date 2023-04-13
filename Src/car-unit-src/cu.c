#include "cu.h"
#include "../collision-detection-unit-src/cdu.h"
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


/*
 * We use GPIOB pins PB_1, PB_13, PB_14, PB_15 for powering the wheels
 *
 * */

#define	AHB1ENR_GPIOBEN				(1U << 1)


void GPIOB_INIT(void){
	/*
	 * Enables clock access to GPIOB pin and sets it to input mode.
	 * */

	/* GPIOB is connected to AHB1 Bus*/

	RCC->AHB1ENR |= AHB1ENR_GPIOBEN; /* Enable clock access to GPIOB */

	/* Set bits 4 and 5 to zero in GPIOB MODER register to set GPIOB Pin 2 into input mode. */

	GPIOB->MODER &= ~(1U << 4);
	GPIOB->MODER &= ~(1U << 5);



	/*
	 * Setting PB1,PB13,PB14,PB15 to output mode.
	 *
	 * */

	// set pin PB_1 to output mode
	GPIOB->MODER &= ~(1U << 3);
	GPIOB->MODER |=  (1U << 2);


	// set pin PB_13 to output mode
	GPIOB->MODER &= ~(1U << 27);
	GPIOB->MODER |=  (1U << 26);

	// set pin PB_14 to output mode
	GPIOB->MODER &= ~(1U << 29);
	GPIOB->MODER |=  (1U << 28);

	// set pin PB_15 to output mode
	GPIOB->MODER &= ~(1U << 31);
	GPIOB->MODER |=  (1U << 30);


}

// 	Set GPIOB PIN1 TO HIGH
void PB_1_HIGH(void){
	GPIOB->ODR |= (1U << 1);
}
// 	Set GPIOB PIN1 TO LOW
void PB_1_LOW(void){
	GPIOB-> ODR &= ~(1U << 1);
}




void car_init(void){
	GPIOB_INIT();
	proximity_sensor_init();
}

void car_start(void){
	PB_1_HIGH();
}


void car_stop(void){
	PB_1_LOW();
}

