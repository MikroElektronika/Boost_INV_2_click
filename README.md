![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# Boost_INV2 Click

- **CIC Prefix**  : BoostINV2
- **Author**      : Katarina Perendic
- **Verison**     : 1.0.0
- **Date**        : jul 2018.

---

### Software Support

We provide a library for the Boost_INV2 Click on our [LibStock](https://libstock.mikroe.com/projects/view/2497/boost-inv-2-click) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

The library initializes and defines SPI drivers along with the driver that gives an option to set desired positive and negative output voltages.

Key functions :

- ``` void boostinv2_enable() ``` - Functions for enable chip
- ``` void boostinv2_setPositiveVoltage( uint16_t voltage ) ``` - Functions for set positive output voltage
- ``` void boostinv2_setNegativeVoltage( uint16_t voltage ) ``` - Functions for set negative output voltage

**Examples Description**

The application is composed of three sections :

- System Initialization - Initializes I2C module and sets RST,AN,CS and PWM pin as OUTPUT
- Application Initialization - Initializes Driver init and enable chip
- Application Task - (code snippet) - Changes the positive and negative output voltage.
                                      Positive output voltage goes from 5V to 15V with
                                      Negative output voltage goes from -5V to -15V

```.c
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
```

The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/2497/boost-inv-2-click) page.

Other mikroE Libraries used in the example:

- SPI

**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
### Architectures Supported

#### mikroC

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

#### mikroBasic

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

#### mikroPascal

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

---
---
