/* Write a program to draw a moving car on the screen. */

#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>

void main() {
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	
	int i = 0;
	while(!kbhit()) {
		cleardevice();
		// Road
		line(10,388,630,388);
		// Car
		line(82+i,378,131+i,378);
		line(158+i,378,166+i,378);
		line(166+i,378,166+i,371);
		line(166+i,371,164+i,371);
		line(164+i,371,164+i,355);
		line(164+i,355,141+i,348);
		line(141+i,348,128+i,332);
		line(128+i,332,55+i,332);
		line(55+i,332,51+i,349);
		line(51+i,349,51+i,369);
		line(51+i,369,49+i,369);
		line(49+i,369,49+i,378);
		line(49+i,378,54+i,378);

		circle(68+i,377,10);
		circle(68+i,377,5);
		ellipse(68+i,377,0,180,13,13);
	
		circle(145+i,378,10);
		circle(145+i,378,5);
		ellipse(145+i,378,0,180,13,13);
	
		line(137+i,350,126+i,338);
		line(126+i,338,114+i,338);
		line(114+i,338,114+i,350);
		line(114+i,350,137+i,350);
	
		line(109+i,350,109+i,338);
		line(109+i,338,85+i,338);
		line(85+i,338,85+i,350);
		line(85+i,350,109+i,350);
	
		line(80+i,350,80+i,338);
		line(80+i,338,58+i,338);
		line(58+i,337,55+i,350);
		line(55+i,350,80+i,350);
		i++;
		delay(10);
	}

	getch();
	closegraph();
}
