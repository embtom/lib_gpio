/* ****************************************************************************************************
 * gpio_access_types.h within the following project: lib_gpio
 *
 *  compiler:   GNU Tools ARM LINUX | ARM STM32
 *  target:
 * ****************************************************************************************************/

/* ****************************************************************************************************/

#ifndef GPIO_CONFIG_H
#define GPIO_CONFIG_H

/* *******************************************************************
 * custom data types (e.g. enumerations, structures)
 * ******************************************************************/

struct gpio_access
{
    unsigned int pinId;
	unsigned int pinPhys;
	unsigned int pinFD;
};

#endif