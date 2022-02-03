// Pascal triangle is used in the binomial expansion for its coefficient
/*
     1
    1 1
   1 2 1
  1 3 3 1
 1 4 6 4 1
1 5 10 10 5 1

pascal triangle can be printed by using ncr formula where ncr=n!/ (n-r! * r!) for example look at the last line of pascalTri
1    5    10   10   5     1
5c0  5c1  5c2  5c3  5c4  5c5
*
int main()
{
    int i,j,k,one,two,user,a=4,b=4,n=0;;
    //printf("Enter the numbers of line:");
    //scanf("%d",&user);
    for(i=1; i<=4; i++)
    {
        k=1;
        //a=a-n; b=b+n;
        //++n;
        for(j=1; j<=7; j++)
        {
            if(j>=5-i && j<=3+i)
            {
                if(k)
                    printf("*");
                else
                    {printf(" ");}
            }
            else
                {printf(" ");
                }
        }
        printf("\n");
    }
}
*/
int main()
{
    int line;
    printf("Enter a number:");
    scanf("%d",&line);
   pPascal(line);
   _getch();
}
int fact (int);
int fact (int f) // factorial of a number
{
    int i=1;
    while(f>=1)
    {
      i=i*f;
      f--;
    }
    return i;
}
int combi(int, int);
int combi (int n, int r) // ncr formula
{
    return(fact(n)/(fact(n-r) * fact(r)));
}

pPascal(int);
pPascal(int user)      // To print the pascal triangle
{
    int i,j,k,r;
    for(i=1; i<=user; i++)
    {
        k=1; r=0;
        for(j=1; j<=2*user-1; j++)
        {
            if(j>=(user+1)-i && j<=(user-1)+i)
            {
                if(k)
                    {printf("%3d",combi(i-1,r));
                    r++;}
                else
                    printf(" ");
                k=1-k;
            }
            else
            {
                printf("  ");
            }

        }
        printf("\n");
    }
}

