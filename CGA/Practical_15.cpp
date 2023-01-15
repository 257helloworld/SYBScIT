/* Write a program to draw Indian National Flag. */

#include<graphics.h>
#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
#include<math.h>
void main() {
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");

	floodfill(0,0,WHITE);

	setcolor(BLACK);
	// Orange
	rectangle(228,140,396,105);
	setfillstyle(SOLID_FILL,LIGHTRED);
	floodfill(280,118,BLACK);

	// White
	rectangle(228,174,396,140);

	// Green
	rectangle(228,209,396,174);
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(308,191,BLACK);

	// Pole
	line(218,101,218,374);
	line(228,101,228,374);
	ellipse(223,101,0,-180,5,5);
	ellipse(223,370,-250,70,15,6);
	setfillstyle(SOLID_FILL,DARKGRAY);
	floodfill(210,369,BLACK);
	floodfill(233,369,BLACK);

	setfillstyle(SOLID_FILL,LIGHTGRAY);
	floodfill(223,303,BLACK);

	// Background
	ellipse(112,375,58,160,200,50);
	ellipse(110,375,40,54,200,50);
	ellipse(390,293,223,300,200,65);
	ellipse(570,361,0,150,100,20);
	ellipse(465,345,0,167,220,30);

	line(76,370,96,369);
	line(90,377,103,377);

	line(440,399,482,390);
	line(460,403,497,397);

	line(397,335,407,334);

	// Ashok Chakra
	float pi = 3.14;
	setcolor(BLUE);
	int x = 311;
	int y = 157;
	int r = 14;
	circle(x,y,r);
	for(int i = 0; i <= 360; i = i + 15) {
		int a = r * cos(i * pi / 180);
		int b = r * sin(i * pi / 180);
		line(x, y, x+a, y-b);
	}

	// Background color
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(1,1,BLACK);

	// Earth
	setcolor(WHITE);
	circle(111,102,30);
	line(81,104,90,102);
	line(90,102,93,106);
	line(93,106,98,101);
	line(98,101,103,101);
	line(103,101,108,113);
	line(108,113,114,101);
	line(114,101,120,104);
	line(120,104,123,101);
	line(123,101,124,100);
	line(124,100,127,99);
	line(127,99,126,95);
	line(126,95,128,95);
	line(128,95,141,100);
	
	// Earch Colors
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(111,90,WHITE);
	setfillstyle(SOLID_FILL,BLUE);
	floodfill(115,117,WHITE);

	setcolor(BLACK);
	ellipse(103,419,0,360,40,10);
	ellipse(332,414,0,360,25,6);
	ellipse(492,440,0,360,25,4);
	ellipse(563,390,0,360,10,2);

	// Moon Colors
	setfillstyle(SOLID_FILL,LIGHTGRAY);
	floodfill(639,459,BLACK);
	setfillstyle(SOLID_FILL,DARKGRAY);
	floodfill(104,419,BLACK);
	floodfill(331,414,BLACK);
	floodfill(492,439,BLACK);
	floodfill(564,390,BLACK);
	floodfill(464,337,BLACK);

	getch();
	closegraph();
}
