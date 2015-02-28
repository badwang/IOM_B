/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : Timer.h
**     Project     : IOM_B
**     Processor   : MC9S08PA4VTJ
**     Component   : FreeCntr
**     Version     : Component 01.118, Driver 01.13, CPU db: 3.00.000
**     Compiler    : CodeWarrior HCS08 C Compiler
**     Date/Time   : 2015-02-15, 21:20, # CodeGen: 0
**     Abstract    :
**         This device "FreeCntr" implements a free running counter for
**         time measurement.
**     Settings    :
**         Timer name                  : FTM0 (16-bit)
**         Compare name                : FTM00
**         Counter shared              : No
**
**         High speed mode
**             Prescaler               : divide-by-128
**             Clock                   : 64800 Hz
**           Period
**             Xtal ticks              : 21234
**             microseconds            : 655355
**             milliseconds            : 655
**             seconds                 : 1
**             seconds (real)          : 0.655354938272
**             Hz                      : 2
**           Frequency of counting (Bus clock / prescaler)
**             Hz                      : 64800
**
**         Initialization:
**              Timer                  : Enabled
**
**         Timer registers
**              Counter                : FTM0_CNT  [$0021]
**              Mode                   : FTM0_SC   [$0020]
**              Run                    : FTM0_SC   [$0020]
**              Prescaler              : FTM0_SC   [$0020]
**              Compare                : FTM0_C0V  [$0026]
**
**         User handling procedure     : not specified
**     Contents    :
**         Reset           - byte Timer_Reset(void);
**         GetCounterValue - byte Timer_GetCounterValue(Timer_TTimerValue *Value);
**
**     Copyright : 1997 - 2014 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file Timer.h
** @version 01.13
** @brief
**         This device "FreeCntr" implements a free running counter for
**         time measurement.
*/         
/*!
**  @addtogroup Timer_module Timer module documentation
**  @{
*/         

#ifndef __Timer
#define __Timer

/* MODULE Timer. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited components */
#include "Cpu.h"

/* PUBLISHED CONSTANTS */
#define Timer_COUNTER_INPUT_CLOCK_HZ  0xFD20UL /* Initial counter input clock frequency [Hz] */
#define Timer_PERIOD_VALUE            0xA5E3UL /* Initial period value in ticks of the timer */
#define Timer_PRESCALER_VALUE           0x80U /* Prescaler value of the timer in high speed mode */
#define Timer_TIMER_INPUT_CLOCK         0x007E9000UL /* Deprecated, Initial timer input clock value [Hz] */
#define Timer_UP_COUNTER                1 /* The timer counts upwards */
/* High speed mode constants */
#define Timer_COUNTER_INPUT_CLOCK_HZ_HIGH 0xFD20UL /* Counter input clock frequency in high speed mode [Hz] */
#define Timer_PERIOD_VALUE_HIGH       0xA5E3UL /* Period value in ticks of the timer in high speed mode */
#define Timer_PRESCALER_VALUE_HIGH      0x80U /* Prescaler value of the timer in high speed mode */
#define Timer_TIMER_INPUT_CLOCK_HIGH    0x007E9000UL /* Deprecated, Initial timer input clock value [Hz] */

typedef word Timer_TTimerValue;        /* Counter or compare value, width depends on timer width */

#define Timer_Reset() ( \
  FTM0_CNTH = 0x00U,                   /* Reset HW Counter */ \
  (byte)ERR_OK                         /* Return result */ \
)
/*
** ===================================================================
**     Method      :  Timer_Reset (component FreeCntr)
*/
/*!
**     @brief
**         This method resets the timer-counter (sets to zero for
**         up-counting HW or to appropriate value for down-counting HW).
**         The method is available only if the counter register can be
**         set by software and the counter is not shared.
**     @return
**                         - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
*/
/* ===================================================================*/

#define Timer_GetCounterValue(Value) ( \
  *(Value) = FTM0_CNT,                 /* Set the flag "events disabled" */ \
  (byte)ERR_OK                         /* Return result */ \
)
/*
** ===================================================================
**     Method      :  Timer_GetCounterValue (component FreeCntr)
*/
/*!
**     @brief
**         This method returns a content of the counter.
**     @param
**         Value           - Pointer to returned value.
**     @return
**                         - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
*/
/* ===================================================================*/

void Timer_Init(void);
/*
** ===================================================================
**     Method      :  Timer_Init (component FreeCntr)
**
**     Description :
**         Initializes the associated peripheral(s) and the component 
**         internal variables. The method is called automatically as a 
**         part of the application initialization code.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/


/* END Timer. */

#endif /* ifndef __Timer */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.09]
**     for the Freescale HCS08 series of microcontrollers.
**
** ###################################################################
*/
