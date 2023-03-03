/* Generate Square wave frequency. */

#include<reg51.h>

// Variables
unsigned int i, j;

void delay(int ms);

void main() {
	P1 = 0x00;
	while(1) {
		P1 = 0xFF;
		delay(1);
		P1 = 0x00;
		delay(1);
	}
}

void delay(int ms) {
	for(i = 0; i < ms; i++) {
		for(j = 0; j < 5; j++);
	}
}