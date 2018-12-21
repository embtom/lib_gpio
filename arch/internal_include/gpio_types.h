#ifndef GPIO_TYPES_H
#define GPIO_TYPES_H

/* *******************************************************************
 * includes
 * ******************************************************************/
/* project */
#include <lib_gpio_types.h>
#include <gpio_access_types.h>
#include <lib_list_types.h>    

/* *******************************************************************
 * custom data types (e.g. enumerations, structures)
 * ******************************************************************/
struct gpio_hdl
{
	struct gpio_access *access;
	gpio_event_handler_t *event_handler;
	void *event_arg;
	unsigned int isEventPin;
	struct list_node node;
};



#endif /*GPIO_TYPES_H*/ 
