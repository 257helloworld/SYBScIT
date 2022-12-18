/* Draw the following basic shapes in the center of the screen
	1. Circle
	2. Rectangle
	3. Concentric Circle
	4. Ellipse
	5. Square
	6. Line
*/

#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void main() {
	int gd = DETECT, gm, x1, y1, x2, y2;
	initgraph(&gd, &gm, "C:\\TC\\BGI");

	// Circle
	cout << "\nCircle";
	circle(getmaxx()/2,getmaxy()/2,100);
	delay(3000);	// 3s delay
	cleardevice();	// Clears screen

	// Rectangle
	cout << "\nRectangle";
	rectangle(120,340,520,140);
	delay(3000);
	cleardevice();

	// Concentric Circle
	cout << "\nConcentric Circle";
	for(int rad = 50; rad <= 140; rad = rad + 20) {
		circle(getmaxx()/2,getmaxy()/2,rad);
	}
	delay(3000);
	cleardevice();

	// Ellipse
	cout << "\nEllipse";
	ellipse(getmaxx()/2,getmaxy()/2,0,360,150,100);
	delay(3000);
	cleardevice();

	// Square
	cout << "\nSquare";
	rectangle(170,390,470,90);
	delay(3000);
	cleardevice();

	// Line
	cout << "\nLine";
	line(50,getmaxy()/2,590,getmaxy()/2);

	getch();
	closegraph();
}
