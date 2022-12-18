/* Write a program to perform 2D Scaling */

#include<iostream.h>
#include<conio.h>
#include<graphics.h>

void main() {
	int gd = DETECT, gm, x1, y1, x2, y2, sx, sy;
	initgraph(&gd, &gm, "C:\\TC\\BGI");

	cout << "\n2D Scaling";
	// Input for co-ordinates of line
	cout << "\n\nStart Co-Ordinates: ";
	cin >> x1 >> y1;
	cout << "End Co-ordinates: ";
	cin >> x2 >> y2;

	// Drawing line based on inputs
	line(x1,y1,x2,y2);

	// Input for Scaling Factors
	cout << "\nScaling factors: ";
	cin >> sx >> sy;

	// 2D Scaling
	x1 = sx * x1;
	y1 = sy * y1;
	x2 = sx * x2;
	y2 = sy * y2;
	
	// Drawing dotted line after scaling
	setlinestyle(DOTTED_LINE,1,1);
	line(x1,y1,x2,y2);

	getch();
	closegraph();
}
