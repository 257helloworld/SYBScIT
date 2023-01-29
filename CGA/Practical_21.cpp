/* Write a program to draw smiling and sad face on screen using graphics functions */

#include<conio.h>
#include<graphics.h>
#include<iostream.h>
#include<dos.h>
void main(){
	int gd=DETECT, gm;
	initgraph(&gd,&gm, "C:\\TC\\BGI");


	int choice;
	cout << "\n\t1.Smile\t 2.Sad\n\tEnter your choice: ";
	cin >> choice;

	int x = getmaxx()/2;
	int y = getmaxy()/2;

	circle(x,y,100);
	ellipse(x-35,y-20,0,360,12,20);
	ellipse(x+35,y-20,0,360,12,20);

	setfillstyle(1,YELLOW);
	floodfill(x,y,WHITE);

	setcolor(BLACK);


	switch(choice) {
		case 1:
			int i = 240;
			int j = 300;
			while(i > 200) {
				i--;
				j++;
				ellipse(x,y+25,i,j,25,20);
				delay(50);
			}
			break;
		case 2:
			i = 70;
			j = 110;
			while(i >= 30) {
				i--;
				j++;
				ellipse(x,y+55,i,j,25,20);
				delay(50);
			}
			break;

	}
	getch();
	closegraph();
}
