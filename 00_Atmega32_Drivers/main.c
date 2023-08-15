/*************************************************************************/
// Author        : Sherif Ashraf Khadr
// Project       : Atmega32_Drivers
// File          : main.c
// Date          : 31 Jul 2023
// GitHub        : https://github.com/sherifkhadr
/*************************************************************************/

#include "APPLICATION/app.h"


void main(void)
{
	appInit();
	appMain();
}








//ST_EKP_cfg_t kp =
//{
//		.arrOfRows =
//		{
//			{GPIO_PORTC,GPIO_PIN0,GPIO_INPUT,GPIO_HIGH},
//			{GPIO_PORTC,GPIO_PIN1,GPIO_INPUT,GPIO_HIGH},
//			{GPIO_PORTC,GPIO_PIN2,GPIO_INPUT,GPIO_HIGH},
//			{GPIO_PORTC,GPIO_PIN3,GPIO_INPUT,GPIO_HIGH}
//		},
//		.arrOfColumns =
//		{
//			{GPIO_PORTC,GPIO_PIN4,GPIO_OUTPUT},
//			{GPIO_PORTC,GPIO_PIN5,GPIO_OUTPUT},
//			{GPIO_PORTC,GPIO_PIN6,GPIO_OUTPUT},
//			{GPIO_PORTC,GPIO_PIN7,GPIO_OUTPUT}
//		}
//};
//
//
//void main(void) {
//
//	EKP_init(&kp);
//	uint8_t res = 's';
//	while (1) {
//
//		EKP_scanningForPressedBtn(&kp,&res);
//
//	}
//}
