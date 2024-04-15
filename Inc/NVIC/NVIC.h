/**
 ******************************************************************************
 * @file           : NVIC.h
 * @author         : Mohamed AbdAllah
 * @brief          : NVIC Header File
 ******************************************************************************
 */
#ifndef _NVIC_H_
#define _NVIC_H_

/**************** Includes ********************/
#include "Std_types.h"
/**************** Macro Declarations ********************/
#define NVIC_BASE            (0xE000E100UL)
#define NVIC                 ((NVIC_t *)NVIC_BASE)



#define NMI					 -14U
#define MemManage			 -12U
#define BusFault			 -11U
#define UsageFault			 -10U
#define SVCall				 -5U
#define DebugMonitor		 -4U
#define PendSV				 -2U
#define SysTick				 -1U
#define WWDG				  0U
#define PVD					  1U
#define TAMPER				  2U
#define RTC					  3U
#define FLASH				  4U
#define RCC					  5U
#define EXTI0				  6U
#define EXTI1				  7U
#define EXTI2				  8U
#define EXTI3				  9U
#define EXTI4				  10U
#define DMA1_Channel1		  11U
#define DMA1_Channel2		  12U
#define DMA1_Channel3		  13U
#define DMA1_Channel4		  14U
#define DMA1_Channel5		  15U
#define DMA1_Channel6		  16U
#define DMA1_Channel7		  17U
#define ADC1_2				  18U
#define USB_HP_CAN_TX		  19U
#define USB_LP_CAN_RX0		  20U
#define CAN_RX1				  21U
#define CAN_SCE				  22U
#define EXTI9_5				  23U
#define TIM1_BRK			  24U
#define TIM1_UP				  25U
#define TIM1_TRG_COM		  26U
#define TIM1_CC				  27U
#define TIM2				  28U
#define TIM3				  29U
#define TIM4				  30U
#define I2C1_EV				  31U
#define I2C1_ER				  32U
#define I2C2_EV				  33U
#define I2C2_ER				  34U
#define SPI1				  35U
#define SPI2				  36U
#define USART1				  37U
#define USART2				  38U
#define USART3				  39U
#define EXTI15_10			  40U
#define RTCAlarm			  41U
#define USBWakeup			  42U
#define TIM8_BRK			  43U
#define TIM8_UP				  44U
#define TIM8_TRG_COM		  45U
#define TIM8_CC				  46U
#define ADC3				  47U
#define FSMC				  48U
#define SDIO				  49U
#define TIM5				  50U
#define SPI3				  51U
#define UART4				  52U
#define UART5				  53U
#define TIM6				  54U
#define TIM7				  55U
#define DMA2_Channel1		  56U
#define DMA2_Channel2		  57U
#define DMA2_Channel3		  58U
#define DMA2_Channel4_5		  59U
/**************** Macro Function Declarations ********************/

/**************** Data Type Declaration ********************/
typedef struct{
	volatile uint32_t ISER[8U];
	uint8_t RESERVED0[96];
	volatile uint32_t ICER[8U];
	uint8_t RESERVED1[96];
	volatile uint32_t ISPR[8U];
	uint8_t RESERVED2[96];
	volatile uint32_t ICPR[8U];
	uint8_t RESERVED3[96];
	volatile uint32_t IABR[8U];
	uint8_t RESERVED4[224];
	volatile uint32_t IPR[60U];
	uint8_t RESERVED5[2572];
	volatile uint32_t STIR;
}NVIC_t;

/**************** Software Interfaces Declaration ********************/

/* Enables an interrupt or exception */
void NVIC_EnableIRQ(uint32_t IRQn);
/* Disables an interrupt or exception */
void NVIC_DisableIRQ(uint32_t IRQn);
/* Sets the pending status of interrupt or exception to 1 */
void NVIC_SetPendingIRQ(uint32_t IRQn);
/* Clears the pending status of interrupt or exception to 0 */
void NVIC_ClearPendingIRQ(uint32_t IRQn);
/* Reads the pending status of interrupt or exception. This
function returns non-zero value if the pending status is
set to 1. */
uint32_t NVIC_GetPendingIRQ(uint32_t IRQn);
/* Sets the priority of an interrupt or exception with
configurable priority level to 1. */
void NVIC_SetPriority(uint32_t IRQn, uint32_t priority);
/* Reads the priority of an interrupt or exception with
configurable priority level. This function return the
current priority level. */
uint32_t NVIC_GetPriority(uint32_t IRQn);

#endif




