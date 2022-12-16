#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main() {
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	// Circle
	circle(50,100,50);
	outtextxy(30,160,"Circle");
	
	// Rectangle
	rectangle(200,60,400,150);
	outtextxy(260,160,"Rectangle");
	
	// Ellipse
	ellipse(540,100,0,360,25,50);
	outtextxy(525,160,"Ellipse");
	
	// Line
	line(50,200,540,200);
	outtextxy(280,210,"Line");
	
	// Sector
	sector(50,300,30,270,50,50);
	outtextxy(30,370,"Sector");
	
	// Pieslice
	pieslice(250,320,0,50,70);
	outtextxy(250,370,"Pieslice");
	
	// Arc
	arc(500,320,0,160,50);
	outtextxy(490,370,"Arc");
	
	getch();
	closegraph();
}
