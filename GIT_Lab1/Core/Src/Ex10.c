/*
 * EX10.c
 *
 *  Created on: Sep 16, 2024
 *      Author: Huynh
 */

#include "EX10.h"
void init_exercise10(){

}
int	hour = 0;
int	second = 0;
int	minute = 0;
void ClockDigital(){
    // cap nhat giay, phut, gio
	if(second==60){
		second = 0;
		minute++;

	}
	if(minute==60){
		minute = 0;
		hour++;
	}
	if(hour==12){
		hour = 0;
	}

	int s = second/5;
	int m = minute/5;
/*
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4<<temp, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4<<temp2, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4<<hour, GPIO_PIN_SET);
	*/
	setNumberOnClock(s); // bat led thu "s"
	setNumberOnClock(m); // bat led thu "m"
	setNumberOnClock(hour); // bat led thu "hour"
	second++;

}

void exercise10_run() {
   ClockDigital();

}


