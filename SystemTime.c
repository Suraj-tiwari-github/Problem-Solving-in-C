// This is the example of systemTime printing in our program
#include<windows.h>
void main(){
  SYSTEMTIME stime;
  GetSystemTime(&stime);
  printf("%d / %d / %d",stime.wDay,stime.wMonth,stime.wYear);
  printf("The time is Now %d : %d", stime.wHour,stime.wMinute);
  getch();
}
          