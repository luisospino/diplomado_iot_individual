/*! @file : leds.h
 * @author  Luis Ospino
 * @version 1.0.0
 * @date    Aug 31, 2021
 * @brief   Driver para controlar LEDs de tarjeta FRDM-K32L3B3
 * @details
 *
 */
#ifndef IOT_SKD_PERIPHERALS_LEDS_H_
#define IOT_SKD_PERIPHERALS_LEDS_H_
/*******************************************************************************
 * Includes
 ******************************************************************************/


/*!
 * @addtogroup X
 * @{
 */
/*!
 * @addtogroup X
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

void encender_led_verde();
void apagar_led_verde();

void encender_led_rojo();
void apagar_led_rojo();
void toggle_led_rojo();

/** @} */ // end of X group
/** @} */ // end of X group

#endif /* IOT_SKD_PERIPHERALS_LEDS_H_ */
