/*
 * EX4.c
 *
 *  Created on: Sep 12, 2024
 *      Author: Huynh
 */
#include "EX4.h"

int counter = 0; // bien dem thoi gian
void init_exercise4(){

}


void display7SEG(int num) {
    // tat led 7 doan
    HAL_GPIO_WritePin(GPIOB, SEG_A, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB, SEG_B, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB, SEG_C, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB, SEG_D, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB, SEG_E, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB, SEG_F, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB, SEG_G, GPIO_PIN_SET);

    // dieu khien led 7 doan
    switch (num) {
        case 0:
            HAL_GPIO_WritePin(GPIOB, SEG_A, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_B, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_D, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_E, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_F, GPIO_PIN_RESET);
            break;
        case 1:
            HAL_GPIO_WritePin(GPIOB, SEG_B, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C, GPIO_PIN_RESET);
            break;
        case 2:
            HAL_GPIO_WritePin(GPIOB, SEG_A, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_B, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_D, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_E, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_G, GPIO_PIN_RESET);
            break;
        case 3:
            HAL_GPIO_WritePin(GPIOB, SEG_A, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_B, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_D, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_G, GPIO_PIN_RESET);
            break;
        case 4:
            HAL_GPIO_WritePin(GPIOB, SEG_B, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_F, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_G, GPIO_PIN_RESET);
            break;
        case 5:
            HAL_GPIO_WritePin(GPIOB, SEG_A, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_D, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_F, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_G, GPIO_PIN_RESET);
            break;
        case 6:
            HAL_GPIO_WritePin(GPIOB, SEG_A, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_D, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_E, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_F, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_G, GPIO_PIN_RESET);
            break;
        case 7:
            HAL_GPIO_WritePin(GPIOB, SEG_A, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_B, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C, GPIO_PIN_RESET);
            break;
        case 8:
            HAL_GPIO_WritePin(GPIOB, SEG_A, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_B, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_D, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_E, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_F, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_G, GPIO_PIN_RESET);
            break;
        case 9:
            HAL_GPIO_WritePin(GPIOB, SEG_A, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_B, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_D, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_F, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_G, GPIO_PIN_RESET);
            break;
        default:
            break; // khong lm gi ca
    }

}


void exercise4_run(){
	if(counter >= 10) counter = 0;
		  display7SEG(counter++);
}


