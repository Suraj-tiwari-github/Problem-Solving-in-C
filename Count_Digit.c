//43//Write a program to count digits in a given number.
/*
when a user enter 276 if i divide this number with 10 276/10=27.6 but with c when a int is multiply with a int result will always be a
int
b=27/10=2.7
b=2(an int with a int is int)
b=2/10 =0.2=0(an int with an int is int)
b<=0;
so we have to use the while loop while(x is not equal to zero)
while(a!=0)
{
   a=a/10;
   count++;
}
*/
void main()
{
    int a,b,count=0;
    printf("Enter a numbers:\n");
    scanf("%d",&a);
    while(a!=0)
    {
    a=a/10;
    count++;
    }
    printf("%d digit number!!!",count);
}
