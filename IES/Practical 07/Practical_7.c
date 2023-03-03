/* Simulate binary counter on LEDs */

#include<reg51.h>

// Variables
unsigned int i, j;

void delay(int ms);

void main() {
	P1 = 0x00;
	while(1) {
		P1 += 1;
		delay(500);
	}
}

void delay(int ms) {
	for(i = 0; i < ms; i++) {
		for(j = 0; j < 500; j++);
	}
}