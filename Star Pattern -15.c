/* Program for star pattern-15, The pattern is
         1
       1 2
     1 2 3
   1 2 3 4
 1 2 3 4 5
   1 2 3 4
     1 2 3
       1 2
         1
*/
void main()
{
    int i,j,k;
    for(i=1; i<=9; i++)
    {
        k=1;
        for(j=1; j<=5; j++)
        {
            if(i<=5)
            {
                if(j>=6-i && j<=5){
                    printf(" %d ",k);
                    k++;  }
                else
                    printf("   ");
            }
            else
            {
                if(j>=i-4 && j<=5) {
                    printf(" %d ",k);
                    k++; }
                else
                    printf("   ");
            }
        }
        printf("\n\n");
    }
}
