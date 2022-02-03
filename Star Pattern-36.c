// Star pattern-36
//0
//0 1
//0 2 4
//0 3 6 9
//0 4 8 12 16
int main()
{
    int a,i,j,m;
    for(i=1; i<=5; i++){
            a=i-1; m=1;
        for(j=1; j<=5; j++){
            if(j<=i)
            {
                if(j==1)
                    printf(" 0 ");
                else
                {

                 printf(" %d ",a*m++);

                }
            }
        else
            printf("   ");
    }
    printf("\n");
}
}
