/*
 * EX8.c
 *
 *  Created on: Sep 16, 2024
 *      Author: Huynh
 */



#include "EX8.h"
void init_exercise8(){

}

// bat led thu "num" tinh tu chan GPIO_PIN_4
void setNumberOnClock(int num) {
	if(num >= 0 && num <= 11)
	 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4 << num, GPIO_PIN_SET);
	if(num < 0 || num > 11) return; // khong lam gi ca

}

void exercise8_run(){
			  setNumberOnClock(5); // bat led thu 5
}
