/*
 * EX9.c
 *
 *  Created on: Sep 16, 2024
 *      Author: Huynh
 */
#include "EX9.h"
void init_exercise9(){

}
// tat led thu "num" tinh tu chan GPIO_PIN_4
void clearNumberOnClock(int num) {
    if (num >= 0 && num <= 11)
    	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4 << num , GPIO_PIN_RESET);
    if (num < 0 || num > 11) return;
}

void exercise9_run(){
    clearNumberOnClock(5); // tat led thu 5
}


