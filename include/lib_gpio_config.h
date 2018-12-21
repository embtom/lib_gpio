/* ****************************************************************************************************
 * lib_gpio_LINUX.h within the following project: lib_gpio
 *
 *  compiler:   GNU Tools ARM Embedded (4.7.201xqx)
 *  target:     Cortex Mx
 *  author:		Tom
 * ****************************************************************************************************/

/* ****************************************************************************************************/

#ifndef LIB_GPIO_CONFIG
#define LIB_GPIO_CONFIG

/* *******************************************************************
 * includes
 * ******************************************************************/
/* project*/
#include <gpio_access_types.h>

/* *******************************************************************
 * \brief	Setup of the configuration table necessary translating
 * 			virtual pins to physical 

 * \param	*_config [in] : base address of the config table 
 * \param   _config_count : number of entries at pin config table
 * ---------
 * \return	'0', if successful, < '0' if not successful
 * ******************************************************************/
int lib_gpio__set_config_table(struct gpio_access * const _config, unsigned int _config_count);

/* *******************************************************************
 * \brief	Request corresponding entry of config table by _pinId

 * \param	_pinId : to get config entry 
 * ---------
 * \return	'pointer to config entry', if successful, NULL if not 
 * ******************************************************************/
 struct gpio_access* lib_gpio__get_config(unsigned int _pinId);

#endif /*LIB_GPIO_CONFIG */