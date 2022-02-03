//C program to input variable lenght string in c language
/* 
! here we are going to store exactly how much character we need to store a particular string suppose a string is AMIT ( 4 characters of name and a null character Total 5) so we will create a 5 character block dynamically.

! getche where e stands for echo. The difference between getch() and getche() is getch() takes a character without printing it on the screen, where getche() will print a character on the screen.

! using malloc in DMA 
*/

char *inputString()
{
    int len = 1, i;
    char *q, *p, ch;

    p = (char *)malloc(len);
    ch = getche(); //? its return the same character which we type
    //storing ch value in *p which is 1block of char and length=1;
    *p = ch;
    // we have store the single character in p which is 1 block of size now we need to create an another block which will be +1 in size of p;
    do
    {
        q = (char *)malloc(len + 1); // len=1
        // Now we need a loop to store p in q and p memory will be released
        for (i = 0; i < len; i++)
        {
            *(q + i) = *(p + i); // p data is copied in q
        }
        *(q + i) = '\0'; // i will be equal to len for a condition in for loop
        free(p);         // p memory is free now
        len++;           // len value is incremented for next block to size +1 to previous block
        p = (char *)malloc(len);

        //again copying the data of q in p and q will be set free for next len+1 block
        for (i = 0; i < len; i++)
        {
            *(p + i) = *(q + i); //q data is copied in p q will be set free now
        }
        free(q);
        // again taking a character from a user by using getche();
        ch = getche();
        // string is Hello students we have taken an input 'H\0' we need to replace the null character with e. len value is 2 indexing is starts from 0 1 2. on position 1 we need to assign e so simply -1 in length to store 'e'
        *(p + len - 1) = ch;
        // now the process continue where we need to increase the size in malloc which starts from q again we just need to loop that code.
    } while (ch != 13);
    //when user enter 13 which is carriage return or enter null will be replaced with null character so we need to store null in place of 13 in a string. we will create a new block with the len and malloc, by using q.
    q = (char *)malloc(len);
    for (i = 0; i < len; i++)
        *(q + i) = *(p + i);
    // i will keep on incrementing and reaches a value where i will be equal to len. But we need to assign null character at the last block.
    *(q + i - 1) = '\0';
    return (q);
}

int main()
{
    char *str;
    printf("\nEnter a string:");
    str = inputString();
    printf("string length: %d", strlen(str));
    printf("\nString is : %s", str);
}