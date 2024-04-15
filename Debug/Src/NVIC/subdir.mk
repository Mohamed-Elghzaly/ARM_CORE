################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/NVIC/NVIC.c 

OBJS += \
./Src/NVIC/NVIC.o 

C_DEPS += \
./Src/NVIC/NVIC.d 


# Each subdirectory must supply rules for building sources it contributes
Src/NVIC/%.o Src/NVIC/%.su Src/NVIC/%.cyclo: ../Src/NVIC/%.c Src/NVIC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Src-2f-NVIC

clean-Src-2f-NVIC:
	-$(RM) ./Src/NVIC/NVIC.cyclo ./Src/NVIC/NVIC.d ./Src/NVIC/NVIC.o ./Src/NVIC/NVIC.su

.PHONY: clean-Src-2f-NVIC

