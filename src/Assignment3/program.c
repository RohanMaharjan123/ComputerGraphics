// Program to display triangle

//Source Code

#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main(){
    int gd = DETECT, gm;
    int x1 = 100, y1 =  200;
    int x2 = 300 , y2 = 200;
    int x3 = 200 , y3 = 50;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    setbkcolor(0);
    setcolor(2);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    setfillstyle(1,1);
    floodfill(150, 150, 2);
    getch();
}