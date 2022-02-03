/* write a program to add two numbers */


#include<stdlib.h>
#include<stdio.h>
void printPercent(void);
void main()
{
    int a,b,choice;
    while(1)
    {
    printf("\n\n1.addition:\n");
    printf("2.print percent %\n");
    printf("3. exit program:\n");
    printf("Enter your number in order of 1 2 3 : one by one ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: add(); break;
        case 2: printPercent(); break;
        case 3: exit(0);
        default: printf("\nInvalid choice:"); break;
    }
   }
}

void add(void )
{
    int a,b;
     printf("Enter two numbers for addition:\n");
    scanf("%d %d",&a,&b);
    printf("\nThe addition of %d and %d is %d",a,b,a+b);
}

void printPercent(void)
{
    printf("\n%%d");
}

