// Program to scale a size og line with scaling factor

// Source Code

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

int main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2;
    int sx, sy;        //scaling factor
    int x3, y3, x4, y4;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    printf("Enter the first coordinate for line:\n");
    scanf("%d %d",&x1, &y1);
    printf("Enter the final coordinate for line:\n");
    scanf("%d %d",&x2, &y2);
    printf("Enter the scaling factor:\n");
    scanf("%d %d",&sx, &sy);
    // line before scaling
    setcolor(RED);
    line(x1,y1,x2,y2);
    // perform scaling
    x3 = x1 * sx;
    y4 = x2 * sy;
    y3 = y1 * sy;
    x4 = y2 * sx;
    // line after scaling
    setcolor(__GCC_ATOMIC_CHAR_LOCK_FREE);
    line(x3,y3,x4,y4);
    getch();
}