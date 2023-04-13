################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/collision-detection-unit-src/cdu.c 

OBJS += \
./Src/collision-detection-unit-src/cdu.o 

C_DEPS += \
./Src/collision-detection-unit-src/cdu.d 


# Each subdirectory must supply rules for building sources it contributes
Src/collision-detection-unit-src/%.o Src/collision-detection-unit-src/%.su: ../Src/collision-detection-unit-src/%.c Src/collision-detection-unit-src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F411RETx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-collision-2d-detection-2d-unit-2d-src

clean-Src-2f-collision-2d-detection-2d-unit-2d-src:
	-$(RM) ./Src/collision-detection-unit-src/cdu.d ./Src/collision-detection-unit-src/cdu.o ./Src/collision-detection-unit-src/cdu.su

.PHONY: clean-Src-2f-collision-2d-detection-2d-unit-2d-src

