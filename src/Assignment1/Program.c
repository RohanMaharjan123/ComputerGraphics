//Source Code

#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    setbkcolor(WHITE);
    setcolor(GREEN);
    rectangle(500,250,200,150);
    setcolor(BLUE);
    outtextxy(220, 200, "This is computer graphics using c");
    getch();
}