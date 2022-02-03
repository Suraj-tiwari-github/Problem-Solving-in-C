#include<stdlib.h>
#include<stdio.h>

void swap(void);
void onlyinteger(void);
void printPercent(void);
void add(void);
void odd_even_noModulus_noBitwise(void);
void odd_even_noModulus(void);

void main()
{
    int a,b,choice;
    while(1)
    {
    printf("\n1. Exit Program:\n");
    printf("2. print percent %\n");
    printf("3. Addition of two numbers:\n");
    printf("4. only integers:\n");
    printf("5. Swapping of two numbers:\n");
    printf("6. Program for Odd_even without using modulus operator:\n7. Program for Odd-Even without using the bitwise operaotor nor the modulus operator:\n");
    printf("\nEnter your number as a choice to run a program. \nExample enter number 1 is for addition\nnumber 2. To print percent=");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: exit(0);
        case 2: printPercent(); break;
        case 3: add(); break;
        case 4: onlyinteger(); break;
        case 5: swap(); break;
        case 6: odd_even_noModulus(); break;
        case 7:  odd_even_noModulus_noBitwise(); break;
        default: printf("\nInvalid choice:\n"); break;
    }
   }
}
odd_even_noModulus_noBitwise()
{
    int a;
    printf("\nProgram for the odd_Even without modulus and without BITWISE operator \n\nEnter a number:");
    scanf("%d",&a);
    if(a/2*2==a)// this is a standard mathematical where a number integer 5/2 is 2 not 2.5 in c. when an integer is divided with an integer result will always be an integer.
        printf("\n\n%d is a EVEN number:\n",a);
    else
        printf("\n\n%d is a ODD number:\n",a);
}
odd_even_noModulus()
{
    int a;
    printf("\nRunning the odd_even program without using a modulus operator:!!!\n");
    printf("Enter a number:");
    scanf("%d",&a);
    if(a&1)// performing the and operation on it. every binary which is odd ends with a digit 1 in its binary.Taking the advantage of AND operation 1 and 1 is true which is odd
    {
        printf("\n\n%d is a odd number\n",a);
    }
    else
        printf("\n\n%d is a even number\n",a);
    printf("\nEnter number 1 to exit the program:");
}

void swap(void)
{
    int a,b;
    printf("\nEnter two numbres to swap:");
    scanf("%d%d",&a,&b);
    a=a+b;// a=1 and b=2 1+2=3=a
    b=a-b;// 3-2=1 =b
    a=a-b;//3-1=2=a
    printf("A=%d B=%d\n",a,b);
}
void onlyinteger(void)
{
    int a,num=0;
    printf("\nRunning the program which takes only integers as input:\n\nEnter anything:");
    do{
        a=_getch();
        if(a>=48 && a<=57)
        {
            printf("%c",a);
            num=num*10+(a-48);
        }
        if(a==13)
            break;
    } while(1);
    printf("\n%d is a number\n",num);
    printf("\nEnter 1 to exit the program");
}

void add(void )
{
    int a,b;
     printf("Enter two numbers for addition:\n");
    scanf("%d %d",&a,&b);
    printf("\nThe addition of %d and %d is %d\n",a,b,a+b);
}

void printPercent(void)
{
    printf("\n%%d\n");
}

