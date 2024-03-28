// program to draw line using DDA

// Source Code

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

int main()
{
    int gd=DETECT,gm;
    int x1 = 200 ,y1 = 500 ,x2 ,y2, xinc, yinc, dx, dy, i, steplength;
    initgraph(&gd,&gm,"C:\\TURBOC#\\BGI");
    printf("Enter the second points (x2 and y2):\n");
    scanf("%d%d",&x2,&y2);
    dx = x2 - x1;
    dy = y2 - y1;
    if(dx > dy){
        steplength = abs(dx);
    }else{
        steplength = abs(dy);
    }
    xinc = dx/steplength;
    yinc = dy/steplength;
    for(i = 0; i <= steplength; i++){
        putpixel(x1,y1,GREEN);
        x1 = x1 + xinc;
        y1 = y1 + yinc;
    }
    getch();
}