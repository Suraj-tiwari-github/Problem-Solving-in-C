// program to remove adjacent duplicate characters in a string
char *remove_adjacent_duplicate_character(char *str);
int main()
{
    char str[30];
    printf("\nEnter a string: ");
    gets(str);
    printf("\nAfer removing the adjacent duplicate character : \n%s", remove_adjacent_duplicate_character(str));
}

char *remove_adjacent_duplicate_character(char *str)
{
    int i = 0, j = 0;
    for (i; str[i]; i++)
    {
        if (str[i] == str[i + 1])
        {
            for (j = i; str[j]; j++)
                str[j] = str[j + 1]; // 1st term is send to 0th term
            i--;                     // to remove the triple duplicate dry run for better understanding
        }
    }
    // using the string which we receives in the parameter and return that string
    return (str);
}
