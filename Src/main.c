/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Mohamed AbdAllah
 * @brief          : Main program body
 ******************************************************************************
 */
#include "Std_types.h"
//#include "NVIC/NVIC.h"
#include "RCC/RCC.h"



int main(void)
{
	RCC_init();
	RCC_PeripheralClkEn(AHB, RCC_DMA1EN, RCC_ENABLE);
	RCC_PeripheralClkEn(AHB, RCC_DMA2EN, RCC_ENABLE);
	RCC_PeripheralClkEn(AHB, RCC_ETHMACEN, RCC_ENABLE);

	RCC_PeripheralClkEn(APB1, RCC_WWDGEN, RCC_ENABLE);

	RCC_PeripheralClkEn(APB2, RCC_ADC1EN, RCC_ENABLE);
	RCC_PeripheralClkEn(APB2, RCC_SPI1EN, RCC_ENABLE);
    /* Loop forever */
	while(1){

	}
}
