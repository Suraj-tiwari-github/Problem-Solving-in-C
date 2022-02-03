// program to count the no. words in  a sentence
//? consequence are we have to remove the number of spaces which are extra in a word for example  my  name  is  suraj  tiwari

//TODO 1. remove extra spaces and 2. count words
char *remove_extra_spaces(char *s);
int count_words(char *str);
int main()
{
    char str[100];
    printf("\nEnter a string:");
    gets(str);
    printf("\nString length : %d", strlen(str));
    printf("\nOrginal String: %s", str);
    strcpy(str, remove_extra_spaces(str));

    printf("\nThe string length after removing spaces : %d", strlen(str));
    printf("\nThe string is : %s", str);
    int no_of_words = count_words(str);
    printf("\nThe numbers of words in above string is %d", no_of_words);
}
int count_words(char *str)
{
    int count = 1;
    int i = 0;
    while (*(str + i))
    {
        if (*(str + i) == ' ')
            count++;
        i++;
    }
    return count;
}
char *remove_extra_spaces(char *s)
{
    char *p;
    int i = 0, j = 0; // i and j are used for indexing
    //! in strlen the length is calculate by leaving the null character but, we need null character to know the last element of a char array.

    p = malloc(strlen(s) + 1);
    while (*(s + i))
    // * this loop will count the each character till null character
    {
        //* below while loop will examine the spaces
        while (*(s + i) == ' ')
            i++; //* i will count the spaces
        while (*(s + i) != ' ' && *(s + i) != '\0')
        {
            *(p + j) = *(s + i);
            i++; //* i will point to next element of original string
            j++; //* j is for assigning the element in the p(malloc)
        }
        if (*(s + i) == '\0' && *(p + j - 1) == ' ')
            j--;
        *(p + j) = *(s + i); //* this is for single spaces in between of two words
        j++;                 //* j is incremented for the next element to store
    }
    return (p);
}