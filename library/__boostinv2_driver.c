/*
    __boostinv2_driver.c

-----------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

#include "__boostinv2_driver.h"
#include "__boostinv2_hal.c"

/* ------------------------------------------------------------------- MACROS */

/* Positive output voltage */
const uint16_t _BOOSTINV2_POS_VOUT_5V  = 0x7FFF;
const uint16_t _BOOSTINV2_POS_VOUT_6V  = 0x7B00;
const uint16_t _BOOSTINV2_POS_VOUT_7V  = 0x7A20;
const uint16_t _BOOSTINV2_POS_VOUT_8V  = 0x7950;
const uint16_t _BOOSTINV2_POS_VOUT_9V  = 0x7870;
const uint16_t _BOOSTINV2_POS_VOUT_10V = 0x7790;
const uint16_t _BOOSTINV2_POS_VOUT_11V = 0x76B0;
const uint16_t _BOOSTINV2_POS_VOUT_12V = 0x75E0;
const uint16_t _BOOSTINV2_POS_VOUT_13V = 0x7500;
const uint16_t _BOOSTINV2_POS_VOUT_14V = 0x7420;
const uint16_t _BOOSTINV2_POS_VOUT_15V = 0x7340;

/* Negative output voltage */
const uint16_t _BOOSTINV2_NEG_VOUT_5V  = 0x79A2;
const uint16_t _BOOSTINV2_NEG_VOUT_6V  = 0x7900;
const uint16_t _BOOSTINV2_NEG_VOUT_7V  = 0x786A;
const uint16_t _BOOSTINV2_NEG_VOUT_8V  = 0x77D0;
const uint16_t _BOOSTINV2_NEG_VOUT_9V  = 0x7744;
const uint16_t _BOOSTINV2_NEG_VOUT_10V = 0x76B0;
const uint16_t _BOOSTINV2_NEG_VOUT_11V = 0x7630;
const uint16_t _BOOSTINV2_NEG_VOUT_12V = 0x75B2;
const uint16_t _BOOSTINV2_NEG_VOUT_13V = 0x7530;
const uint16_t _BOOSTINV2_NEG_VOUT_14V = 0x74B0;
const uint16_t _BOOSTINV2_NEG_VOUT_15V = 0x7474;

/* ---------------------------------------------------------------- VARIABLES */

#ifdef   __BoostINV2_DRV_I2C__
static uint8_t _slaveAddress;
#endif

/* -------------------------------------------- PRIVATE FUNCTION DECLARATIONS */



/* --------------------------------------------- PRIVATE FUNCTION DEFINITIONS */



/* --------------------------------------------------------- PUBLIC FUNCTIONS */

#ifdef   __BoostINV2_DRV_SPI__

void boostinv2_spiDriverInit(T_BoostINV2_P gpioObj, T_BoostINV2_P spiObj)
{
    hal_spiMap( (T_HAL_P)spiObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
    
    hal_gpio_rstSet(1);
    hal_gpio_csSet(1);
}

#endif
#ifdef   __BoostINV2_DRV_I2C__

void boostinv2_i2cDriverInit(T_BoostINV2_P gpioObj, T_BoostINV2_P i2cObj, uint8_t slave)
{
    _slaveAddress = slave;
    hal_i2cMap( (T_HAL_P)i2cObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
}

#endif
#ifdef   __BoostINV2_DRV_UART__

void boostinv2_uartDriverInit(T_BoostINV2_P gpioObj, T_BoostINV2_P uartObj)
{
    hal_uartMap( (T_HAL_P)uartObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
}

#endif

/* ----------------------------------------------------------- IMPLEMENTATION */

void boostinv2_enable()
{
    hal_gpio_anSet(0);
    Delay_100ms();
    Delay_100ms();
    hal_gpio_anSet(1);
    Delay_100ms();
}

void boostinv2_setPositiveVoltage( uint16_t voltage )
{
    uint8_t writeReg[ 2 ];
    
    writeReg[ 0 ] = (uint8_t)((voltage >> 8) & 0x00FF);
    writeReg[ 1 ] = (uint8_t)(voltage & 0x00FF);
    
    hal_gpio_csSet(0);
    hal_spiWrite(writeReg, 2);
    hal_gpio_csSet(1);
}

void boostinv2_setNegativeVoltage( uint16_t voltage )
{
    uint8_t writeReg[ 2 ];

    writeReg[ 0 ] = (uint8_t)((voltage >> 8) & 0x00FF);
    writeReg[ 1 ] = (uint8_t)(voltage & 0x00FF);

    hal_gpio_rstSet(0);
    hal_spiWrite(writeReg, 2);
    hal_gpio_rstSet(1);
}

void boostinv2_setPSN(uint8_t state)
{
    hal_gpio_pwmSet(state);
}

/* -------------------------------------------------------------------------- */
/*
  __boostinv2_driver.c

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