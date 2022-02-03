/*
setcolor(0)-black
1-blue
2-green
3-aqua
4-red
5-purple
6-yellow
7-white
9-dark blue
10-dark green
11-dark aqua
12-orange
13-dark purple
14-dark yellow
15-dark white
only 15 color are there in the dos

*/
#include<graphics.h>
int main()
{
    int gd=0, gm;
    initgraph(&gd, &gm,"");
    setcolor(16);
    ellipse(250,240,0,360,100,200);// 1.x and 2.y in the output screen,3,4 starting and ending angle,5 6 length of ellipse
    getch();
    closegraph();
}
