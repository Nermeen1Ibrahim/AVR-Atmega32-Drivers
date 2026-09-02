/*
 * GccApplication3.c
 *
 * Created: 9/2/2026 4:35:23 AM
 * Author : dell
 */ 

#define F_CPU 8000000UL
#include <util/delay.h>
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "LED_int.h"

int main(void)
{
	
	DIO_voidIntinitialization();
	
	LED_voidInit(DPORTB, PIN0);

	while(1)
	{
		LED_voidToggle(DPORTB, PIN0);
		_delay_ms(1000);
	}

	return 0;
}

