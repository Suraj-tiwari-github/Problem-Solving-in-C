//2*2*2*2*2*2
//a=2
//b=10
/* c=1 1<=10
a=4
d=4
 */
#include<stdio.h>
void main()
{
    int a,b,c,d=1;
    printf("Enter the number which is to be mutliply");
    scanf("%d",&a);
    printf("how many times you need to multiply it\n");
    scanf("%d",&b);
    for(c=1; c<=b ; c++)
    {
        d=d*a;
    }
    printf("%d",d);
}
