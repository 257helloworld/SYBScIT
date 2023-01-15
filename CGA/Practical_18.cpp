/* Write a program to draw a colourful scenery */
#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>

void main(){
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");

	setfillstyle(SOLID_FILL,WHITE);
	floodfill(1,1,WHITE);

	setcolor(BLACK);

	int x = getmaxx()/2;
	int y = getmaxy()/2;
	line(468,271,468,211);
	line(458,210,530,206);
	line(530,206,567,138);
	line(567,138,588,199);
	line(588,199,640,197);
	line(640,152,630,117);
	line(630,117,563,117);
	line(563,117,517,197);
	line(547,143,498,145);
	line(498,145,460,209);
	line(519,197,533,197);
	line(534,199,534,253);
	line(595,197,595,251);
	rectangle(554,210,571,252);
	setfillstyle(SOLID_FILL,BROWN);
	floodfill(555,211,BLACK);
	setfillstyle(SOLID_FILL,LIGHTRED);
	floodfill(510,185,BLACK);
	floodfill(603,156,BLACK);
	floodfill(546,163,BLACK);

	// Window
	rectangle(614,214,628,231);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(615,215,BLACK);
	rectangle(491,226,505,246);
	floodfill(492,227,BLACK);
	line(498,226,498,245);
	line(491,237,505,237);
	line(615,223,628,223);
	line(621,213,621,230);

	// Mountains
	line(0,203,73,167);
	line(125,139,150,122);
	line(93,156,107,148);
	line(149,122,270,214);
	line(242,201,279,163);
	line(279,163,423,272);


	// Bridge
	for(y = 278; y < 280; y++) {
		line(183,y,425,y);
	}

	// Ground
	line(640,248,537,254);
	ellipse(532,275,80,-210,20,20);
	line(424,416,514,265);
	line(512,271,440,272);
	ellipse(437,292,80,-210,20,20);
	line(420,281,354,374);
	ellipse(307,357,5,175,50,50);

	// Small Trees
	line(61,247,85,101);
	line(85,101,105,256);
	line(99,198,118,72);
	line(118,72,140,268);

	// Bridge
	line(429,277,410,262);
	line(410,262,195,262);
	line(195,262,176,270);

	// Left Background
	ellipse(23,246,180,360,30,3);
	ellipse(70,255,-10,120,55,8);
	line(123,252,199,416);
	line(129,270,172,268);
	ellipse(171,273,-10,90,10,5);
	line(181,273,242,378);

	line(228,352,260,353);
	line(260,353,260,378);
	line(260,378,242,377);
	setfillstyle(SOLID_FILL,DARKGRAY);
	floodfill(229,353,BLACK);

	line(370,351,340,351);
	line(340,351,340,375);
	line(340,375,358,373);
	floodfill(343,352,BLACK);

	// Sky color
	setfillstyle(SOLID_FILL,CYAN);
	floodfill(1,1,BLACK);

	setfillstyle(SOLID_FILL,LIGHTGREEN);
	floodfill(534,376,BLACK);

	setfillstyle(SOLID_FILL,GREEN);
	floodfill(78,214,BLACK);
	floodfill(120,212,BLACK);


	// Mountain Color
	setfillstyle(SOLID_FILL,DARKGRAY);
	floodfill(32,224,BLACK);
	floodfill(195,204,BLACK);
	floodfill(98,158,BLACK);


	// Bridge Fill 1
	setfillstyle(SOLID_FILL,DARKGRAY);
	floodfill(298,272,BLACK);

	// Bridge lines
	int x1 = 197, y1 = 263;
	int x2 = 197, y2 = 279;
	line(x1,y1,x2,y2);
	for(int i = 0; i < 7; i++) {
		x1 = x1 + 30;
		x2 = x2 + 30;
		line(x1,y1,x2,y2);
	}

	// Bridge fill 2
	setfillstyle(SOLID_FILL,LIGHTGRAY);
	floodfill(380,306,BLACK);

	// River
	line(242,377,198,412);
	line(200,415,74,482);
	line(352,373,430,409);
	line(423,416,548,482);
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	floodfill(326,436,BLACK);
	line(260,365,339,365);

	// Dark green ground
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(185,328,BLACK);
	floodfill(444,331,BLACK);
	getch();
	closegraph();
}
