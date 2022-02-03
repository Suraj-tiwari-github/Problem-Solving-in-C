/* Program to print first n positibe numbers with two bits set

The meaning of this question is when a user will enter a number that is for example 12 so we have to print 12
numbers in the output screen the number are bit set. Bit set means that in binary the number should contain
2 1's in it. Example 3-0011(binary of 3 decimal) in that way. i need to print 12 numbers that contain bit set

 The logic for this program is
 we have to check if a number which gives reminder 1 when we % it with 2 i.e., 12%2==1 that number contain
 two 1's in it. so overall we have to check that count==2 that means the number contain set bit that's it */
/*
void main()
{
    int n, y, x=3, count;
    printf("Enter a number:\n");
    scanf("%d",&n);
    while(n)
    {
        y=x;
        count=0;
        while(y){
            if(y%2==1)
                count++;
            y=y/2;
        }
        if(count==2){
        printf("  %d",x);
       n--;
    }
    x++;
}
}
*/
// this is the second logic of same problem
/*
  2^7    2^6    2^5    2^4    2^3    2^2    2^1    2^0
  128    64      32     16       8          4        2       1
  -----------------------------------------------------------------------
   0        0         0        0        0          0        1         1= 2+1=3 This are all the 2 bit sets numbers and their are multiple of 2
   0        0         0        0        0           1        0         1=4+1=5
   0        0         0         0       0            1       1          0=4+2=6

   i=2,4,8,16 multiple of 2
   j=1 and j<i                       i     j      i+j
   i+j= anse                         2    1      3
*/
void main()
{
    int n,i,j;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=2 ; n ; i=i*2)
    {
        for(j=1; j<i; j=j*2){
        printf(" %d", i+j);
        n--;
        if(n==0)
            break;
    }
}
}















