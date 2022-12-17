/* Develop a program for DDA (Digital Differential Analyzer) Line Drawing Algorithm */

#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void dda_line(int x1, int y1, int x2, int y2) {
	int dx, dy, len;
	float xinc, yinc, x, y;

	// Step 2: Calculate dx & dy.
	dx = x2 - x1;
	dy = y2 - y1;

	// Step 3: Finding length.
	len = (abs(dx) > abs(dy)) ? abs(dx) : abs(dy);

	// Step 4: Calculating x-increment & y-increment.
	xinc = dx/len;
	yinc = dy/len;

	// Step 5: Plotting first pixel.
	x = x1;
	y = y1;
	putpixel(x,y,WHITE);

	// Step 6: Loop to plot remaining pixels
	while(x < x2) {
		x += xinc;
		y += yinc;
		putpixel(x,y,WHITE);
	}
}

void main() {
	int gd = DETECT, gm, x1, y1, x2, y2;
	initgraph(&gd, &gm, "C:\\TC\\BGI");

	cout << "\nDDA Algorithm" << endl;
	// Step 1: Take input for endpoints (x1,y1) & (x2,y2)
	cout << "\nStart Co-Ordinates: ";
	cin >> x1 >> y1;
	cout << "End Co-Ordinates: ";
	cin >> x2 >> y2;

	// Calling function: To draw a line
	dda_line(x1,y1,x2,y2);

	getch();
	closegraph();
}
