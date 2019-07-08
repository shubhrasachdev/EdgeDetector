#include<avr/io.h>
#define F_CPU 16000000UL
#include<util/delay.h>

void main()
{
	DDRA=0b11111100;  //for ir sensor
	DDRB=0b11111111;  //for motor
	while(1)
	{

	 if((PINA&0b00000011)==0b00000000)
	 {
	    PORTB=0b00001001; //forward

		}


		else if(((PINA&0b00000011)==0b00000010) || ((PINA&0b00000011)==0b00000001)||((PINA&0b00000011)==0b00000011) )
		{

		   //	PORTB=0b00000000; //backward
		//	_delay_ms(300);  
			PORTB=0b00000100;  //left
			_delay_ms(500);
			_delay_ms(500);
			}
		  
		
		    
					
	}
}
		   
		   
