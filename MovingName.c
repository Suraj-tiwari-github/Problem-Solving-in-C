#include<windows.h>
void main()
{
    int x, y; char ch;
    printf("Enter the coordinated of x and y:");
    scanf("%d%d",&x,&y);
    gotoxy(x,y);
    printf("Suraj Tiwari:");
    while(1){
        ch=_getch();
        switch(ch){
    case 27:{
    exit(0); }
        case 'w':{
        y--; break;
        }
        case 's':{
        y++;
        break;}
        case 'a':{
        x--; break; }
        case 'd':{
        x++; break;}
        }//switch body
        system("cls");
        gotoxy(x,y);
        printf("Suraj Tiwari:");
    }// while body
}//main body
void gotoxy(int, int);  //Global declaration
void gotoxy(int x ,int y){
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
