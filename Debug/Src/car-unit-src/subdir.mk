################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/car-unit-src/cu.c 

OBJS += \
./Src/car-unit-src/cu.o 

C_DEPS += \
./Src/car-unit-src/cu.d 


# Each subdirectory must supply rules for building sources it contributes
Src/car-unit-src/%.o Src/car-unit-src/%.su: ../Src/car-unit-src/%.c Src/car-unit-src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F411RETx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-car-2d-unit-2d-src

clean-Src-2f-car-2d-unit-2d-src:
	-$(RM) ./Src/car-unit-src/cu.d ./Src/car-unit-src/cu.o ./Src/car-unit-src/cu.su

.PHONY: clean-Src-2f-car-2d-unit-2d-src

