// Program to draw a line using BSA Algorithm

// Source Code

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    int x1,y1,x2,y2;
    printf("Enter the coordinates of the first point\n");
    scanf("%d%d",&x1,&y1);
    printf("Enter the coordinates of the second point\n");
    scanf("%d%d",&x2,&y2);
    line(x1,y1,x2,y2);
    getch();
    closegraph();
    return 0;
}