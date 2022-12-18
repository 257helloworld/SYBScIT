/* Write a program to perform 2D Translation */

#include<iostream.h>
#include<conio.h>
#include<graphics.h>

void main() {
	int gd = DETECT, gm, x1, y1, x2, y2, tx, ty;
	initgraph(&gd, &gm, "C:\\TC\\BGI");

	cout << "\n2D Translation";
	// Input for co-ordinates of line
	cout << "\n\nStart Co-Ordinates: ";
	cin >> x1 >> y1;
	cout << "End Co-ordinates: ";
	cin >> x2 >> y2;

	// Drawing line based on inputs
	line(x1,y1,x2,y2);

	// Input for Translation Factors
	cout << "\nTranslation factors: ";
	cin >> tx >> ty;

	// 2D Translation
	x1 += tx;
	y1 += ty;
	x2 += tx;
	y2 += ty;
	
	// Drawing dotted line after translation
	setlinestyle(DOTTED_LINE,1,1);
	line(x1,y1,x2,y2);

	getch();
	closegraph();
}
