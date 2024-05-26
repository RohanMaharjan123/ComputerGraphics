//Write a program to display the text in red with font family of your choice.

//Source code

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    setcolor(RED);
    settextstyle(3,0,4);
    outtextxy(100,100,"This is red color.");
    getch();
}