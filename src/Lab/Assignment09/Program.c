// Program to draw a line using BSA Algorithm

// Source Code

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

int main(){
    int gd = DETECT, gm;
    int x1,y1,x2,y2, p, i, dx, dy, m;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    printf("Enter the coordinates of the first point\n");
    scanf("%d%d",&x1,&y1);
    printf("Enter the coordinates of the second point\n");
    scanf("%d%d",&x2,&y2);
    dx=x2-x1;
    dy=y2-y1;
    m= dy/dx;
    if(m <= 1){
        p = 2 * dy - dx;
        for(i = 0 ; i < dx; i++){
            putpixel(x1+i,y1,WHITE);
            if(p < 0){
                x1 = x1 + 1;
                p = p + 2 * dy;
            }
            }else{
                x1 = x1 + 1;
                y1 = y1 + 1;
                p = p + 2 * dy - 2 * dx;
            }else{
                p = 2 * dx - dy;
                putpixel(x1, y1, RED);
                if(p < 0){
                    y1 = y1 + 1;
                    p = p + 2 * dx;
                }else{
                    y1 = y1 + 1;
                    x1 = x1 + 1;
                    p += (2 * dx) - (2 * dy);
                }
            }
        }
        getch();
    }
