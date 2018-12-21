/* ****************************************************************************************************
 * lib_isr_pool.h within the following project: lib_isr
 *
 *  compiler:   GNU Tools ARM LINUX
 *  target:
 * ****************************************************************************************************/

/* ****************************************************************************************************/


#ifndef _GPIO_EVENT_LINUX_H_
#define _GPIO_EVENT_LINUX_H_

#ifdef __cplusplus
extern "C" {
#endif


/* *******************************************************************
 * includes
 * ******************************************************************/

/* c-runtime */
#include <stdint.h>

/* project */
#include <lib_gpio_types.h>

/* *******************************************************************
 * GLOBAL FUNCTION DECLARATIONS
 * ******************************************************************/

/* *******************************************************************
 * \brief Init of the gpio event handling
 * ---------
 * \remark The GPIO init routine is called by each event driven pin
 * ---------
 * \return	if successfully, < '0' if not successful
 * ******************************************************************/
int gpio_event__init();

/* *******************************************************************
 * \brief Cleanup of the gpio event handling
 * ---------
 * \remark The GPIO cleanup routine is called by each event driven pin
 * ---------
 * \return	if successfully, < '0' if not successful
 * ******************************************************************/
int gpio_event__cleanup();

/* *******************************************************************
 * \brief current pin is registerd at the event handling
 * ---------
 * \return	if successfully, < '0' if not successful
 * ******************************************************************/
int gpio_event__register(gpio_hdl_t _hdl);

/* *******************************************************************
 * \brief current pin is unregisterd from the event handling
 * ---------
 * \return	if successfully, < '0' if not successful
 * ******************************************************************/
int gpio_event__unregister(gpio_hdl_t _hdl);


#ifdef __cplusplus
}
#endif

#endif /* _GPIO_EVENT_LINUX_H_ */
