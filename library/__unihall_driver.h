/*
    __unihall_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __unihall_driver.h
@brief    UNI_HALL Driver
@mainpage UNI_HALL Click
@{

@image html libstock_fb_view.jpg

@}

@defgroup   UNIHALL
@brief      UNI_HALL Click Driver
@{

| Global Library Prefix | **UNIHALL** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **Oct 2018.**      |
| Developer             | **Nenad Filipovic**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _UNIHALL_H_
#define _UNIHALL_H_

/** 
 * @macro T_UNIHALL_P
 * @brief Driver Abstract type 
 */
#define T_UNIHALL_P    const uint8_t*

/** @defgroup UNIHALL_COMPILE Compilation Config */              /** @{ */

//  #define   __UNIHALL_DRV_SPI__                            /**<     @macro __UNIHALL_DRV_SPI__  @brief SPI driver selector */
//  #define   __UNIHALL_DRV_I2C__                            /**<     @macro __UNIHALL_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __UNIHALL_DRV_UART__                           /**<     @macro __UNIHALL_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup UNIHALL_VAR Variables */                           /** @{ */



                                                                       /** @} */
/** @defgroup UNIHALL_TYPES Types */                             /** @{ */



                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup UNIHALL_INIT Driver Initialization */              /** @{ */

#ifdef   __UNIHALL_DRV_SPI__
void unihall_spiDriverInit(T_UNIHALL_P gpioObj, T_UNIHALL_P spiObj);
#endif
#ifdef   __UNIHALL_DRV_I2C__
void unihall_i2cDriverInit(T_UNIHALL_P gpioObj, T_UNIHALL_P i2cObj, uint8_t slave);
#endif
#ifdef   __UNIHALL_DRV_UART__
void unihall_uartDriverInit(T_UNIHALL_P gpioObj, T_UNIHALL_P uartObj);
#endif

// GPIO Only Drivers - remove in other cases
void unihall_gpioDriverInit(T_UNIHALL_P gpioObj);
                                                                       /** @} */
/** @defgroup UNIHALL_FUNC Driver Functions */                   /** @{ */




/**
 * @brief Detecting north pole magnetic fields status function
 *
 * @return State of INT pin:
 * 0 - detected, 1 - not detected
 *
 * Function detecting north pole magnetic fields status and returns the state of the INT pin.
 * INT pin can be configured to show are data registers updated with the new values or not.
 */
uint8_t unihall_detectingMagneticFields();



                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_UNI_HALL_STM.c
    @example Click_UNI_HALL_TIVA.c
    @example Click_UNI_HALL_CEC.c
    @example Click_UNI_HALL_KINETIS.c
    @example Click_UNI_HALL_MSP.c
    @example Click_UNI_HALL_PIC.c
    @example Click_UNI_HALL_PIC32.c
    @example Click_UNI_HALL_DSPIC.c
    @example Click_UNI_HALL_AVR.c
    @example Click_UNI_HALL_FT90x.c
    @example Click_UNI_HALL_STM.mbas
    @example Click_UNI_HALL_TIVA.mbas
    @example Click_UNI_HALL_CEC.mbas
    @example Click_UNI_HALL_KINETIS.mbas
    @example Click_UNI_HALL_MSP.mbas
    @example Click_UNI_HALL_PIC.mbas
    @example Click_UNI_HALL_PIC32.mbas
    @example Click_UNI_HALL_DSPIC.mbas
    @example Click_UNI_HALL_AVR.mbas
    @example Click_UNI_HALL_FT90x.mbas
    @example Click_UNI_HALL_STM.mpas
    @example Click_UNI_HALL_TIVA.mpas
    @example Click_UNI_HALL_CEC.mpas
    @example Click_UNI_HALL_KINETIS.mpas
    @example Click_UNI_HALL_MSP.mpas
    @example Click_UNI_HALL_PIC.mpas
    @example Click_UNI_HALL_PIC32.mpas
    @example Click_UNI_HALL_DSPIC.mpas
    @example Click_UNI_HALL_AVR.mpas
    @example Click_UNI_HALL_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __unihall_driver.h

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