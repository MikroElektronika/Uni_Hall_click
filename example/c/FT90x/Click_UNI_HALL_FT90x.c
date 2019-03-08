/*
Example for UNI_HALL Click

    Date          : Oct 2018.
    Author        : Nenad Filipovic

Test configuration FT90x :
    
    MCU                : FT900
    Dev. Board         : EasyFT90x v7 
    FT90x Compiler ver : v2.3.0.0

---

Description :

The application is composed of three sections :

- System Initialization - Initializes GPIO and LOG, set INT pin as input.
- Application Initialization - Initialization driver enable's - GPIO and start write log.
- Application Task - (code snippet) This is a example which demonstrates the use of UNI HALL Click board.
     Detect the north pole magnetic fields near the UNI HALL Click.
     Results are being sent to the Usart Terminal where you can track their changes.
     All data logs on usb uart when magnetic field is detected.

Additional Functions :

- UART


*/

#include "Click_UNI_HALL_types.h"
#include "Click_UNI_HALL_config.h"


uint8_t unihallState = 0;
uint8_t unihallStateOld = 0;

void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_INPUT );
    mikrobus_logInit( _MIKROBUS2, 9600 );
    Delay_100ms();
}

void applicationInit()
{
    unihall_gpioDriverInit( (T_UNIHALL_P)&_MIKROBUS1_GPIO );
    mikrobus_logWrite( "---------------------------", _LOG_LINE );
    mikrobus_logWrite( "       Initialization      ", _LOG_LINE );
    mikrobus_logWrite( "---------------------------", _LOG_LINE );
    mikrobus_logWrite( " Detecting magnetic fields ", _LOG_LINE );
    mikrobus_logWrite( "---------------------------", _LOG_LINE );

    Delay_100ms();
}

void applicationTask()
{
    unihallState = unihall_detectingMagneticFields();

    if ( unihallState == 1 && unihallStateOld == 0 )
    {
        unihallStateOld = 1;
        mikrobus_logWrite( "      ~ NOT DETECTED ~     ", _LOG_LINE );
        mikrobus_logWrite( "", _LOG_LINE );
    }

    if ( unihallState == 0 && unihallStateOld == 1 )
    {
        mikrobus_logWrite( "        ~ DETECTED ~       ", _LOG_LINE );
        mikrobus_logWrite( "", _LOG_LINE );
        unihallStateOld = 0;
    }
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