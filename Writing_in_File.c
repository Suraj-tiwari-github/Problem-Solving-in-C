/* L-25 Writing in a file
#include<stdio.h>
void main()
{
    FILE *fp; int i;
    char s[]="Doing c with codeblocks:";
    fp=fopen("f1.txt","w");// file name and with opening modes
    if(fp==NULL)// condition for checking the file
    {
        printf("FILE not FOUND");
        exit(1);
    }
    for(i=0; i<strlen(s); i++)
        fputc(s[i], fp);// fp is pointing to the FILE and s[i] is responsible for storing the data into the file
        fclose(fp); //once fclose is perform, no further operation are accepted.
        getch();
}
*/
// Now taking the string from the user and writing into the file
#include<stdio.h>
void main()
{
    int i; char s[100]; FILE *fp;
    fp=fopen("f1.txt", "w");
     if(fp==NULL)
     {
         printf("FILE NOT FOUND:");
         exit(1);
     }
     printf("Enter a string:");
     gets(s);
     for(i=0; i<strlen(s); i++)
        fputc(s[i], fp);
        getch();// to check that the data written into the file?
        fclose(fp);//
     getch();
}

