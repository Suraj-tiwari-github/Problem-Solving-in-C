/*
    1
   232
  34543
 4567654

*/
void main()
{
    int i,j,a;
    for(i=1; i<=4; i++){
            a=i;// we are assigning the i value to a in every iteration
        for(j=1; j<=7; j++)
        {
            if(j>=5-i && j<=3+i){

                printf("%d",a);
                if(j>=4)
                   --a;
               else
               {
                   if(j<=4)
                   a++;
               }
            }
            else
                printf(" ");

        }
        printf("\n");
    }
}
