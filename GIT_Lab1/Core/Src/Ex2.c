/*
 * EX2.c
 *
 *  Created on: Sep 10, 2024
 *      Author: Huynh
 */

#include "EX2.h"

extern int led_status; // bien trang thai cua den
extern int count;  // bien dem thoi gian
void init_exercise2(){

}
// bat den do
void led_on_red(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);

}
//bat den vang
void led_on_yellow(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);

}
//bat den xanh
void led_on_green(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);

}
void exercise2_run(){
	if (led_status == 1 ) {
		led_on_red();
		count ++;
	}
	if(led_status == 2){
		led_on_yellow();
		count++;
	}
	if (led_status == 3 ) {
		led_on_green();
		count ++;
	}
	// dieu khien thoi gian sang cua cac den (do - 5s, vang - 2s, xanh - 3s)
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

}


