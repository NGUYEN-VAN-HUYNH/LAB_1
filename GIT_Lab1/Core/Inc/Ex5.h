/*
 * EX5.h
 *
 *  Created on: Sep 15, 2024
 *      Author: Huynh
 */

#ifndef INC_EX5_H_
#define INC_EX5_H_

#include "main.h"


#define RED 	1
#define GREEN	2
#define YELLOW	3

#define SEG_A GPIO_PIN_0 // PB0
#define SEG_B GPIO_PIN_1 // PB1
#define SEG_C GPIO_PIN_2 // PB2
#define SEG_D GPIO_PIN_3 // PB3
#define SEG_E GPIO_PIN_4 // PB4
#define SEG_F GPIO_PIN_5 // PB5
#define SEG_G GPIO_PIN_6 // PB6
#define SEG_A1 GPIO_PIN_7 // PB7
#define SEG_B1 GPIO_PIN_8 // PB8
#define SEG_C1 GPIO_PIN_9 // PB9
#define SEG_D1 GPIO_PIN_10 // PB10
#define SEG_E1 GPIO_PIN_11 // PB11
#define SEG_F1 GPIO_PIN_12 // PB12
#define SEG_G1 GPIO_PIN_13 // PB13

void init_exercise5();
void display7SEG_above(int num); // dieu khien led 7 doan o tren ( he thong 1)
void display7SEG_below(int num); // dieu khien led 7 doan o duoi (he thong 2)
void exercise5_run();
#endif
