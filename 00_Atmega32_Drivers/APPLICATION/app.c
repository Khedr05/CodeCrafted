/*************************************************************************/
// Author        : Sherif Ashraf Khadr									 
// Project       : 00_Gpio_Driver                                    	 
// File          : app.c                                  	     
// Date          : 31 Jul 2023	                                                                                                 */
// GitHub        : https://github.com/sherifkhadr             		     
/*************************************************************************/

#include "app.h"

/*
ST_HLCD_cfg_t lcd =
{
		.dataPinsMode = HLCD_4_BIT_MODE,
		.controlPort = GPIO_PORTB,
		.dataPort = GPIO_PORTA,
		.d0Pin = GPIO_PIN0,
		.d1Pin = GPIO_PIN1,
		.d2Pin = GPIO_PIN2,
		.d3Pin = GPIO_PIN3,
		.d4Pin = GPIO_PIN4,
		.d5Pin = GPIO_PIN5,
		.d6Pin = GPIO_PIN6,
		.d7Pin = GPIO_PIN7,
		.rsPin = GPIO_PIN0,
		.rwPin = GPIO_PIN1,
		.enPin = GPIO_PIN2
};

uint8_t arr[8] = {0x04,0x0a,0x00,0x15,0x15,0x1f,0x00,0x00};
*/

void actionOfExti0(void);

ST_MEXTI_cfg_t exti0 =
{
		.numberOfExti = MEXTI_EXTI2_INTERRUPT,
		.extiTriggerSence = MEXTI_RISING_EDGE_SENSE_CONTROL,
		.MEXTI_ptrCallbackHandler = actionOfExti0
};

ST_LED_cfg_t led =
{
		.ledPortName = GPIO_PORTA,
		.ledPinNumber = GPIO_PIN0,
		.ledDefaultState = LED_STATUES_OFF
};


ST_HPB_cfg_t pbone =
{
		.pbPort = GPIO_PORTB,
		.PbPin = GPIO_PIN2,
		.PbInternalResistor = HPB_PULL_DOWN
};

void actionOfExti0(void)
{
	LED_toggle(&led);
}

void appInit(void)
{
	MGI_vGIE();
	LED_init(&led);
	HPB_init(&pbone);
	MEXTI_initExti(&exti0);
	MEXTI_enableExti(&exti0);
}

void appMain(void)
{
		while(1)
		{

		}
}




