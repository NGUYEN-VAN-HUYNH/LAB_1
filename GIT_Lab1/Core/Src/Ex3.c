/*
 * EX3.c
 *
 *  Created on: Sep 10, 2024
 *      Author: Huynh
 */

#include "EX3.h"

extern int led_status; // bien trang thai he thong den tin hieu thu nhat
extern int count;  	   // bien dem thoi gian cua he thong den tin hieu thu nhat
int count1 = 0;        // bien dem thoi gian cua he thong den tin hieu thu 2
int led_status1 = 1;   // bien trang thai he thong den tin hieu thu 2
void init_exercise3(){

}
// Cac Ham bat den do, vang, xanh cua He thong den thu nhat
void Led_on_red(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);

}
void Led_on_yellow(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);

}
void Led_on_green(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);

}
// Cac Ham bat den do, vang, xanh cua He thong den thu 2
void led_on_red1(){
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, GPIO_PIN_RESET);
}
void led_on_yellow1(){
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, GPIO_PIN_RESET);
}
void led_on_green1(){
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, GPIO_PIN_SET);
}

void exercise3_run(){
	// dieu khien trang thai he thong den tin hieu thu nhat
	if (led_status == 1 ) {
		Led_on_red();
		count ++;
	}
	if(led_status == 2){
		Led_on_yellow();
		count++;
	}
	if (led_status == 3 ) {
			Led_on_green();
			count ++;
		}
	// dieu khien thoi gian sang den tin hieu cua he thong thu nhat
	if(count == 5 && led_status == 1 ){
		led_status = 3;
		count = 0;
	}
	if(count == 3 && led_status == 3 ){
		led_status = 2;
		count = 0;
	}
	if(count == 2 && led_status == 2 ){
		led_status = 1;
		count = 0;
	}

	// dieu khien trang thai he thong den tin hieu thu 2
	if (led_status1 == 1 ) {
		led_on_green1();
		count1 ++;
	}
	if(led_status1 == 2){
		led_on_yellow1();
		count1++;
	}
	if (led_status1 == 3 ) {
			led_on_red1();
			count1 ++;
		}
	// dieu khien thoi gian sang den tin hieu cua he thong den thu 2
	if(count1 == 3 && led_status1 == 1 ){
		led_status1 = 2;
		count1 = 0;
		}
	if(count1 == 2 && led_status1 == 2 ){
			led_status1 = 3;
			count1 = 0;
		}
	if(count1 == 5 && led_status1 == 3 ){
				led_status1 = 1;
				count1 = 0;
			}

}


