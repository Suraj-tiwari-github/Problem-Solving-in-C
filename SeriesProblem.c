//The problem here is c1+ (1+2)+(1+2+3)+...+(1+2+3+N)

int main()
{
    int i,s=0,n,sum=0;
    printf("Enter the Nth term of the series:");
    scanf("%d",&n);
    for(i=1; i<=n; ++i)
    {
        s=s+i;
        printf("%dst(Term) is:%d\n\n",i,s);
        sum=sum+s;
    }
    printf("\n############  SUM OF ALL Nth term is ################# \n\n%d",sum);
    _getch();
}
