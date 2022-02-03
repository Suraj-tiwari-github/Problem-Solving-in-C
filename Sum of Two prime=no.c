//Write a program to express a given number as a sum of two prime numbers. Print all possible solutions.
#include<stdio.h>
#include<string.h>
int main()
{
 int Uprime;
 printf("Enter a number to express it in a two prime numbers:");
 scanf("%d",&Uprime);
 findPrime(Uprime);
 _getch();
}
void findPrime(int );
void findPrime(int p)
{
    int a[p],b[p],i,j,n=0;
    for(i=1; i<=p; i++){
        for(j=2; j<=i-1; j++)
        {
            if(i%j==0)
                break;
        }
            if(i==j)
            {
                a[n]=i;
                b[n]=i;
                n++;
                printf("%d ",i);
            }
        }
 printf("\n\n\n");
     for(i=0; i<=p; i++)
     {
         for(j=0; j<=p; j++)
         {
             if(a[i]+b[j]==p)
             {
                 printf("\n%d + %d =%d",a[i], b[j], a[i]+b[j]);
             }
         }
     }
}

