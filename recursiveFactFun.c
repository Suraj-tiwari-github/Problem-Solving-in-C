/* THis is a example of recursion where we find the factorial by using recursion  */
#include<stdio.h>
int main()
{
  int i;
  printf("Enter a number for the fact:");
  scanf("%d",&i);
  int sum=fact(i); // calls
  printf("The sum is %d",sum);
  _getch();
}
int fact(int);  //Declartion
int fact(int i)
{
  int s=0;
  if(i==1)
    return i;
    else
    {
      /* code */
    s=i*(fact(i-1));
    return s;
    }
}