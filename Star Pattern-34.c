/** Star Pattern-34
1
62
1073
131184
15141295
*/
int main()
{
    int i,j,a=1,b=5,s=1,n=0;
    for(i=1; i<=5; ++i)
    {
        if(i>1)
        s=s+b--;
        a=s;
        n=b;
        for(j=1; j<=5; ++j){
            if(j<=i)// this is for the pattern design
            {
                printf("%d ",a);

                a=s-n++;


            }
            else
                printf(" ");

        }
        printf("\n");
    }
}
