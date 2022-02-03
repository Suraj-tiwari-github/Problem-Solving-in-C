/*  For every star pattern there are 4 steps to determine the logic. Don't miss a single step even if it is a easy or to easy way. Jumping
  deals to no proper logic.
  step-1 take a table form of star pattern like i and j type from i=1 to 5 and j=1 to 5
  step-2 write down i and j values of star where we can find the star and write it down in i and j
  step-3 try to write it with the i and j make it more simple
  step-4 Now use some operation of addition subtraction and try to generalize it more.*/
#include<stdio.h>
void main()
{
    int i , j, x;
    printf("Enter a number to print the star pattern according to the number:\n\n");
    //scanf("%d",&x);
    for(i=1; i<=5; i++)
    {
        for(j=6; i<=j; j--){
            if(i<j)
            printf("^");
        else
            printf(" ");
    }
    printf("\n\n");
}
}
