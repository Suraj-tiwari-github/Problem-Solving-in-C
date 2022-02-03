/*
Star pattern in this way
          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1
*/
void main()
{
    int i,j,k;
    for(i=1; i<=5; i++)
    {
        k=1;
        for(j=1; j<=7; j++)
        {
            if(j>=5-i && j<=3+i)
            {
                printf(" %d ",k);
                // Here we are using the conditional operator where we have to increment the value of k
                // till the j<4 and after that we have to decrement the value to print the pattern in this way.
                j<4 ? k++ :k--;
            }
            else
                printf("   ");
        }
        printf(" \n");
    }
}
