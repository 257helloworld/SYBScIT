#include<reg51.h>

// Variables
unsigned int i, j;
sbit greenLED = P1 ^ 0;
sbit blueLED = P3 ^ 0;

void delay(int time);
void toggleLED();

void main() {
	greenLED = 1;
	blueLED = 0;
	while(1) {
		toggleLED();
		delay(250);
	}
}

void delay(int time) {
	for(i = 0; i < time; i++) {
		for(j = 0; j < 123; j++);
	}
}

void toggleLED() {
	if(greenLED == 1) { greenLED = 0; } else { greenLED = 1; }
	if(blueLED == 1) { blueLED = 0; } else { blueLED = 1; }
}