/**
The star pattern-17
* * * * * * * * *
* * * *   * * * *
* * *       * * *
* *           * *
*               *
* *           * *
* * *       * * *
* * * *   * * * *
* * * * * * * * *
**/
void main()
{
    int i,j;
    for(i=1; i<=9; i++) {
        for(j=1; j<=9; j++) {
            if(i<=5)
            {
                if(j<=6-i || j>=4+i)
                    printf(" * ");
                else
                    printf("   ");
            }
            else
                if(j<=i-4 || j>=14-i)
                printf(" * ");
            else
                printf("   ");
        }
        printf("\n");
    }
}
