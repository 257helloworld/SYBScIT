/* Divide your screen into 4 regions.
Draw a circle, rectangle, ellipse, half ellipse in each region. */

#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main() {
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	
	// For 4 regions
	line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
	line(getmaxx()/2,0,getmaxx()/2,getmaxy());
	
	// Circle
	circle(160,120,60);
	outtextxy(135,200,"Circle");
	
	// Rectangle
	rectangle(380,70,610,160);
	outtextxy(460,200,"Rectangle");
	
	// Ellipse
	ellipse(160,350,0,360,30,60);
	outtextxy(135,430,"Ellipse");
	
	// Half Ellipse
	ellipse(480,350,0,180,60,30);
	outtextxy(430,430,"Half Ellipse");
	
	getch();
	closegraph();
}
