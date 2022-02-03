// fprintf() function is same as printf() function but the formatted output is written in the file, not in the output screen
// fprintf() takes file pointer in his argument
/* syntax: fprintf(fp,"\n Sum is %d and %d is %d",a,b,c);
* Write a program to write content to a file. Use fprintf() to write content to the file. */
#include<stdio.h>
main()
{
    FILE *fp;
    int a, b;
    fp=fopen("f1.txt","a");
    printf("ENter two numbers:");
    scanf("%d %d",&a, &b);
    fprintf(fp,"SUM of %d and %d is %d",a, b, a+b);
    fclose(fp);
}
