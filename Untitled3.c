#include<stdlib.h>
#include<stdio.h>
int main()
{
    char s[20];
    printf("Enter the string:\n");
    scanf("%s\n",s);
    printf("string is %s",s);
    fflush(stdin);
    return 0;
}