#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "LED_int.h"

void LED_voidInit(u8 PortID, u8 PinID)
{
    DIO_voidSetPinDirection(PortID, PinID, OUTPUT);
}

void LED_voidTurnOn(u8 PortID, u8 PinID)
{
    DIO_voidSetPinValue(PortID, PinID, HIGH);
}

void LED_voidTurnOff(u8 PortID, u8 PinID)
{
    DIO_voidSetPinValue(PortID, PinID, LOW);
}

void LED_voidToggle(u8 PortID, u8 PinID)
{
    u8 Local_u8PinState = DIO_u8ReadPinValue(PortID, PinID);
    if(Local_u8PinState == HIGH)
    {
        DIO_voidSetPinValue(PortID, PinID, LOW);
    }
    else
    {
        DIO_voidSetPinValue(PortID, PinID, HIGH);
    }
}