/*! @file : botones.h
 * @author  Luis Ospino
 * @version 1.0.0
 * @date    Sep 6, 2021
 * @brief   Driver para lectura de botones
 * @details
 *
 */
#ifndef IOT_SKD_PERIPHERALS_BOTONES_H_
#define IOT_SKD_PERIPHERALS_BOTONES_H_
/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "peripherals.h"
#include "fsl_gpio.h"

/*!
 * @addtogroup PERIPHERALS
 * @{
 */
/*!
 * @addtogroup BOTONES
 * @{
 */
/*******************************************************************************
 * Public Definitions
 ******************************************************************************/

/*******************************************************************************
 * External vars
 ******************************************************************************/

/*******************************************************************************
 * Public vars
 ******************************************************************************/

/*******************************************************************************
 * Public Prototypes
 ******************************************************************************/
bool boton1LeerEstado();
bool boton2LeerEstado();

/** @} */ // end of BOTONES group
/** @} */ // end of PERIPHERALS group

#endif /* IOT_SKD_PERIPHERALS_BOTONES_H_ */