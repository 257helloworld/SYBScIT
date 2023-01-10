/* Write a program to fill a rectangle using flood fill algorithm */
#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>

void ffill(int x, int y, int nc, int oc) {
	int curr = getpixel(x,y);
	if(curr == oc) {
		putpixel(x,y,nc);
		delay(1);
		ffill(x+1, y, nc, oc);
		ffill(x-1, y, nc, oc);
		ffill(x, y+1, nc, oc);
		ffill(x, y-1, nc, oc);
		ffill(x+1, y+1, nc, oc);
		ffill(x+1, y-1, nc, oc);
		ffill(x-1, y+1, nc, oc);
		ffill(x-1, y-1, nc, oc);
	}
}

void main(){
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");

	int x = getmaxx()/2;
	int y = getmaxy()/2;

	rectangle(x-40,y-40,x+40,y+40);
	setfillstyle(SOLID_FILL,RED);
	floodfill(x,y,WHITE);
	ffill(x,y,GREEN,RED);

	getch();
	closegraph();
}
