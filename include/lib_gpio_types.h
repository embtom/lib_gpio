/* ****************************************************************************************************
 * lib_gpio_types.h within the following project: lib_gpio
 *	
 *  compiler:   GNU Tools ARM Embedded (4.7.201xqx)
 *  target:     Cortex Mx
 *  author:		Tom
 * ****************************************************************************************************/

#ifndef LIB_GPIO_TYPES_H_
#define LIB_GPIO_TYPES_H_

/* *******************************************************************
 * typedefs
 * ******************************************************************/
typedef struct gpio_hdl* gpio_hdl_t;

typedef void (gpio_event_handler_t)(void *const _arg);


/* *******************************************************************
 * custom data types (e.g. enumerations, structures, unions)
 * ******************************************************************/
enum gpio_mode {
	GPIO_MODE_input,
	GPIO_MODE_output_pp,
	GPIO_MODE_output_od,
	GPIO_MODE_event_rising,
	GPIO_MODE_event_falling,
	GPIO_MODE_event_rising_falling
};

enum gpio_pull {
	GPIO_PULL_no,
	GPIO_PULL_up,
	GPIO_PULL_down
};



/* GPIO open attributes */
struct gpio_open_args {
	enum gpio_mode mode;
	enum gpio_pull pull_mode;
	gpio_event_handler_t* event_handler;
	void* event_arg;

};

#endif /* LIB_GPIO_TYPES_H_ */
