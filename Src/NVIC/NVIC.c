/**
 ******************************************************************************
 * @file           : NVIC.c
 * @author         : Mohamed AbdAllah
 * @brief          : NVIC Source File
 ******************************************************************************

 */


/**************** Includes ********************/
#include "../Inc/NVIC/NVIC.h"
/**************** Macro Declarations ********************/

/**************** Macro Function Declarations ********************/

/**************** Data Type Declaration ********************/

/**************** Software Interfaces Declaration ********************/

/* Enables an interrupt or exception */
void NVIC_EnableIRQ(uint32_t IRQn){
	if(IRQn >= 0){
		NVIC->ISER[IRQn >> 5]  = (1 << (IRQn & 0x1F));
	}
}
/* Disables an interrupt or exception */
void NVIC_DisableIRQ(uint32_t IRQn){
	if(IRQn >= 0){
		NVIC->ICER[IRQn >> 5]  = (1 << (IRQn & 0x1F));
	}
}
/* Sets the pending status of interrupt or exception to 1 */
void NVIC_SetPendingIRQ(uint32_t IRQn){
	if(IRQn >= 0){
		NVIC->ISPR[IRQn >> 5]  = (1 << (IRQn & 0x1F));
	}
}
/* Clears the pending status of interrupt or exception to 0 */
void NVIC_ClearPendingIRQ(uint32_t IRQn){
	if(IRQn >= 0){
		NVIC->ICPR[IRQn >> 5]  = (1 << (IRQn & 0x1F));
	}
}
/* Reads the pending status of interrupt or exception. This
function returns non-zero value if the pending status is
set to 1. */
uint32_t NVIC_GetPendingIRQ(uint32_t IRQn){
	if(IRQn >= 0){
		return ((NVIC->IABR[IRQn >> 5] & (1 << (IRQn & 0x1F))) != 0 ? 1: 0 );
	}
	else{
		return 0;
	}
}
/* Sets the priority of an interrupt or exception with
configurable priority level to 1. */
void NVIC_SetPriority(uint32_t IRQn, uint32_t priority){
	if(IRQn >= 0){
			NVIC->IPR[IRQn >> 5]  = (1 << (IRQn & 0x1F));
		}
}
/* Reads the priority of an interrupt or exception with
configurable priority level. This function return the
current priority level. */
uint32_t NVIC_GetPriority(uint32_t IRQn);
