// write a function to calculate sum of squares of fist N natural Numbers.(all four ways:TNRN , TSRN, TNRS , TSRN)
// when a user enter a input 5 the Result should be 55 According to the sum of square
//1. Takes Nothing Return Nothing
int main()
{
    int N;
    findSquareN();
    _getch();
}
void findSquareN(void)
{
    int i, sum=0,n;
    printf("Enter a N natural Number for Sum of Square:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum=sum+(i*i);
    }
    printf("Sum is %d",sum);
}
