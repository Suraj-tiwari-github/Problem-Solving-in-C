/** Star Pattern-25
i=21, j=21
diamond
   *
  **
 ***
 **
 *
*/
/**void main()
{
    int i,j,k=0;
    for(i=1; i<=21; i++){

        for(j=1; j<=21; j++){

            if(i<=11){
                if(j>=12-i && j<=10+i)
                    printf(" * ");
                else
                    printf("   ");
            }
            else
            {
                if(j>=i-10 && j<=32-i)
                    printf(" * ");
                else
                    printf("   ");
            }

        }
        printf("\n");
    }
}
*/
void main()
{
    int i,j,n=11,m=0,k=1;
    for(i=1; i<=21; i++){
              i<=n?m++: m--;
              k=m-1;
        for(j=1; j<=21; j++){
            if(j>=n+1-m && j<=n-1+m){
                printf(" %d ",j<n ? k++%10 : k--%10);// % is used to make 10 to 0 .
            }
            else

                printf("   ");
        }
        printf("\n");
    }
}
