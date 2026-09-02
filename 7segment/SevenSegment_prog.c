#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "SevenSegment_int.h"
#include "SevenSegment_config.h"
#include "SevenSegment_private.h"

void SevSegment_voidInit(void)
{
    DIO_voidSetPortDirection(SSD_DATA_PORT, 0xFF);
}

void SevSegment_voidSetValue(u8 Num)
{
    if (Num <= 9)
    {
        #if SSD_TYPE == SSD_COMMON_CATHODE
            DIO_voidSetPortValue(SSD_DATA_PORT, SSD_u8NumbersArr[Num]);
        #elif SSD_TYPE == SSD_COMMON_ANODE
            DIO_voidSetPortValue(SSD_DATA_PORT, ~SSD_u8NumbersArr[Num]);
        #endif
    }
}
