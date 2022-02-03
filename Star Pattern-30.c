/**Star pattern-30
          *
        * *
      * * *
      | * *
 *    |   *
 * *  |
 * *  *
 * *
 *
 */
 void main()
 {
     int i,j,z=6,k=0;
     for(i=1; i<=9; i++)
        {
        for(j=1; j<=5; j++)
            {
                if(i<=3)
                {// part 1
                    k=0;
                    if(j>=6-i)
                    { k=1; printf("*"); }
                    if(k==0)
                        printf(" ");
                }
                else if(i<=6)
                {
                    k=0;
                    //part 2
                    if(j>=i || j<=i-4  )
                    { k=1; printf("*");}
                    if(j==3)
                    { k=1; printf("|"); }
                    if(k==0)
                        printf(" ");
                }
             else
                {
                    k=0;
                    //part 3
                    if(j<=10-i)
                    { k=1; printf("*"); }
                    if(k==1)
                        printf("");
                }
            }
        printf("\n");
        }
 }
