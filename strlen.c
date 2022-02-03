//Write a program to calculate length of the string using strlen() function
/*(int main()
{
    char array[50];
    printf("\n\nEnter a string\n");
    for (int i = 0; i <= '\0'; i++)// \0 is the NULL character
    {
        scanf("%s", &array[i]);
    }
    //! to calculate the length of a string using strlen() return length 
   
    int length = strlen(array); // strlen is function to calculate length(passigName)
    printf("\n%d is the length of the string", length);
} 
*/

/*
! find the length of the string by not using a strlen() function 

*/
/*
main()
{
    char ChArr[50] = {0};
    int length;
    printf("\nEnter a string to calculate the length:\n");
    scanf("%s", ChArr);
    length = findLength(ChArr);
    printf("\nThe length of the string is %d\n", length);
}
int findLength(char *txt)
{
    int count = 0, i = 0;
    while (txt[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}
*/

/*
 ! mysirg
 ? gets is a function which is act to take a string in parenthesis write the name of the array  like gets(s); that's it
*/
int main()
{
    char s[30];
    int i;
    printf("\nEnter a name:");
    gets(s);
    i = strlen(s);
    printf("%d is the length:", i);
}
