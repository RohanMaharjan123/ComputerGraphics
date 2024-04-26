## Program to display text message "Hello all" inside circle by using point type1 , vertical direction woth font size 2 on coordinate(100, 100) pixel.

Name: Program to display text message "Hello all" inside circle by using point type1 , vertical direction woth font size 2 on coordinate(100, 100) pixel.

Date: April 26th, 2024

## Source Code

```c 
//Program to display text message "Hello all" inside circle by using point type1 , vertical direction woth font size 2 on coordinate(100, 100) pixel.

// Source Code

#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
    int gd = DETECT, gm;
    int xc  = 100;
    int yc  = 100;
    int r   = 50;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    circle(xc, yc, r);
    setcolor(WHITE);
    settextstyle(1, VERT_DIR, 2);
    outtextxy(xc-20, yc-30, "Hello all");
    getch();
}
```

## Output

![Program to Print Hello World](./output.png)