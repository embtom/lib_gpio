/* ****************************************************************************************************
 * lib_isr_pool.h within the following project: lib_isr
 *
 *  compiler:   GNU Tools ARM LINUX
 *  target:
 * ****************************************************************************************************/

/* ****************************************************************************************************/

#ifndef GPIO_CONFIG_H
#define GPIO_CONFIG_H

/* *******************************************************************
 * includes
 * ******************************************************************/

/* c-runtime */
#include <stdint.h>

/* system */
#ifdef STM32HAL_F1
	#include <stm32f1xx_hal_gpio.h>
	#include <stm32f1xx_hal_rcc.h>
#elif STM32HAL_F4
	#include <stm32f4xx_hal_gpio.h>
	#include <stm32f4xx_hal_rcc.h>
#else
	#error No STM32 HAL framework selected at lib_gpio
#endif

/* frame */
#include <lib_isr_types.h>

/* *******************************************************************
 * custom data types (e.g. enumerations, structures)
 * ******************************************************************/

struct  gpio_access
{
	unsigned int pinId;
	GPIO_TypeDef *pinPort; 	/* port */
	uint32_t pinNumber;		 	/* pin  */
	lib_isr_hdl_t event_hdl;
};


#endif