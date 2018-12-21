#line 1 "D:/Clicks_git/B/Boost-INV_2_click/SW/example/c/ARM/STM/Click_Boost_INV2_STM.c"
#line 1 "d:/clicks_git/b/boost-inv_2_click/sw/example/c/arm/stm/click_boost_inv2_types.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"





typedef signed char int8_t;
typedef signed int int16_t;
typedef signed long int int32_t;
typedef signed long long int64_t;


typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;
typedef unsigned long long uint64_t;


typedef signed char int_least8_t;
typedef signed int int_least16_t;
typedef signed long int int_least32_t;
typedef signed long long int_least64_t;


typedef unsigned char uint_least8_t;
typedef unsigned int uint_least16_t;
typedef unsigned long int uint_least32_t;
typedef unsigned long long uint_least64_t;



typedef signed long int int_fast8_t;
typedef signed long int int_fast16_t;
typedef signed long int int_fast32_t;
typedef signed long long int_fast64_t;


typedef unsigned long int uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long long uint_fast64_t;


typedef signed long int intptr_t;
typedef unsigned long int uintptr_t;


typedef signed long long intmax_t;
typedef unsigned long long uintmax_t;
#line 1 "d:/clicks_git/b/boost-inv_2_click/sw/example/c/arm/stm/click_boost_inv2_config.h"
#line 1 "d:/clicks_git/b/boost-inv_2_click/sw/example/c/arm/stm/click_boost_inv2_types.h"
#line 4 "d:/clicks_git/b/boost-inv_2_click/sw/example/c/arm/stm/click_boost_inv2_config.h"
const uint32_t _BoostINV2_SPI_CFG[ 2 ] =
{
 _SPI_FPCLK_DIV256,
 _SPI_FIRST_CLK_EDGE_TRANSITION |
 _SPI_CLK_IDLE_LOW |
 _SPI_MASTER |
 _SPI_MSB_FIRST |
 _SPI_8_BIT |
 _SPI_SSM_ENABLE |
 _SPI_SS_DISABLE |
 _SPI_SSI_1
};
#line 1 "d:/clicks_git/b/boost-inv_2_click/sw/library/__boostinv2_driver.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"
#line 58 "d:/clicks_git/b/boost-inv_2_click/sw/library/__boostinv2_driver.h"
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
#line 94 "d:/clicks_git/b/boost-inv_2_click/sw/library/__boostinv2_driver.h"
void boostinv2_spiDriverInit( const uint8_t*  gpioObj,  const uint8_t*  spiObj);
#line 104 "d:/clicks_git/b/boost-inv_2_click/sw/library/__boostinv2_driver.h"
void boostinv2_gpioDriverInit( const uint8_t*  gpioObj);



void boostinv2_enable();

void boostinv2_setPositiveVoltage( uint16_t voltage );

void boostinv2_setNegativeVoltage( uint16_t voltage );

void boostinv2_setPSN(uint8_t state);
#line 30 "D:/Clicks_git/B/Boost-INV_2_click/SW/example/c/ARM/STM/Click_Boost_INV2_STM.c"
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
 boostinv2_spiDriverInit( ( const uint8_t* )&_MIKROBUS1_GPIO, ( const uint8_t* )&_MIKROBUS1_SPI );
 boostinv2_enable();
}

void applicationTask()
{

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
