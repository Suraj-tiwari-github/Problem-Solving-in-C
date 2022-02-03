//Star Pattern-35
/**
   *
  * *
 * * *
* * * *
*

THIS IS DONE BY USING TWO FOR LOOP(NESTED FOR LOOP) WE HAVE TO DO THIS IN SINGLE FOR LOOP, THIS QUESTION IS ASKED IN THE
INTERVIEW TO A STUDENT

void main()
{
    int i,j,k=1;
    for(i=1; i<=5; ++i){k=1;
        for(j=1; j<=9; j++){

            if(j>=6-i && j<=4+i && k)
            {
                printf("*");
                k=0;
            }
            else
            {

                printf(" ");
                k=1;}

        }
        printf("\n");
    }

}

                             PRINTING THE PATTERN BY USING SINGLE FOR LOOP */
/**void main()
{
    int i,a,b,k,inp;
    printf("Enter the numbers of line for the star pattern:");
    scanf("%d",&inp);
    a=inp;
    b=inp+1;
    for(i=1,k=1; i<=inp*2-1; i++)
    {
        if(i>=a && i<=b)
        {
            if(k){
                printf("*");
                 }
            else
                printf(" ");
             k=1-k;
            if(i==b)
            {
              printf("\n");
              --a; ++b;
              i=0;
              k=1;
            }
        }
        else
            {
                printf(" ");
                k=1;
            }
    }
}
*

now we are doing the reverse of the current star pattern by using single loop
* * * *
 * * *
  * *
   *
*/
int main()
{
    int i, a,b,k=1,inp;
    printf("Enter a number:");
    scanf("%d",&inp);
    a=1; b=2*inp-1;
    for(i=1; i<=2*inp-1; i++)
    {
        if(i>=a && i<=b)
        {
            if(k)
                printf("*");
            else
                printf(" ");
            k=1-k;
            if(i==b)
            {
                printf("\n");
                ++a; --b;
                i=0;
            }
        }
        else
        {
            printf(" "); k=1;
    }
}
}
