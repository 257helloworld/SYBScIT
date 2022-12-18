/* Write a program to perform 2D Rotation */

#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void drawOnAxis(double x1, double y1, double x2, double y2) {
	// Adding center co-ordinates
	x1 += 320;
	y1 += 240;
	x2 += 320;
	y2 += 240;
	// Drawing line on center
	line(x1, y1, x2, y2);
}

void clockWise(double x1, double y1, double x2, double y2, double angle) {
	double xn1, yn1, xn2, yn2;
	double nangle = (angle * 3.14)/180;
	xn1 = (x1 * cos(nangle)) - (y1 * sin(nangle));
	yn1 = (y1 * cos(nangle)) + (x1 * sin(nangle));
	xn2 = (x2 * cos(nangle)) - (y2 * sin(nangle));
	yn2 = (y2 * cos(nangle)) + (x2 * sin(nangle));
	
	drawOnAxis(xn1, yn1, xn2, yn2);
}

void antiClockWise(double x1, double y1, double x2, double y2, double angle) {
	double xn1, yn1, xn2, yn2;
	double nangle = (angle * 3.14)/180;
	xn1 = (x1 * cos(nangle)) + (y1 * sin(nangle));
	yn1 = (y1 * cos(nangle)) - (x1 * sin(nangle));
	xn2 = (x2 * cos(nangle)) + (y2 * sin(nangle));
	yn2 = (y2 * cos(nangle)) - (x2 * sin(nangle));
	
	drawOnAxis(xn1, yn1, xn2, yn2);
}

void main() {
	int gd = DETECT, gm, mode, angle, x1, y1, x2, y2;
	initgraph(&gd, &gm, "C:\\TC\\BGI");

	cout << "\n2D Rotation";
	// Drawing X & Y axis
	line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
	line(getmaxx()/2,0,getmaxx()/2,getmaxy());
	
	// Input for co-ordinates.
	cout << "\n\nStart Co-ordinates: ";
	cin >> x1 >> y1;
	cout << "\nEnd Co-ordinates: ";
	cin >> x2 >> y2;
	
	// Drawing line based on input
	drawOnAxis(x1,y1,x2,y2);
	
	// Input for rotation angle & mode
	cout << "\nRotation Angle: ";
	cin >> angle;
	
	cout << "\n1.Clockwise\t2.Anti-Clockwise";
	cout << "\nEnter mode: ";
	cin >> mode;
	
	setlinestyle(DOTTED_LINE,1,1);
	switch(mode) {
		case 1: 
			clockWise(x1,y1,x2,y2,angle);
			break;
		case 2:
			AntiClockWise(x1,y1,x2,y2,angle);
			break;
		default: 
			cout << "Invalid Mode";
	}

	getch();
	closegraph();
}
