/*! @file : botones.c
 * @author  Luis Ospino
 * @version 1.0.0
 * @date    Sep 6, 2021
 * @brief   Driver para lectura de botones
 * @details
 *
*/
/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "botones.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/


/*******************************************************************************
 * Private Prototypes
 ******************************************************************************/


/*******************************************************************************
 * External vars
 ******************************************************************************/


/*******************************************************************************
 * Local vars
 ******************************************************************************/


/*******************************************************************************
 * Private Source Code
 ******************************************************************************/


/*******************************************************************************
 * Public Source Code
 ******************************************************************************/
bool boton1LeerEstado(){
	uint32_t valor_pin = GPIO_PinRead(GPIOC, 3);
	return (bool) valor_pin;
}

bool boton2LeerEstado(){
	uint32_t valor_pin = GPIO_PinRead(GPIOA, 4);
	return (bool) valor_pin;
}
