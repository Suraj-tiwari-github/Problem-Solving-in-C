//l-29,Writing from a file using fputs()
/*fputs() is a function declared in stdio.h header file */
// syntax of fputs(str,fp);
/*
*/
#include<stdio.h>
int main()
{
    char s[100];
    FILE *fp;
    fp=fopen("f1.txt","a");// opening in W(write mod) means the old content will get erase before opening
    if(fp==NULL)
    {
        printf("File is not found");
        exit(1);
    }
    printf("Enter something long:");
    gets(s);// taking the input from the keyboard and putting this into the array
    fputs(s,fp);// now putting the content from the array to the file using fputs() function
    fclose(fp);

}
