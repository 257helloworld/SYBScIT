/* Generate Sine wave frequency. */

#include<reg51.h>
#include<intrins.h>

// Variables
unsigned int i;

void main() {
	int waveValues[] = { 128, 192, 238, 255, 238, 192, 128, 64, 17, 0, 17, 64 }; 
	while(1) {
		for(i = 0; i < 12; i++) {
			P1 = waveValues[i];
			_nop_();
			_nop_();
			_nop_();
			_nop_();
			_nop_();
			_nop_();
		}
	}
}