/*
    *
   ***
  *****
 *******
  *****
   ***
    *

*/
void main()
{
    int i,j;
    for(i=1; i<=7; i++)
    {
        for(j=1; j<=7; j++){
            if(i>=5)// if the value is of line i=5 this code will be executed
            {
               if(j>=i-3 && j<=11-i)
                printf(" * ");
                else
                    printf("   ");
            }
            if(i<=4){//for the value of i=4 the pattern will print till line i=4 only
            if(j>=5-i && j<=3+i)
                printf(" * ");
            else
              printf("   ");}
        }

        printf("\n\n");
    }
}
