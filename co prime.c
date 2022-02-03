/* write a program to check co-prime numbers


 */
void main()
{
    int a,b,i,c,d;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    c=a>b?a:b;
    for(i=2; i<=c; i++)// The condition for the loop to break is i=16 b=15 Becoz entered values as example 7 15
    {
    if(a%i==0 && b%i==0)
        break;
    }
        if(i==c+1)
           printf("%d and %d are the co prime numbers\n",a,b);
        else
            printf("%d and %d are not co-prime numbers\n",a ,b);

}
