/*Write a program to  to reverse a string using strrev() function */
/*int main()
{
    char array[20];
    printf("\nEnter a string to reverse it:\n");
    gets(array);
    strrev(array);
    printf("\nThe reverse string is %s", array);
}
*/

// !Write a c program to reverse a string without using strrev() function
// ! this was my logic. Need to improve it. below is sirg code and logic
/*int main()
{
    char charArray[] = {"computer  "};
    int length = 0;
    int len = 0;
    while (charArray[len] != '\0')
    {
        length++;
        len++;
    }
    printf("\nThe length of the string is %d", length);
    int i = 0, j = length - 1;
    int swapLength = (length - 1) / 2;
    while (swapLength)
    {
        char temp = charArray[i];
        charArray[i] = charArray[j];
        charArray[j] = temp;
        i++;
        j--;
        swapLength--;
    }
    printf("\nThe reverse string without using a strrev() function is:\n%s", charArray);
}
*/

main()
{
    char s[50];
    int i, L;
    printf("\nEnter a string:");
    gets(s);
    printf("\nThe string is %s\n", s);
    // TO calculate the length of a string
    for (L = 0; s[L]; L++)
        ;
    //! s[L] where L is incrementing and in array their is a null character which is equal to 0 so, s[0] will however terminated

    printf("\nThe length of string is %d\n", L);
    // reverse the string
    for (i = 0; i <= L / 2; i++)
    {
        int temp = s[i];
        s[i] = s[L - 1 - i];
        s[L - 1 - i] = temp;
    }

    printf("\nThe reverse string is %s", s);
}