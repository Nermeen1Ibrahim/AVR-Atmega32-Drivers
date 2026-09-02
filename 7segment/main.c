/*
 * GccApplication4.c
 *
 * Created: 9/2/2026 5:26:12 AM
 * Author : dell
 */ 
# define F_CPU 8000000UL
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_int.h"             
#include "SevenSegment_int.h"

#include <util/delay.h>

int main(void)
{
	SevSegment_voidInit();

	u8 Local_u8Counter = 0;

	while(1)
	{
		
		SevSegment_voidSetValue(Local_u8Counter);
		
		_delay_ms(1000);

		Local_u8Counter++;
		if(Local_u8Counter > 9)
		{
			Local_u8Counter = 0;
		}
	}

	return 0;
}

