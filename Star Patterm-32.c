// star pattern-32
//*   *
// * *
//  *
// * *
//*   *
int main()
{
    int i,j,a=1,b=5,lin;
    printf("Enter numbers of line:");
    scanf("%d",&lin);
    for(i=1;i<=lin; i++)
    {

        for(j=1;j<=lin; j++)
        {
            if(j==i|| j==lin+1-i)
                {
                    printf("*");
                }
            else
                printf(" ");

        }
        printf("\n");
    }
}
