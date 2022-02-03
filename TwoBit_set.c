    /* Program to print first n positive numbers with two bits set in c language first logic
    The overall meaning of this program is to check a number specially binary number which contain two 1's in it for example 3
    decimal 3 binary is 101 which contain two 1's in it. This is the overall design of the program*/
#include<stdio.h>
void main()
{
    int n,x=3,y,count; // initially x is 3 because the numbers 1 and 2 doesn't contain two 1's in it. N is the number which is going to enter by the user
    printf("Enter a number:");
    scanf("%d",&n);
  while(n){
    y=x;
    count=0;
    while(y){
    if(y%2==1)
        count++;
   y=y/2;
  }
  if(count==2){
  printf("%d   ",x);
  n--;
  }
  x++;}
}

