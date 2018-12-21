/*
    __boostinv2_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __boostinv2_driver.h
@brief    Boost_INV2 Driver
@mainpage Boost_INV2 Click
@{

@image html libstock_fb_view.jpg

@}

@defgroup   BoostINV2
@brief      Boost_INV2 Click Driver
@{

| Global Library Prefix | **BoostINV2** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **jul 2018.**      |
| Developer             | **Katarina Perendic**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _BoostINV2_H_
#define _BoostINV2_H_

/** 
 * @macro T_BoostINV2_P
 * @brief Driver Abstract type 
 */
#define T_BoostINV2_P    const uint8_t*

/** @defgroup BoostINV2_COMPILE Compilation Config */              /** @{ */

   #define   __BoostINV2_DRV_SPI__                            /**<     @macro __BoostINV2_DRV_SPI__  @brief SPI driver selector */
//  #define   __BoostINV2_DRV_I2C__                            /**<     @macro __BoostINV2_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __BoostINV2_DRV_UART__                           /**<     @macro __BoostINV2_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup BoostINV2_VAR Variables */                           /** @{ */

/* Positive output voltage */
extern const uint16_t _BOOSTINV2_POS_VOUT_5V;
extern const uint16_t _BOOSTINV2_POS_VOUT_6V;
extern const uint16_t _BOOSTINV2_POS_VOUT_7V;
extern const uint16_t _BOOSTINV2_POS_VOUT_8V;
extern const uint16_t _BOOSTINV2_POS_VOUT_9V;
extern const uint16_t _BOOSTINV2_POS_VOUT_10V;
extern const uint16_t _BOOSTINV2_POS_VOUT_11V;
extern const uint16_t _BOOSTINV2_POS_VOUT_12V;
extern const uint16_t _BOOSTINV2_POS_VOUT_13V;
extern const uint16_t _BOOSTINV2_POS_VOUT_14V;
extern const uint16_t _BOOSTINV2_POS_VOUT_15V;

/* Negative output voltage */
extern const uint16_t _BOOSTINV2_NEG_VOUT_5V;
extern const uint16_t _BOOSTINV2_NEG_VOUT_6V;
extern const uint16_t _BOOSTINV2_NEG_VOUT_7V;
extern const uint16_t _BOOSTINV2_NEG_VOUT_8V;
extern const uint16_t _BOOSTINV2_NEG_VOUT_9V;
extern const uint16_t _BOOSTINV2_NEG_VOUT_10V;
extern const uint16_t _BOOSTINV2_NEG_VOUT_11V;
extern const uint16_t _BOOSTINV2_NEG_VOUT_12V;
extern const uint16_t _BOOSTINV2_NEG_VOUT_13V;
extern const uint16_t _BOOSTINV2_NEG_VOUT_14V;
extern const uint16_t _BOOSTINV2_NEG_VOUT_15V;



                                                                       /** @} */

#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup BoostINV2_INIT Driver Initialization */              /** @{ */

#ifdef   __BoostINV2_DRV_SPI__
void boostinv2_spiDriverInit(T_BoostINV2_P gpioObj, T_BoostINV2_P spiObj);
#endif
#ifdef   __BoostINV2_DRV_I2C__
void boostinv2_i2cDriverInit(T_BoostINV2_P gpioObj, T_BoostINV2_P i2cObj, uint8_t slave);
#endif
#ifdef   __BoostINV2_DRV_UART__
void boostinv2_uartDriverInit(T_BoostINV2_P gpioObj, T_BoostINV2_P uartObj);
#endif

// GPIO Only Drivers - remove in other cases
void boostinv2_gpioDriverInit(T_BoostINV2_P gpioObj);
                                                                       /** @} */
/** @defgroup BoostINV2_FUNC Driver Functions */                   /** @{ */

/**
 * @brief Functions for enable chip
 */
void boostinv2_enable();

/**
 * @brief Functions for set positive output voltage
 *
 * @param[in] voltage    Voltage that will be set
 *
 * Positive output voltage goes from 5V(0x7FFF) to 15V(0x7340)
 */
void boostinv2_setPositiveVoltage( uint16_t voltage );

/**
 * @brief Functions for set negative output voltage
 *
 * @param[in] voltage    Voltage that will be set
 *
 * Negative output voltage goes from -5V(0x79A2) to -15V(0x7474)
 */
void boostinv2_setNegativeVoltage( uint16_t voltage );

/**
 * @brief Functions for set PSN pin
 */
void boostinv2_setPSN(uint8_t state);


                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_Boost_INV2_STM.c
    @example Click_Boost_INV2_TIVA.c
    @example Click_Boost_INV2_CEC.c
    @example Click_Boost_INV2_KINETIS.c
    @example Click_Boost_INV2_MSP.c
    @example Click_Boost_INV2_PIC.c
    @example Click_Boost_INV2_PIC32.c
    @example Click_Boost_INV2_DSPIC.c
    @example Click_Boost_INV2_AVR.c
    @example Click_Boost_INV2_FT90x.c
    @example Click_Boost_INV2_STM.mbas
    @example Click_Boost_INV2_TIVA.mbas
    @example Click_Boost_INV2_CEC.mbas
    @example Click_Boost_INV2_KINETIS.mbas
    @example Click_Boost_INV2_MSP.mbas
    @example Click_Boost_INV2_PIC.mbas
    @example Click_Boost_INV2_PIC32.mbas
    @example Click_Boost_INV2_DSPIC.mbas
    @example Click_Boost_INV2_AVR.mbas
    @example Click_Boost_INV2_FT90x.mbas
    @example Click_Boost_INV2_STM.mpas
    @example Click_Boost_INV2_TIVA.mpas
    @example Click_Boost_INV2_CEC.mpas
    @example Click_Boost_INV2_KINETIS.mpas
    @example Click_Boost_INV2_MSP.mpas
    @example Click_Boost_INV2_PIC.mpas
    @example Click_Boost_INV2_PIC32.mpas
    @example Click_Boost_INV2_DSPIC.mpas
    @example Click_Boost_INV2_AVR.mpas
    @example Click_Boost_INV2_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __boostinv2_driver.h

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */