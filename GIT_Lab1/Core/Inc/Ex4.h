/*
 * EX4.h
 *
 *  Created on: Sep 12, 2024
 *      Author: Huynh
 */

#ifndef INC_EX4_H_
#define INC_EX4_H_

#include "main.h"


#define SEG_A GPIO_PIN_0 // PB0
#define SEG_B GPIO_PIN_1 // PB1
#define SEG_C GPIO_PIN_2 // PB2
#define SEG_D GPIO_PIN_3 // PB3
#define SEG_E GPIO_PIN_4 // PB4
#define SEG_F GPIO_PIN_5 // PB5
#define SEG_G GPIO_PIN_6 // PB6

void init_exercise4();
void display7SEG(int num);
void exercise4_run();
#endif
