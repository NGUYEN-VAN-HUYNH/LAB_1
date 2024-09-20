/*
 * EX7.c
 *
 *  Created on: Sep 15, 2024
 *      Author: Huynh
 */

#include "EX7.h"
extern int dem;
void init_exercise7(){

}
// tat toan bo led
void clearAllClock(){
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_All,  GPIO_PIN_RESET);
}
void Display(int num) {
	if(num >= 0 && num <= 11)
   HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4 << num, GPIO_PIN_SET);
	if(num >= 12) clearAllClock();
}
void exercise7_run(){
	Display(dem++);
}


