// ! write a program to count words in a sentence.
/*
int main()
{
    // ! this was my logic and let's solve this with mysirg
    char str1[10], str2[10], str3[10];
    printf("\nEnter a string to find it's a palindrome?:\n");
    gets(str1);
    strcpy(str2, str1); // str2 contain str1 data.
    strcpy(str3, str1);
    strrev(str3);
    if (strcmp(str1, str2) == 0)
        if (strcmp(str1, str3) == 0)
            printf("\nEnter string is a palindrome");
        else
        {
            printf("\nEnter string is not a palindrome");
        }
}
*/
int main()
{
    char s[10];
    int length, i;
    printf("\nEnter a string:\n");
    gets(s);

    // First need to find the length of a string

    length = strlen(s);
    for (i = 0; i < length / 2; i++)
    {
        if (s[i] != s[length - 1 - i])
        {
            printf("\nNot a palindrome:\n");
            break;
        }
    }

    if (i == length / 2)
        printf("\nIt is a palindrome:");   
}