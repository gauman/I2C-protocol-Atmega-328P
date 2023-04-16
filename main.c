/*
 * main.c
 *
 * Created: 3/17/2023 10:23:57 AM
 *  Author: 91988
 */ 

#include <xc.h>
#define F_CPU 16000000UL 
#include <util/delay.h>
#include "I2C_HEADER.h"





int main(void)
{


	I2C_init();
	

	
	
    while(1){
   
		
			TWI_start();
			
			TWI_write_address(0x20);// LSB is used as the R/W select bit, so address is 0x10 hex.
			
			TWI_write_data(0xff);
			
			TWI_stop();
			
		    _delay_ms(1000);
       
    }
}
