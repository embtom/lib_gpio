/* ****************************************************************************************************
 * gpio_access.h Access to the hardware specific gpio access
 *
 *  compiler:   GNU Tools ARM Embedded (4.7.201xqx)
 *  target:     Cortex Mx | Linux 
 *  author:		Tom
 * ****************************************************************************************************/

#ifndef SH_LIB_GPIO_LIB_GPIO_ACCESS_H_
#define SH_LIB_GPIO_LIB_GPIO_ACCESS_H_
/* *******************************************************************
 * includes
 * ******************************************************************/
#include <gpio_access_types.h>
#include <lib_gpio_types.h>

/* *******************************************************************
 * \brief	close gpio device
 * ---------
 * \remark Close of the gpio file descriptor
 * ---------
 * \param	_fd		fd to close
 * ---------
 * \return	fd return if successfully, < '0' if not successful
 * ******************************************************************/
int gpio_access__pin_open(struct gpio_access * _hdl, enum gpio_mode _mode, enum gpio_pull _pull);

/* *******************************************************************
 * \brief	close gpio device
 * ---------
 * \remark Close of the gpio file descriptor
 * ---------
 * \param	_fd		fd to close
 * ---------
 * \return	fd return if successfully, < '0' if not successful
 * ******************************************************************/
int gpio_access__pin_close(struct gpio_access *_hdl);

/* *******************************************************************
 * \brief	write to gpio output
 * ---------
 * \remark Write gpio output value. For usage the direction have to be
 * 		   set as output
 * ---------
 * \param	_fd		fd to close
 * ---------
 * \return	fd return if successfully, < '0' if not successful
 * ******************************************************************/
int gpio_access__write( struct gpio_access *_hdl, unsigned int _value);

/* *******************************************************************
 * \brief	read to gpio input
 * ---------
 * \remark Read gpio input value. For usage the direction have to be
 * 		   set as input
 * ---------
 * \param	_fd		fd to close
 * ---------
 * \return	fd return if successfully, < '0' if not successful
 * ******************************************************************/
int gpio_access__read( struct gpio_access *_hdl, unsigned int *_value);

/* *******************************************************************
 * \brief	toggle pin
 * ---------
 * \remark Toggle value. For usage the direction have to be
 * 		   set as input
 * ---------
 * \param	_fd		fd to close
 * ---------
 * \return	fd return if successfully, < '0' if not successful
 * ******************************************************************/
int gpio_access__toggle( struct gpio_access *_hdl);


#endif
