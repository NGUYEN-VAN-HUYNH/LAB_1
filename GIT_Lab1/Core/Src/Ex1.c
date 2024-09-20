/*
 * EX1.c
 *
 *  Created on: Sep 10, 2024
 *      Author: Huynh
 */
#include "EX1.h"

int led_status = LED_ON;  // bien trang thai cua den
int count = 0;   // bien dem thoi gian
void init_exercise1(){

}
// bat den do
void led_on(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
}
// bat den vang
void led_off(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
}
void exercise1_run(){
	if (led_status == LED_ON ) {
		led_on();
		count ++;
	}
	if(led_status == LED_OFF){
		led_off();
		count++;
	}
	// dieu khien moi den sang 2s
	if(count == 2 && led_status == LED_ON ){
		led_status = LED_OFF;
		count = 0;
	}
	if(count == 2 && led_status == LED_OFF ){
			led_status = LED_ON;
			count = 0;
		}


}




