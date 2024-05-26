// Program to draw a triangle whose border is red color and body is filled with green color with some text of choice with red choice with font size of 5, horizontal direction with font family 1.

// Source Code
#include <stdio.h>
#include <conio.h>
#include <grpahics.h>

void main(){
    int gd = DETECT, gm;
    int x1 = 100, y1 = 200, x2 = 300, y2 = 200, x3 = 200, y3 = 50;
    initgraph(&gd, &gm, "C:\\TURBOC#\\BGI");
    setcolor(4);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    setfillstyle(1, 1);
    floodfill(150, 150, 4);
    settextstyle(1, HORIZ_DIR, 5);
    outtextxy(170, 150, "Lab");
    getch();
}