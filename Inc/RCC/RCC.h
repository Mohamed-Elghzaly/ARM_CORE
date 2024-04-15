/*
 * RCC.h
 *
 *  Created on: Apr 14, 2024
 *      Author: Mohamed
 */

#ifndef RCC_RCC_H_
#define RCC_RCC_H_

/**************** Includes ********************/
#include "Std_types.h"
#include "../BIT_CFG.h"
#include "RCC_CFG.h"
/**************** Macro Declarations ********************/
#define RCC_BASE            (0x40021000UL)
#define RCC					((RCC_t *)RCC_BASE)



/*------- RCC_CR --------*/
#define		HSION		0
#define		HSIRDY		1
#define		HSITRIM		3
#define		HSICAL		8
#define		HSEON		16
#define		HSERD		17
#define		HSEBYP		18
#define		CSSON		19
#define		PLLON		24
#define		PLLRDY		25
#define		PLL2ON		26
#define		PLL2RDY		27
#define		PLL3ON		28
#define		PLL3RDY		29


/************ BUS ID *************/
#define AHB			0
#define APB1		1
#define APB2		2
/****************AHB Peripheral **********/
#define RCC_DMA1EN			0
#define RCC_DMA2EN			1
#define RCC_SRAMEN			2
#define RCC_FLITFEN			4
#define RCC_CRCEN			6
#define RCC_OTGFSEN			12
#define RCC_ETHMACEN		14
#define RCC_ETHMACTXEN		15
#define RCC_ETHMACRXEN		16
/****************APB2 Peripheral **********/
#define RCC_AFIOEN			0
#define RCC_IOPAEN			2
#define RCC_IOPBEN			3
#define RCC_IOPCEN			4
#define RCC_IOPDEN			5
#define RCC_IOPEEN			6
#define RCC_ADC1EN			9
#define RCC_ADC2EN			10
#define RCC_TIM1EN			11
#define RCC_SPI1EN			12
#define RCC_USART1EN		14
/****************APB1 Peripheral **********/
#define RCC_TIM2EN			0
#define RCC_TIM3EN			1
#define RCC_TIM4EN			2
#define RCC_TIM5EN			3
#define RCC_TIM6EN			4
#define RCC_TIM7EN			5
#define RCC_WWDGEN			11
#define RCC_SPI2EN			14
#define RCC_SPI3EN			15
#define RCC_USART2EN		17
#define RCC_USART3EN		18
#define RCC_USART4EN		19
#define RCC_USART5EN		20
#define RCC_I2C1EN			21
#define RCC_I2C2EN			22
#define RCC_CAN1EN			25
#define RCC_CAN2EN			26
#define RCC_BKPEN			27
#define RCC_PWREN			28
#define RCC_DACEN			29

/********* Enable OR Disable Peripheral ***************/
#define RCC_ENABLE		1
#define RCC_DISABLE		0

/**************** Macro Function Declarations ********************/

/**************** Data Type Declaration ********************/
typedef struct{
	volatile uint32_t RCC_CR;
	volatile uint32_t RCC_CFGR;
	volatile uint32_t RCC_CIR;
	volatile uint32_t RCC_APB2RSTR;
	volatile uint32_t RCC_APB1RSTR;
	volatile uint32_t RCC_AHBENR;
	volatile uint32_t RCC_APB2ENR;
	volatile uint32_t RCC_APB1ENR;
	volatile uint32_t RCC_BDCR;
	volatile uint32_t RCC_CSR;
}RCC_t;

/**************** Software Interfaces Declaration ********************/
void RCC_init(void);

void RCC_PeripheralClkEn(uint8_t Bus_Id, uint8_t peripheral_Id, uint8_t CLK_State);


#endif /* RCC_RCC_H_ */
