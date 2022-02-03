// Write a program to sort an string in dictionary order we are solving this by using a recursive function as i don't know the sorting still need to learn the data structure
//! this is for only single string, we need 2d array for naming
/*int main()
{
    char s[10];
    printf("\nEnter your name:");
    gets(s);
    int L;
    for (L = 0; s[L]; L++)
        ;
    sortString(s, L);
    //printing the sorted string
    printf("\n\nThe sorted string in DIC order is:%s", s);
}

sortString(char s[], int length)
{
    if (length > 1)
    {
        int maxIndex = findMaxIndex(s, length);
        int temp = s[length - 1];
        s[length - 1] = s[maxIndex];
        s[maxIndex] = temp;
        sortString(s, length - 1);
    }
}
*


int findMaxIndex(char s[], int length)
{
    int max = s[0];
    int maxIndex = 0;
    for (int i = 1; i < length; i++)
    {
        if (max < s[i])
        {
            max = s[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}
*/
// ! taking 5 string from user
int main()
{
    char str[5][10], s[10];
    int r, i, round;
    printf("\nEnter 5 names:\n");
    for (i = 0; i <= 4; i++)
        gets(str[i]); // we pass the address in gets like 1st array,2nd array,3rd,4rd
    printf("\nEntered names are\n");
    for (i = 0; i < 5; i++)
        puts(str[i]);

    //! strcmp will return a negative value if its find in dictionary order or it will return a positive value if the strings are not in dictionary order.
    for (round = 1; round <= 4; round++)
    {

        // ! 5 strings required 4 comparison round to know the dictionary order in each round will start with 4 rounds and we swapping take place in between them has in the second round, the inner comparsion of i will grudually decreased from 4 inner rounds of swapping to 3,2,1

        for (i = 0; i <= 4 - round; i++)
        {
            r = strcmp(str[i], str[i + 1]);
            //printf("\n r is %d\n", r);
            if (r > 0)
            {
                strcpy(s, str[i]);
                strcpy(str[i], str[i + 1]);
                strcpy(str[i + 1], s);
            }
        }
    }
    printf("\nThe string in dictionary orders are:\n");
    for (i = 0; i <= 4; i++)
        puts(str[i]);
}