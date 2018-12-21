_systemInit:
;Click_Boost_INV2_STM.c,30 :: 		void systemInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_Boost_INV2_STM.c,32 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_PWM_PIN, _GPIO_OUTPUT );
MOVS	R2, #0
MOVS	R1, #6
MOVS	R0, #0
BL	_mikrobus_gpioInit+0
;Click_Boost_INV2_STM.c,33 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_AN_PIN, _GPIO_OUTPUT );
MOVS	R2, #0
MOVS	R1, #0
MOVS	R0, #0
BL	_mikrobus_gpioInit+0
;Click_Boost_INV2_STM.c,34 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_RST_PIN, _GPIO_OUTPUT );
MOVS	R2, #0
MOVS	R1, #1
MOVS	R0, #0
BL	_mikrobus_gpioInit+0
;Click_Boost_INV2_STM.c,35 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
MOVS	R2, #0
MOVS	R1, #2
MOVS	R0, #0
BL	_mikrobus_gpioInit+0
;Click_Boost_INV2_STM.c,36 :: 		mikrobus_spiInit( _MIKROBUS1, &_BoostINV2_SPI_CFG[0] );
MOVW	R0, #lo_addr(__BoostINV2_SPI_CFG+0)
MOVT	R0, #hi_addr(__BoostINV2_SPI_CFG+0)
MOV	R1, R0
MOVS	R0, #0
BL	_mikrobus_spiInit+0
;Click_Boost_INV2_STM.c,37 :: 		Delay_ms( 100 );
MOVW	R7, #20351
MOVT	R7, #18
NOP
NOP
L_systemInit0:
SUBS	R7, R7, #1
BNE	L_systemInit0
NOP
NOP
NOP
;Click_Boost_INV2_STM.c,38 :: 		}
L_end_systemInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _systemInit
_applicationInit:
;Click_Boost_INV2_STM.c,40 :: 		void applicationInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_Boost_INV2_STM.c,42 :: 		boostinv2_spiDriverInit( (T_BoostINV2_P)&_MIKROBUS1_GPIO, (T_BoostINV2_P)&_MIKROBUS1_SPI );
MOVW	R1, #lo_addr(__MIKROBUS1_SPI+0)
MOVT	R1, #hi_addr(__MIKROBUS1_SPI+0)
MOVW	R0, #lo_addr(__MIKROBUS1_GPIO+0)
MOVT	R0, #hi_addr(__MIKROBUS1_GPIO+0)
BL	_boostinv2_spiDriverInit+0
;Click_Boost_INV2_STM.c,43 :: 		boostinv2_enable();
BL	_boostinv2_enable+0
;Click_Boost_INV2_STM.c,44 :: 		}
L_end_applicationInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationInit
_applicationTask:
;Click_Boost_INV2_STM.c,46 :: 		void applicationTask()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_Boost_INV2_STM.c,49 :: 		boostinv2_setPositiveVoltage( _BOOSTINV2_POS_VOUT_6V );
MOVW	R0, __BOOSTINV2_POS_VOUT_6V
BL	_boostinv2_setPositiveVoltage+0
;Click_Boost_INV2_STM.c,50 :: 		Delay_ms( 3000 );
MOVW	R7, #20735
MOVT	R7, #549
NOP
NOP
L_applicationTask2:
SUBS	R7, R7, #1
BNE	L_applicationTask2
NOP
NOP
NOP
;Click_Boost_INV2_STM.c,51 :: 		boostinv2_setPositiveVoltage( _BOOSTINV2_POS_VOUT_8V );
MOVW	R0, __BOOSTINV2_POS_VOUT_8V
BL	_boostinv2_setPositiveVoltage+0
;Click_Boost_INV2_STM.c,52 :: 		Delay_ms( 3000 );
MOVW	R7, #20735
MOVT	R7, #549
NOP
NOP
L_applicationTask4:
SUBS	R7, R7, #1
BNE	L_applicationTask4
NOP
NOP
NOP
;Click_Boost_INV2_STM.c,53 :: 		boostinv2_setPositiveVoltage( _BOOSTINV2_POS_VOUT_12V );
MOVW	R0, __BOOSTINV2_POS_VOUT_12V
BL	_boostinv2_setPositiveVoltage+0
;Click_Boost_INV2_STM.c,54 :: 		Delay_ms( 3000 );
MOVW	R7, #20735
MOVT	R7, #549
NOP
NOP
L_applicationTask6:
SUBS	R7, R7, #1
BNE	L_applicationTask6
NOP
NOP
NOP
;Click_Boost_INV2_STM.c,55 :: 		boostinv2_setPositiveVoltage( _BOOSTINV2_POS_VOUT_14V );
MOVW	R0, __BOOSTINV2_POS_VOUT_14V
BL	_boostinv2_setPositiveVoltage+0
;Click_Boost_INV2_STM.c,56 :: 		Delay_ms( 3000 );
MOVW	R7, #20735
MOVT	R7, #549
NOP
NOP
L_applicationTask8:
SUBS	R7, R7, #1
BNE	L_applicationTask8
NOP
NOP
NOP
;Click_Boost_INV2_STM.c,57 :: 		boostinv2_setPositiveVoltage( _BOOSTINV2_POS_VOUT_12V );
MOVW	R0, __BOOSTINV2_POS_VOUT_12V
BL	_boostinv2_setPositiveVoltage+0
;Click_Boost_INV2_STM.c,58 :: 		Delay_ms( 3000 );
MOVW	R7, #20735
MOVT	R7, #549
NOP
NOP
L_applicationTask10:
SUBS	R7, R7, #1
BNE	L_applicationTask10
NOP
NOP
NOP
;Click_Boost_INV2_STM.c,59 :: 		boostinv2_setPositiveVoltage( _BOOSTINV2_POS_VOUT_8V );
MOVW	R0, __BOOSTINV2_POS_VOUT_8V
BL	_boostinv2_setPositiveVoltage+0
;Click_Boost_INV2_STM.c,61 :: 		boostinv2_setNegativeVoltage( _BOOSTINV2_NEG_VOUT_5V );
MOVW	R0, __BOOSTINV2_NEG_VOUT_5V
BL	_boostinv2_setNegativeVoltage+0
;Click_Boost_INV2_STM.c,62 :: 		Delay_ms( 3000 );
MOVW	R7, #20735
MOVT	R7, #549
NOP
NOP
L_applicationTask12:
SUBS	R7, R7, #1
BNE	L_applicationTask12
NOP
NOP
NOP
;Click_Boost_INV2_STM.c,63 :: 		boostinv2_setNegativeVoltage( _BOOSTINV2_NEG_VOUT_7V );
MOVW	R0, __BOOSTINV2_NEG_VOUT_7V
BL	_boostinv2_setNegativeVoltage+0
;Click_Boost_INV2_STM.c,64 :: 		Delay_ms( 3000 );
MOVW	R7, #20735
MOVT	R7, #549
NOP
NOP
L_applicationTask14:
SUBS	R7, R7, #1
BNE	L_applicationTask14
NOP
NOP
NOP
;Click_Boost_INV2_STM.c,65 :: 		boostinv2_setNegativeVoltage( _BOOSTINV2_NEG_VOUT_13V );
MOVW	R0, __BOOSTINV2_NEG_VOUT_13V
BL	_boostinv2_setNegativeVoltage+0
;Click_Boost_INV2_STM.c,66 :: 		Delay_ms( 3000 );
MOVW	R7, #20735
MOVT	R7, #549
NOP
NOP
L_applicationTask16:
SUBS	R7, R7, #1
BNE	L_applicationTask16
NOP
NOP
NOP
;Click_Boost_INV2_STM.c,67 :: 		boostinv2_setNegativeVoltage( _BOOSTINV2_NEG_VOUT_7V );
MOVW	R0, __BOOSTINV2_NEG_VOUT_7V
BL	_boostinv2_setNegativeVoltage+0
;Click_Boost_INV2_STM.c,69 :: 		}
L_end_applicationTask:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationTask
_main:
;Click_Boost_INV2_STM.c,71 :: 		void main()
;Click_Boost_INV2_STM.c,73 :: 		systemInit();
BL	_systemInit+0
;Click_Boost_INV2_STM.c,74 :: 		applicationInit();
BL	_applicationInit+0
;Click_Boost_INV2_STM.c,76 :: 		while (1)
L_main18:
;Click_Boost_INV2_STM.c,78 :: 		applicationTask();
BL	_applicationTask+0
;Click_Boost_INV2_STM.c,79 :: 		}
IT	AL
BAL	L_main18
;Click_Boost_INV2_STM.c,80 :: 		}
L_end_main:
L__main_end_loop:
B	L__main_end_loop
; end of _main
