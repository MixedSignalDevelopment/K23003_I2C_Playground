/**
 * 	@file		tca9534.h
 *
 *	@author		Michael Adam <michael.adam5@proton.me>
 *	@date		2024-09-14
 *
 *  @brief		Library for the TCA9534 / TCA9534A IO expander
 *  
 */

#ifndef TCA9534_STM32
#define TCA9534_STM32

// Includes
#include <stdbool.h>
#include "main.h"

// Defines
// Addresses
#define 	TCA9534_ADDR_0			0x20 << 1
#define 	TCA9534_ADDR_1			0x21 << 1
#define 	TCA9534_ADDR_2			0x22 << 1
#define 	TCA9534_ADDR_3			0x23 << 1
#define 	TCA9534_ADDR_4			0x24 << 1
#define 	TCA9534_ADDR_5			0x25 << 1
#define 	TCA9534_ADDR_6			0x26 << 1
#define 	TCA9534_ADDR_7			0x27 << 1

#define 	TCA9534A_ADDR_0			0x38 << 1
#define 	TCA9534A_ADDR_1			0x39 << 1
#define 	TCA9534A_ADDR_2			0x3A << 1
#define 	TCA9534A_ADDR_3			0x3B << 1
#define 	TCA9534A_ADDR_4			0x3C << 1
#define 	TCA9534A_ADDR_5			0x3D << 1
#define 	TCA9534A_ADDR_6			0x3E << 1
#define 	TCA9534A_ADDR_7			0x3F << 1

// Registers
#define		TCA9534_INPUT_REG		0x00
#define		TCA9534_OUTPUT_REG		0x01
#define		TCA9534_POLARITY_REG	0x02
#define 	TCA9534_CONFIG_REG		0x03

// Enumerators

// Function Prototypes
ErrorStatus TCA9534_Init(uint8_t device_addr, uint8_t direction);

void TCA9534_Write_Output_Reg(uint8_t device_addr, uint8_t byte);

uint8_t TCA9534_Read_Input_Reg(uint8_t device_addr);

// #########################################################
// Board specific code
// #########################################################
uint8_t Read_PB_P4(void);
uint8_t Read_PB_P5(void);
uint8_t Read_PB_P6(void);
uint8_t Read_PB_P7(void);
uint8_t Read_INT(void);
void Write_LED(uint8_t state, uint8_t led_number);

#endif //TCA9534_STM32