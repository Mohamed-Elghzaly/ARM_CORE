/*
 * RCC.c
 *
 *  Created on: Apr 14, 2024
 *      Author: Mohamed
 */
/**************** Includes ********************/
#include "../../Inc/RCC/RCC.h"

/**************** Software Interfaces Declaration ********************/
void RCC_init(void){
#if RCC_CLK_MODE==HSI_MODE
			RCC->RCC_CR |= (1 << HSION);
			RCC->RCC_CFGR |= (0b00 << 0);
			while(((RCC->RCC_CR & (1 << HSIRDY)) >> HSIRDY) == 0);
#elif RCC_CLK_MODE==HSE_MODE
			RCC->RCC_CR |= (1 << HSEON);
			RCC->RCC_CFGR |= (0b01 << 0);
			while(((RCC->RCC_CR & (1 << HSERD)) >> HSERD) == 0);
#elif RCC_CLK_MODE==PLL_MODE
			RCC->RCC_CR |= (1 << 24);
			RCC->RCC_CFGR |= (0b10 << 0);
			while(((RCC->RCC_CR & (1 << PLLRDY)) >> PLLRDY) == 0);
#if PLL_CLK_MODE==PLL_CLK_MUL_4
			RCC->RCC_CFGR |= (PLL_CLK_MUL_4 << 18);
#elif PLL_CLK_MODE==PLL_CLK_MUL_5
			RCC->RCC_CFGR |= (PLL_CLK_MUL_5 << 18);
#elif PLL_CLK_MODE==PLL_CLK_MUL_6
			RCC->RCC_CFGR |= (PLL_CLK_MUL_6 << 18);
#elif PLL_CLK_MODE==PLL_CLK_MUL_7
			RCC->RCC_CFGR |= (PLL_CLK_MUL_7 << 18);
#elif PLL_CLK_MODE==PLL_CLK_MUL_8
			RCC->RCC_CFGR |= (PLL_CLK_MUL_8 << 18);
#elif PLL_CLK_MODE==PLL_CLK_MUL_9
			RCC->RCC_CFGR |= (PLL_CLK_MUL_9 << 18);
#elif PLL_CLK_MODE==PLL_CLK_MUL_10
			RCC->RCC_CFGR |= (PLL_CLK_MUL_10 << 18);
#elif PLL_CLK_MODE==PLL_CLK_MUL_11
			RCC->RCC_CFGR |= (PLL_CLK_MUL_11 << 18);
#elif PLL_CLK_MODE==PLL_CLK_MUL_12
			RCC->RCC_CFGR |= (PLL_CLK_MUL_12 << 18);
#elif PLL_CLK_MODE==PLL_CLK_MUL_13
			RCC->RCC_CFGR |= (PLL_CLK_MUL_13 << 18);
#elif PLL_CLK_MODE==PLL_CLK_MUL_14
			RCC->RCC_CFGR |= (PLL_CLK_MUL_14 << 18);
#elif PLL_CLK_MODE==PLL_CLK_MUL_15
			RCC->RCC_CFGR |= (PLL_CLK_MUL_15 << 18);
#elif PLL_CLK_MODE==PLL_CLK_MUL_16
			RCC->RCC_CFGR |= (PLL_CLK_MUL_16 << 18);
#endif
#endif
}

void RCC_PeripheralClkEn(uint8_t Bus_Id, uint8_t peripheral_Id, uint8_t CLK_State){
	if(Bus_Id == AHB){
		switch(CLK_State){
		case RCC_ENABLE:
			RCC->RCC_AHBENR |= (1 << peripheral_Id);
			break;
		case RCC_DISABLE:
			RCC->RCC_AHBENR &= ~(1 << peripheral_Id);
			break;
		default:;
		}
	}
	else if(Bus_Id == APB2){
		switch(CLK_State){
		case RCC_ENABLE:
			RCC->RCC_APB2ENR |= (1 << peripheral_Id);
			break;
		case RCC_DISABLE:
			RCC->RCC_APB2ENR &= ~(1 << peripheral_Id);
			break;
		default:;
		}
	}
	else if(Bus_Id == APB1){
			switch(CLK_State){
			case RCC_ENABLE:
				RCC->RCC_APB1ENR |= (1 << peripheral_Id);
				break;
			case RCC_DISABLE:
				RCC->RCC_APB1ENR &= ~(1 << peripheral_Id);
				break;
			default:;
			}
		}
	else{/* Nothing */}
}
