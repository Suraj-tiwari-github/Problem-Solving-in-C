/* fwrite()
fwrite() function is used to write content to the file in binary mode. */
//syntax of fwrite =int fwrite(void *buffer,int size, int count, FILE *root);
/* fwrite first argument is the address of array,2nd size of array use sizeof(operator),3rd number of record to be wriiten,,
4th file pointer);
 There are two types of modes one is text mode an another one is binary modes. audio file, video file, photograph are the example
 of binary mode.
 when we use fopen("File name","modeb");// b is binary mode in suffix,
 Then what is the use of opening in binary mode. suppose \n is the special character to change the line, same \n when we try to write
 in a .txt file it will change the line. but not in binary file. No effect of special character in binary mode */
#include <stdio.h>
struct book
{
    int bookid;
    char title[20];
    float price;
};
void main()
{
    FILE *fp;
    struct book b1;
    fp = fopen("myfile.dat", "wb"); // b is the binary mode
    printf("Enter a bookid, title and price:");
    scanf("%d", &b1.bookid);
    fflush(stdin); // to clear the input buffer
    gets(b1.title);
    scanf("%f", &b1.price);
    fwrite(&b1, sizeof(b1), 1, fp);
    fclose(fp);
    printf("Printed");
}
