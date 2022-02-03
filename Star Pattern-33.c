//Star Pattern-33
//ABCDEFG
//ABC EFG
//AB   FG
//A     G
int main()
{
    int i,j;
    for(i=1; i<=4;++i)
    {
        char a='A';
        for(j=1; j<=7; ++j)
        {
            if(j<=5-i || j>=3+i)
                printf("%c",a);
            else
                    printf(" ");
                    a++;
        }
        printf("\n");
    }
}
