/* Generate Triangular wave frequency. */

#include<reg51.h>

void main() {
	P2 = 0x00;
	while(1) {
		while(P2 < 0xFF) {
			P2 += 5;
		}
		while(P2 > 0x00) {
			P2 -= 5;
		}
	}
}
