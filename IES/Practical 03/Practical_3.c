#include<reg51.h>

void delay(int time);
unsigned int i, j, d;

void main() {
	int motorValues[] = { 0x09, 0x0C, 0x06, 0x03 };
	for(d = 0; d < 4; d++) {
		P2 = motorValues[d];
		delay(500);
	}
}

void delay(int time) {
	for(i = 0; i < time; i++) {
		for(j = 0; j < 200; j++);
	}
}