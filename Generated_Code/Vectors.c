/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : Vectors.c
**     Project     : IOM_B
**     Processor   : MC9S08PA4VTJ
**     Version     : Component 01.105, Driver 01.40, CPU db: 3.00.000
**     Compiler    : CodeWarrior HCS08 C Compiler
**     Date/Time   : 2015-05-02, 22:13, # CodeGen: 3
**     Abstract    :
**         This component "MC9S08PA4_20" contains initialization 
**         of the CPU and provides basic methods and events for 
**         CPU core settings.
**     Settings    :
**
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
** @file Vectors.c                                                  
** @version 01.40
** @brief
**         This component "MC9S08PA4_20" contains initialization 
**         of the CPU and provides basic methods and events for 
**         CPU core settings.
*/         
/*!
**  @addtogroup Vectors_module Vectors module documentation
**  @{
*/         


#include "Cpu.h"
#include "AS1.h"
#include "Din.h"
#include "Din2.h"
#include "Timer.h"
#include "WDog.h"

/*lint -save  -e950 Disable MISRA rule (1.1) checking. */
static void (* near const _vect[])(void) @0xFFB0 = { /* Interrupt vector table */
/*lint -restore Enable MISRA rule (1.1) checking. */
         Cpu_Interrupt,                /* Int.no. 39 Vnvm (at FFB0)                  Unassigned */
         Cpu_Interrupt,                /* Int.no. 38 VReserved38 (at FFB2)           Unassigned */
         Cpu_Interrupt,                /* Int.no. 37 Vkbi0 (at FFB4)                 Unassigned */
         Cpu_Interrupt,                /* Int.no. 36 VReserved36 (at FFB6)           Unassigned */
         Cpu_Interrupt,                /* Int.no. 35 Vrtc (at FFB8)                  Unassigned */
         Cpu_Interrupt,                /* Int.no. 34 VReserved34 (at FFBA)           Unassigned */
         Cpu_Interrupt,                /* Int.no. 33 VReserved33 (at FFBC)           Unassigned */
         Cpu_Interrupt,                /* Int.no. 32 VReserved32 (at FFBE)           Unassigned */
         Cpu_Interrupt,                /* Int.no. 31 VReserved31 (at FFC0)           Unassigned */
         Cpu_Interrupt,                /* Int.no. 30 VReserved30 (at FFC2)           Unassigned */
         Cpu_Interrupt,                /* Int.no. 29 VReserved29 (at FFC4)           Unassigned */
         Cpu_Interrupt,                /* Int.no. 28 VReserved28 (at FFC6)           Unassigned */
         Cpu_Interrupt,                /* Int.no. 27 VReserved27 (at FFC8)           Unassigned */
         Cpu_Interrupt,                /* Int.no. 26 VReserved26 (at FFCA)           Unassigned */
         AS1_InterruptTx,              /* Int.no. 25 Vsci0tx (at FFCC)               Used */
         AS1_InterruptRx,              /* Int.no. 24 Vsci0rx (at FFCE)               Used */
         AS1_InterruptError,           /* Int.no. 23 Vsci0err (at FFD0)              Used */
         Cpu_Interrupt,                /* Int.no. 22 Vadc (at FFD2)                  Unassigned */
         Cpu_Interrupt,                /* Int.no. 21 Vacmp (at FFD4)                 Unassigned */
         Cpu_Interrupt,                /* Int.no. 20 VReserved20 (at FFD6)           Unassigned */
         Cpu_Interrupt,                /* Int.no. 19 VReserved19 (at FFD8)           Unassigned */
         Cpu_Interrupt,                /* Int.no. 18 Vftm0ovf (at FFDA)              Unassigned */
         Cpu_Interrupt,                /* Int.no. 17 Vftm0ch1 (at FFDC)              Unassigned */
         Cpu_Interrupt,                /* Int.no. 16 Vftm0ch0 (at FFDE)              Unassigned */
         Cpu_Interrupt,                /* Int.no. 15 Vftm1ovf (at FFE0)              Unassigned */
         Cpu_Interrupt,                /* Int.no. 14 Vftm1ch1 (at FFE2)              Unassigned */
         Cpu_Interrupt,                /* Int.no. 13 Vftm1ch0 (at FFE4)              Unassigned */
         Cpu_Interrupt,                /* Int.no. 12 VReserved12 (at FFE6)           Unassigned */
         Cpu_Interrupt,                /* Int.no. 11 VReserved11 (at FFE8)           Unassigned */
         Cpu_Interrupt,                /* Int.no. 10 VReserved10 (at FFEA)           Unassigned */
         Cpu_Interrupt,                /* Int.no.  9 VReserved9 (at FFEC)            Unassigned */
         Cpu_Interrupt,                /* Int.no.  8 VReserved8 (at FFEE)            Unassigned */
         Cpu_Interrupt,                /* Int.no.  7 VReserved7 (at FFF0)            Unassigned */
         Cpu_Interrupt,                /* Int.no.  6 VReserved6 (at FFF2)            Unassigned */
         Cpu_Interrupt,                /* Int.no.  5 VReserved5 (at FFF4)            Unassigned */
         Cpu_Interrupt,                /* Int.no.  4 Vclk (at FFF6)                  Unassigned */
         Cpu_Interrupt,                /* Int.no.  3 Vlvw (at FFF8)                  Unassigned */
         Cpu_Interrupt,                /* Int.no.  2 Virq_wdog (at FFFA)             Unassigned */
         Cpu_Interrupt,                /* Int.no.  1 Vswi (at FFFC)                  Unassigned */
         _EntryPoint                   /* Int.no.  0 Vreset (at FFFE)                Reset vector */
};
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

