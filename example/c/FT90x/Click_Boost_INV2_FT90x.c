/*
Example for Boost_INV2 Click

    Date          : jul 2018.
    Author        : Katarina Perendic

Test configuration FT90x :
    
    MCU                : FT900
    Dev. Board         : EasyFT90x v7 
    FT90x Compiler ver : v2.2.1.0

---

Description :

The application is composed of three sections :

- System Initialization - Initializes I2C module and sets RST,AN,CS and PWM pin as OUTPUT
- Application Initialization - Initializes Driver init and enable chip
- Application Task - (code snippet) - Changes the positive and negative output voltage.
                                      Positive output voltage goes from 5V to 15V with
                                      Negative output voltage goes from -5V to -15V

*/

#include "Click_Boost_INV2_types.h"
#include "Click_Boost_INV2_config.h"

void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_PWM_PIN, _GPIO_OUTPUT );
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_AN_PIN, _GPIO_OUTPUT );
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_RST_PIN, _GPIO_OUTPUT );
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
    mikrobus_spiInit( _MIKROBUS1, &_BoostINV2_SPI_CFG[0] );
    Delay_ms( 100 );
}

void applicationInit()
{
    boostinv2_spiDriverInit( (T_BoostINV2_P)&_MIKROBUS1_GPIO, (T_BoostINV2_P)&_MIKROBUS1_SPI );
    boostinv2_enable();
}

void applicationTask()
{
     /* Positive output voltage */
     boostinv2_setPositiveVoltage( _BOOSTINV2_POS_VOUT_6V );
     Delay_ms( 3000 );
     boostinv2_setPositiveVoltage( _BOOSTINV2_POS_VOUT_8V );
     Delay_ms( 3000 );
     boostinv2_setPositiveVoltage( _BOOSTINV2_POS_VOUT_12V );
     Delay_ms( 3000 );
     boostinv2_setPositiveVoltage( _BOOSTINV2_POS_VOUT_14V );
     Delay_ms( 3000 );
     boostinv2_setPositiveVoltage( _BOOSTINV2_POS_VOUT_12V );
     Delay_ms( 3000 );
     boostinv2_setPositiveVoltage( _BOOSTINV2_POS_VOUT_8V );
     /* Negative output voltage */
     boostinv2_setNegativeVoltage( _BOOSTINV2_NEG_VOUT_5V );
     Delay_ms( 3000 );
     boostinv2_setNegativeVoltage( _BOOSTINV2_NEG_VOUT_7V );
     Delay_ms( 3000 );
     boostinv2_setNegativeVoltage( _BOOSTINV2_NEG_VOUT_13V );
     Delay_ms( 3000 );
     boostinv2_setNegativeVoltage( _BOOSTINV2_NEG_VOUT_7V );
}

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
            applicationTask();
    }
}