## Program to display the sentence inside Rectangle.

Name: Program to display the sentence inside Rectangle.

Date: April 18th, 2024

## Source Code

```c 
//Source Code

#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    setbkcolor(BLACK);
    setcolor(2);
    setfillable(SOLID_FILL_BLUE);
    rectangle(450, 300, 200, 150);
    floodfill(250, 160, 2);
    settextstyle(4, 0, 4);
    outtextxy(220, 150, "This is rectangle.");
    getch();
}
```

## Output

![Program to Print Hello World](./output.png)