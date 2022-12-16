/* Draw a co-ordinate axis at the center of the screen. */

#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main() {
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	
	// X-Axis
	line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
	
	// Y-Axis
	line(getmaxx()/2,0,getmaxx()/2,getmaxy());
	
	getch();
	closegraph();
}
