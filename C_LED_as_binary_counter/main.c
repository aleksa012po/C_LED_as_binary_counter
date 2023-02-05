/*
 * C_LED_as_binary_counter.c
 *
 * Created: 20.11.2022. 22:28:39
 * Author : Aleksandar Bogdanovic
 */ 

#define F_CPU 16000000UL		// Defined clock at 16MHz

#include <avr/io.h>
#include <stdint.h>
#include <util/delay.h>

void delay(int time);

int main(void) {
	DDRD = 0xFF;
	PORTD = 0;
	
	while(1) {
		PORTD ++;
		_delay_ms(100);
		}
}

void delay(int time) {
	int i, j;
	for(i = 0; i <= time; i++)
	{
		for(j = 0; j < 23; j++)
	{
		
	}
	}
}



