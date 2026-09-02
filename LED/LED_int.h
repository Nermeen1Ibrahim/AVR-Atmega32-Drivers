#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_

void LED_voidInit(u8 PortID, u8 PinID);
void LED_voidTurnOn(u8 PortID, u8 PinID);
void LED_voidTurnOff(u8 PortID, u8 PinID);
void LED_voidToggle(u8 PortID, u8 PinID);

#endif
