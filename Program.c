#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void drawCircle(int x1, int y1,int r){
     int angle=0,x,y;
     int xc=x1/2,yc=y1/2;
     while(angle<360){
         x=cos(angle)*r;
         y=sin(angle)*r;
         if(x>0){
            x=xc+x;
         }
         else{
            x=xc+x;
         }
         if(y>0){
            y=yc+y;
         }
         else{
            y=yc+y;
         }
         putpixel(x,y,15);
         angle++;
     }
}
void main(){
     int gd=DETECT,gm;
     int x,y;
     clrscr();
     initgraph(&gd,&gm,"C:\\TC\\BGI");
     drawCircle(500,400,150);
     getch();
     closegraph();
}
