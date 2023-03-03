#include<reg51.h>

void delay(int time);
void allOff();

// Variables
unsigned int i, j;
sbit green = P1 ^ 0;
sbit yellow = P1 ^ 1;
sbit red = P1 ^ 2;

void main() {
	while(1) {
		allOff();
		green = 1;
		delay(500);
		allOff();
		yellow = 1;
		delay(500);
		allOff();
		red = 1;
		delay(500);
	}
}

void delay(int time) {
	for(i = 0; i < time; i++) {
		for(j = 0; j < 500; j++);
	}		
}

void allOff() {
	red = 0;
	green = 0;
	yellow = 0;
}
