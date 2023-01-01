/* Write a program to perform 2D Reflection */

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

void xaxis(double x1, double y1, double x2, double y2) {
	y1 = -1 * y1;
	y2 = -1 * y2;

	drawOnAxis(x1, y1, x2, y2);
}

void yaxis(double x1, double y1, double x2, double y2) {
	x1 = -1 * x1;
	x2 = -1 * x2;

	drawOnAxis(x1, y1, x2, y2);
}

void main() {
	int gd = DETECT, gm, mode, angle, x1, y1, x2, y2;
	initgraph(&gd, &gm, "C:\\TC\\BGI");

	cout << "\n2D Reflection";
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

	cout << "\n1.About x-axis\t2.About y-axis";
	cout << "\nEnter mode: ";
	cin >> mode;

	setlinestyle(DOTTED_LINE,1,1);
	switch(mode) {
		case 1:
			xaxis(x1,y1,x2,y2);
			break;
		case 2:
			yaxis(x1,y1,x2,y2);
			break;
		default:
			cout << "Invalid Mode";
	}

	getch();
	closegraph();
}
