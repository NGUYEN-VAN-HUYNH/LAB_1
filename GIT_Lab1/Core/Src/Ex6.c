/*
 * EX6.c
 *
 *  Created on: Sep 15, 2024
 *      Author: Huynh
 */
#include "EX6.h"
#include "main.h"
int dem = 0; // bien dem thoi gian
void init_exercise6(){

}


void display(int num) {
	if(num >= 0 && num <= 11)
   HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4 << num, GPIO_PIN_SET); // phep dich trai bit - bat dau tu chan GPIO_PIN_4
	if(num >= 12) return; // khong lam gi ca
}

void exercise6_run(){
			  display(dem++);

}




