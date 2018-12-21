/* ****************************************************************************************************
 * lib_gpio.h within the following project: lib_gpio
 *	
 *  compiler:   GNU Tools ARM Embedded (4.7.201xqx)
 *  target:     Cortex Mx
 *  author:		tom
 * ****************************************************************************************************/

/* ****************************************************************************************************/





#ifndef SH_LIB_GPIO_LIB_GPIO_H_
#define SH_LIB_GPIO_LIB_GPIO_H_

/* *******************************************************************
 * includes
 * ******************************************************************/
/* system */
#include <stdint.h>

/* project */
#include <lib_gpio_types.h>

/* *******************************************************************
 * defines
 * ******************************************************************/

/* gpio handles */

/* *******************************************************************
 * function declarations
 * ******************************************************************/

/* *******************************************************************
 * \brief	opens a gpio port for further read/write/toggle accesses
 * ---------
 * \remark	special remarks on the function
 * ---------
 * \param	*_arg [in]
 * ---------
 * \return	'0', if successful, < '0' if not successful
 * ******************************************************************/
int lib_gpio__open(gpio_hdl_t *_hdl, int _pin, struct gpio_open_args *_arg);

/* *******************************************************************
 * \brief	closes a previously opened port/pin
 * ---------
 * \remark	special remarks on the function
 * ---------
 * \param	*_arg [in]
 * ---------
 * \return	'0', if successful, < '0' if not successful
 * ******************************************************************/
int lib_gpio__close(gpio_hdl_t *_hdl);

/* *******************************************************************
 * \brief	writes on a port/pin
 * ---------
 * \remark	special remarks on the function
 * ---------
 * \param	*_arg [in]
 * ---------
 * \return	'0', if successful, < '0' if not successful
 * ******************************************************************/
int lib_gpio__write(gpio_hdl_t _hdl, unsigned int _val);

/* *******************************************************************
 * \brief	reads from a port/pin
 * ---------
 * \remark	special remarks on the function
 * ---------
 * \param	*_arg [in]
 * ---------
 * \return	'0', if successful, < '0' if not successful
 * ******************************************************************/
int lib_gpio__read(gpio_hdl_t _hdl, unsigned int *_val);

/* *******************************************************************
 * \brief	toggles a pin port
 * ---------
 * \remark	special remarks on the function
 * ---------
 * \param	*_arg [in]
 * ---------
 * \return	'0', if successful, < '0' if not successful
 * ******************************************************************/
int lib_gpio__toggle(gpio_hdl_t _hdl);

#endif /* SH_LIB_GPIO_LIB_GPIO_H_ */
