#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<iostream.h>
int y_max = 140.0;
int y_min = 340.0;
int x_min = 200.0;
int x_max = 450.0;

void draw_axis();

int sign(float x)
{
    if (x >= 0) {
	return 1;
    }
    else if (x < 0) {
	return 0;
    }
}
void main()
{
    int gd = DETECT, gm;
    float x1, y1, x2, y2;
    int b1, b2, b3, b4;
    int b1_a, b2_a, b3_a, b4_a, b1_b, b2_b, b3_b, b4_b;
    float x, y, m;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    cout << "Line Clipping - Cohen";
    draw_axis();

    cout << "\nEnter the coordinates of the line segment\n";
    cout << "\nx1: ";
    cin >> x1;
    cout << "\ny2: ";
    cin >> y1;
    cout << "\nx1: ";
    cin >> x2;
    cout << "\ny2: ";
    cin >> y2;

    b1_a = sign(y_max - y1);
    b2_a = sign(y1 - y_min);
    b3_a = sign(x1 - x_max);
    b4_a = sign(x_min - x1);

    b1_b = sign(y_max - y2);
    b2_b = sign(y2 - y_min);
    b3_b = sign(x2 - x_max);
    b4_b = sign(x_min - x2);

    b1 = (b1_a * b1_b);
    b2 = (b2_a * b2_b);
    b3 = (b3_a * b3_b);
    b4 = (b4_a * b4_b);

    if (b1_a == 0 && b2_a == 0 && b3_a == 0 && b4_a == 0 && b1_b == 0 && b2_b == 0 && b3_b == 0 && b4_b == 0)
    {
        cout <<"\nLine Segment is visible inside the clipping window";
        line(x1, y1, x2, y2);
    }
    else if (b1 != 0 || b2 != 0 || b3 != 0 || b4 != 0)
    {
        cout << "\n Line is not visible inside the clipping Window";
        line(x1, y1, x2, y2);
    }
    else if (b1 == 0 && b2 == 0 && b3 == 0 && b4 == 0)
    {
        cout << "Candidate for Clipping";
        line(x1, y1, x2, y2);
        getch();
        m = (y2 - y1) / (x2 - x1);
        if (b1_a == 1)
        {
            y = y_max;
            x = x1 + (y - y1) / m;
            if (x > x_min && x < x_max)
            {
                x1 = x;
                y1 = y;
            }
        }
        else if (b2_a == 1)
        {
            y = y_min;
            x = x1 + (y1 - y) / m;
            if (x > x_min && x < x_max)
            {
                x1 = x;
                y1 = y;
            }
        }
        if (b3_a == 1)
        {
            x = x_max;

            y = y1 + (x - x1) * m;
            if (y < y_min && y > y_max)
            {
                x1 = x;
                y1 = y;
            }
        }
        else if (b4_a == 1)
        {
            x = x_min;
            y = y1 + (x - x1) * m;
            if (y < y_min && y > y_max)
            {
                x1 = x;
                y1 = y;
            }
        }
        if (b1_b == 1)
        {
            y = y_max;
            x = x2 + (y2 - y) / m;
            if (x > x_min && x < x_max)
            {
                x2 = x;
                y2 = y;
            }
            else
            {
                cout << "\nLine is not visible";
            }
        }
        else if (b2_b == 1)
        {
            y = y_min;
            x = x2 + (y - y2) / m;
            if (x > x_min && x < x_max)
            {
                x2 = x;
                y2 = y;
            }
            else
            {
                cout << "\nLine is not visible";
            }
        }
        if (b3_b == 1)
        {
            x = x_max;
            y = y2 + (x - x2) * m;
            if (y_min && y > y_max)
            {
                x2 = x;
                y2 = y;
            }
            else
            {
                cout << "\nLine is not visible";
                getch();
            }
        }
        else if (b4_b == 1)
        {
            x = x_min;
            y = y2 + (x - x2) * m;
            if (y < y_min && y > y_max)
            {
                x2 = x;
                y2 = y;
            }
            else
            {
                cout << "\nLine is not visible";
		getch();
	    }
	}

	cleardevice();
        draw_axis();
        setcolor(WHITE);   
        line(x1,y1,x2,y2);
}
getch();
closegraph();
}

void draw_axis() { 
    line(0, y_max, 680, y_max);
    line(0, y_min, 680, y_min);
    line(x_max, 0, x_max, 480);
    line(x_min, 0, x_min, 480);
}