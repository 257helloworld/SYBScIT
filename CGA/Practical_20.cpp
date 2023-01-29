/* Develop a simple text screen saver of your name using graphics function. */

#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>

void main() {
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");

	while(!kbhit()) {
		cleardevice();
		settextstyle(random(4),random(0),random(8));
		setcolor(random(15));

		outtextxy(random(480),random(640),"Hello World");
		delay(500);
	}

	getch();
	closegraph();
}
