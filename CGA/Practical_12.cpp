/* Write a program to perform 2D Shearing */

#include<iostream.h>
#include<conio.h>
#include<graphics.h>

void main() {
	int gd = DETECT, gm, x1, y1, x2, y2, shx, shy;
	initgraph(&gd, &gm, "C:\\TC\\BGI");

	cout << "\n2D Shearing";
	// Input for co-ordinates of line
	cout << "\n\nStart Co-Ordinates: ";
	cin >> x1 >> y1;
	cout << "End Co-ordinates: ";
	cin >> x2 >> y2;

	// Drawing line based on inputs
	line(x1,y1,x2,y2);

	// Input for Shearing Factors
	cout << "\nShearing factors: ";
	cin >> shx >> shy;

	// 2D Shearing
	x1 += shx * y1;
	y1 += shy * x1;
	x2 += shx * y2;
	y2 += shy * x2;
	
	// Drawing dotted line after shearing
	setlinestyle(DOTTED_LINE,1,1);
	line(x1,y1,x2,y2);

	getch();
	closegraph();
}
