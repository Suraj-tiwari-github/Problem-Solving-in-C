//Star Pattern-28
//1
//3 * 2
//4 * 5 * 6
//10* 9 * 8 * 7
//11* 12 * 13 * 14 * 15

void main()
{
    int i, j,k=0;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=9; j++)
        {
            if(j<=i*2-1){
                    if(j%2)
                    {
                       if(i%2){
                        k=i+k;
                      printf("%d",k);
                      }
                      else{
                      if(i=3){
                        k=i+k;
                      k++;
                      k++;}
                      }
                    }
                    else
                        printf("*");

            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
