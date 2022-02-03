//1
//3*2
//4*5*6
//10*9*8*7
//11*12*13*14*15
void main()
{
    int i,j,k=0,flag,p;
    for(i=1; i<=5; i++){
            if(i%2)
            {
                k=k+1;
            }
            else
                { k--;
                    k=k+i;

                }
            flag=1;
            p=k;
        for(j=1; j<=9; j++)
        {
            if(j<=2*i-1)
            {
                if(flag==1)
                {

                  printf("%d",p);
                  if(i%2)
                  {p++; k++;}
                  else
                    p--;
                }
                else
                    printf("*");
              flag=1-flag;
            }
            else
            printf(" ");

    }
      printf("\n");
 }
 _getch();
}
