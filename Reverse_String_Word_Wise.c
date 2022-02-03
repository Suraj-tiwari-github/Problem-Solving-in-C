//* write a program to reverse a string word wise for example: my name is saurabh shukla and reverse string in word wise is shukla saurabh is name my.

/* 
TODO: logic of reverse 
?1. create a struct with a word of size 20 character,assuming the max word would be 20 cha

?2. as we don't know what string the user will enter so we have to create a memory dyanamically. we will use calloc to create a array. By taking the reference of no.of words in string we will create a calloc array * no. of words. synatx of calloc: calloc(no.of blocks, blocks size); so we have calculate the no. of words in a string so in the calloc(no.of words*size which we have taken a struct word size is 20 character) calloc return address. calloc containing struct word so we need to create a pointer of struct word to recieves address of calloc in it.

*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
struct Word
{
    char word[20]; //*each word would be of size 20
};
int count_words(char *str);
char *reverse(struct Word *root, char *str);
char *removeExtraSpaces(char *str);

int main()
{
    char str[100];
    struct Word *root;
    printf("\nEnter a string : ");
    gets(str);
    strcpy(str, removeExtraSpaces(str));
    printf("\nThe Extra spaces removed string is : %s", str);
    int no_of_words = count_words(str);
    printf("\nThe no. of words in a string is: %d", no_of_words);
    root = (struct Word *)calloc(no_of_words, sizeof(struct Word)); // type conversion of struct word *
    strcpy(str, reverse(root, str));
    printf("\nThe reverse string is %s", str);
    getch();
}
char *reverse(struct Word *root, char *str)
{
    char temp[20], *q;
    int i = 0, j, k = 0;
    while (*(str + i))
    {          // master loop for null character
        j = 0; // for temp to store each word  again and again
        while (*(str + i) != ' ' && *(str + i) != '\0')
        {
            temp[j] = *(str + i);
            i++;
            j++;
        }
        if (*(str + i) == ' ')
            i++;
        temp[j] = '\0'; // temp[j] is assigned null character because a string must contain a null character to assign it into some other array.

        // coping the temp in calloc array.
        strcpy(root[k].word, temp);
        k++;
    }

    q = (char *)malloc(strlen(str) + 1);
    *(q + 0) = '\0'; // putting null in q will be for concatenation
    k--;             // decrementing the k which was incremented in line 44 because it will increment a value to store a next value but we have read all the word and still it incremented so, we need to reduced it to the last word.
    while (k)
    {
        strcat(q, root[k].word);
        strcat(q, " ");
        k--;
        //TODO here when the k value reaches to 0 the while loop becames false and we need to assigned the last word separtely which is 0 in the calloc array
    }
    strcat(q, root[0].word);
    return (q);
}

int count_words(char *str)
{
    int i = 0, count = 1;
    while (*(str + i))
    {
        if (*(str + i) == ' ')
            count++;
        i++;
    }
    return (count);
}
char *removeExtraSpaces(char *str)
{
    int i = 0, j = 0;
    char *p;
    p = malloc(strlen(str) + 1);
    while (*(str + i))
    { // till null is encourted
        while (*(str + i) == ' ')
            i++;
        while (*(str + i) != ' ' && *(str + i) != '\0')
        {
            *(p + j) = *(str + i);
            i++;
            j++;
        }
        if (*(str + i) == '\0' && *(p + j) == ' ') // for last space
            j--;
        *(p + j) = *(str + i); // spaces
        j++;                   // for the next character
    }
    return (p);
}