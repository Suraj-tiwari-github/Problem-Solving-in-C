/* Star pattern program 6
      *
     * *
    * * *
   * * * *
  * * * * *
  In this program we have to use some other variable as well. To print the pyramid type of pattern we need k variable and any non zero
  value in the c program is true
  by using the logical AND operation we will use three (3) and operation  ___&&____&&____&&;
  */
void main(){
int i,j,k;
for(i=1; i<=5; i++)
{
    k=1;
    for(j=1; j<=9; j++)
    {
        if(j>=6-i && j<=4+i && k)// k has to be 1 in this condition. if k is zero then the if condition will result in false
        {
            printf("*");
            k=0;// when ever a value is printed in k=0 will be perform to break the condition of if() statement dry run to understand it better
        }
        else{
            printf(" ");
            k=1;
    }

}
printf("\n");
}
}
