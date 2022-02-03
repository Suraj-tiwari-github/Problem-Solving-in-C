#include<graphics.h>
int main()
{
    int gd=0, gm;
    initgraph(&gd, &gm,"");
    setcolor(0);
    ellipse(250,240,0,360,100,200);// 1.x and 2.y in the output screen,3,4 starting and ending angle,5 6 length of ellipse
    getch();
    closegraph();
}
