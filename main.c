/*
 * main.c
 *
 *  Created on: Aug 23, 2019
 *      Author: Mariam
 */
#include"std_types.h"
#include"Bit_calc.h"
//#include<util/delay.h>
#include"DIO_interface.h"
#include"DIO_regs.h"

void main (void)
{u8 Local_u8Iteration;
u8 Local_7SegArr[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
/*Set port as output*/
		DIO_vidSetPortDirection(PORTB,OUTPUT);
	while(1)
	{for(Local_u8Iteration=0;Local_u8Iteration<10;Local_u8Iteration++)
		{DIO_vidSetPortValue(PORTB,Local_7SegArr[Local_u8Iteration]);
		//_delay_ms(1000);
            for(int i=0; i<50000; i++);
            for(int i=0; i<50000; i++);
	}
	}
}
