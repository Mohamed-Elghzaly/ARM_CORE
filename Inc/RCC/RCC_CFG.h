/*
 * RCC_CFG.h
 *
 *  Created on: Apr 15, 2024
 *      Author: Mohamed
 */

#ifndef RCC_RCC_CFG_H_
#define RCC_RCC_CFG_H_

/*********  clock sources ***********/
#define HSE_MODE     0
#define HSI_MODE     1
#define PLL_MODE     2

#define  RCC_CLK_MODE		HSI_MODE

/************* PLL Multipler *************/
#define PLL_CLK_MUL_4			0x2
#define PLL_CLK_MUL_5			0x3
#define PLL_CLK_MUL_6			0x4
#define PLL_CLK_MUL_7			0x5
#define PLL_CLK_MUL_8			0x6
#define PLL_CLK_MUL_9			0x7
#define PLL_CLK_MUL_10			0x8
#define PLL_CLK_MUL_11			0x9
#define PLL_CLK_MUL_12			0xA
#define PLL_CLK_MUL_13			0xB
#define PLL_CLK_MUL_14			0xC
#define PLL_CLK_MUL_15			0xD
#define PLL_CLK_MUL_16			0xE

#define PLL_CLK_MODE			PLL_CLK_MUL_4
/***********************************/

#define RCC_ENABLE		1
#define RCC_DISABLE		0

#endif /* RCC_RCC_CFG_H_ */
