#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int a=VGA,b=VGAHI;
int i,x,y,flag=0;
initgraph(&a,&b,"c://turboc3//bgi");
x=getmaxx()/2;
y=30;
while(!kbhit())
{
if(y>=getmaxx()-30||y<=30)
flag=!flag;
setcolor(RED);
setfillstyle(SOLID_FILL,RED);
circle(x,y,30);
floodfill(x,y,RED);
delay(50);
cleardevice();
if(flag)
{
y=y+5;
}
else{
y=y-5;
}
}
getch();
closegraph();
}