/* Write a program to fill a rectangle using boundary fill algorithm */
#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>

void bfill(int x, int y, int f_col, int b_col) {
	int curr = getpixel(x,y);
	if(curr != f_col && curr != b_col) {
		putpixel(x,y,f_col);
		delay(1);
		bfill(x+1, y, f_col, b_col);
		bfill(x-1, y, f_col, b_col);
		bfill(x, y+1, f_col, b_col);
		bfill(x, y-1, f_col, b_col);
		bfill(x+1, y+1, f_col, b_col);
		bfill(x+1, y-1, f_col, b_col);
		bfill(x-1, y+1, f_col, b_col);
		bfill(x-1, y-1, f_col, b_col);
	}
}

void main(){
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");

	int x = getmaxx()/2;
	int y = getmaxy()/2;

	rectangle(x-40,y-40,x+40,y+40);
	bfill(x,y,GREEN,WHITE);

	getch();
	closegraph();
}
