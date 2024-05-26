//Program to draw two rectangle horizontally in same direction with some text in center in red color and fill rectangle with blue color

// Source Code

#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    setfillstyle(SOLID_FILL, BLUE);
    setcolor(RED);
    rectangle(100, 100, 300, 200);
    floodfill(101, 101, RED);
    outtextxy(180, 150, "one");
    setfillstyle(SOLID_FILL, BLUE);
    setcolor(RED);
    fillrectangle(320, 100, 520, 200);
    floodfill(321, 101, RED);
    outtextxy(395, 150, "two");
    getch();
}