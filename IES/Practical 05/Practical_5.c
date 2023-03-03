#include<reg51.h>

// Variables
unsigned int i, j, d, e;

void delay(int ms);

void main() {
	while(1) {
		int digitValues[] = { 0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0xFD, 0x07, 0xFF, 0x6F };
		for(d = 0; d < 10; d++) {
			P2 = digitValues[d];
			for(e = 0; e < 10; e++) {
				P3 = digitValues[e];
				delay(500);
			}
		}
	}
}

void delay(int ms){
	for(i = 0; i < ms ; i++){
	    for(j = 0; j < 100; j++);
	}
}