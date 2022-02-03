//Write a function to calculate sum of first N natural numbers. (all four ways: TNRN, TSRN, TNRS, TSRS)
//1. Takes Nothing Return Nothing
/*int main()
{
    int N;
    printf("Enter a natural number:");
    FindN();
     void FindN(void);// locally declared fun.
    _getch();
}
void FindN(void)
{
    int i,sum=0,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    printf("Sum of N natural numbers is %d",sum);
}
*/
//2. Takes something Return nothing

/*int main()
{
    int N;
    printf("Enter a natural number:");
    scanf("%d",&N);
    FindN(N);
     void FindN(int);// locally declared fun.
    _getch();
}
void FindN(int n)
{
    int i,sum=0;
    for(i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    printf("Sum of N natural numbers is %d",sum);
}
*/
// 3.Takes nothing Return Something
/*
int main()
{
    int N;
    N=FindN();
    int FindN(void);// locally declared fun.
    printf("The sum of N natural numbers is %d",N);
    _getch();
}
int FindN(void)
{
    int i,sum=0,n;
    printf("Enter a natural number:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    return sum;
}
*/
//4. Takes Something and Return Something
  int main()
{
    int N,sum;
    printf("Enter a natural number:");
    scanf("%d",&N);
    sum=FindN(N);
     int FindN(int);// locally declared fun.
     printf("Sum of N natural numbers is %d",sum);
    _getch();
}
int FindN(int n)
{
    int i,sum=0;
    //scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    return sum;
    //printf("Sum of N natural numbers is %d",sum);
}
