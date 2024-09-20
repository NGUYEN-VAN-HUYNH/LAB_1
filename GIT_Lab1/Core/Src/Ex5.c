/*
 * EX5.c
 *
 *  Created on: Sep 15, 2024
 *      Author: Huynh
 */


#include "EX5.h"
int counter_Below = 5; // khoi tao gia tri bien dem thoi gian led 7 doan o duoi (he thong 2)
int counter_Above = 3; // khoi tao gia tri bien dem thoi gian led 7 doan o tren (he thong 1)
int check_color = RED; // bien kiem tra trang thai den tin hieu he thong 2
int check_color1 = GREEN; // bien kiem tra trang thai den tin hieu he thong 1
extern int led_status; // bien luu trang thai den tin hieu he thong 1
extern int count;      // bien dem thoi gian he thong den 1
extern int count1;     // bien dem thoi gian he thong den 2
extern int led_status1;// bien luu trang thai den tin hieu he thong 2
void init_exercise5(){

}


void display7SEG_below(int num) {
    // ban dau tat led 7 doan
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

void display7SEG_above(int num) {
    // ban dau tat led 7 doan
    HAL_GPIO_WritePin(GPIOB, SEG_A1, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB, SEG_B1, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB, SEG_C1, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB, SEG_D1, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB, SEG_E1, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB, SEG_F1, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB, SEG_G1, GPIO_PIN_SET);

    // dieu khien led 7 doan
    switch (num) {
        case 0:
            HAL_GPIO_WritePin(GPIOB, SEG_A1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_B1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_D1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_E1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_F1, GPIO_PIN_RESET);
            break;
        case 1:
            HAL_GPIO_WritePin(GPIOB, SEG_B1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C1, GPIO_PIN_RESET);
            break;
        case 2:
            HAL_GPIO_WritePin(GPIOB, SEG_A1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_B1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_D1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_E1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_G1, GPIO_PIN_RESET);
            break;
        case 3:
            HAL_GPIO_WritePin(GPIOB, SEG_A1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_B1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_D1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_G1, GPIO_PIN_RESET);
            break;
        case 4:
            HAL_GPIO_WritePin(GPIOB, SEG_B1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_F1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_G1, GPIO_PIN_RESET);
            break;
        case 5:
            HAL_GPIO_WritePin(GPIOB, SEG_A1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_D1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_F1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_G1, GPIO_PIN_RESET);
            break;
        case 6:
            HAL_GPIO_WritePin(GPIOB, SEG_A1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_D1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_E1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_F1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_G1, GPIO_PIN_RESET);
            break;
        case 7:
            HAL_GPIO_WritePin(GPIOB, SEG_A1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_B1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C1, GPIO_PIN_RESET);
            break;
        case 8:
            HAL_GPIO_WritePin(GPIOB, SEG_A1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_B1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_D1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_E1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_F1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_G1, GPIO_PIN_RESET);
            break;
        case 9:
            HAL_GPIO_WritePin(GPIOB, SEG_A1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_B1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_D1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_F1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_G1, GPIO_PIN_RESET);
            break;
        default:
            break; // khong lm gi ca
    }

}

// dieu khien den giao thong (su dung lai cac ham o EX3.c)
extern void Led_on_red();
extern void Led_on_yellow();
extern void Led_on_green();
extern void led_on_red1();
extern void led_on_yellow1();
extern void led_on_green1();
void exercise5_run(){
	//  thiet lap trang thai va thoi gian chuyen tin hieu he thong den 1 (led 7 doan o tren)
		if(counter_Above <= 0 && check_color1 == GREEN) {
			counter_Above = 2;
			check_color1 = YELLOW; // den vang
		}
		if(counter_Above <= 0 && check_color1 == YELLOW) {
				counter_Above = 5;
				check_color1 = RED; // den do
		}

		if(counter_Above <= 0 && check_color1 == RED) {
					counter_Above = 3;
					check_color1 = GREEN; // den xanh
		}

		// hien thi led 7 doan he thong den 1
		display7SEG_above(counter_Above--);

	//  thiet lap trang thai va thoi gian chuyen tin hieu he thong den 2 (led 7 doan o duoi)
		if(counter_Below <= 0 && check_color == RED) {
		counter_Below = 3;
		check_color = GREEN; // den xanh
		}
		if(counter_Below <= 0 && check_color == GREEN) {
			counter_Below = 2;
			check_color = YELLOW; // den vang
		}
		if(counter_Below <= 0 && check_color == YELLOW) {
				counter_Below = 5;
				check_color = RED; // den do
		}
		// hien thi led 7 doan he thong den 2
		display7SEG_below(counter_Below--);


	// dieu khien chuyen tin hieu he thong  den 1 (led 7 doan o tren)
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
		// dieu khien chuyen tin hieu he thong  den 2 ( led 7 doan o duoi)
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

