// write a program to transform a string to its upper case
//! using strupr which is string upper
/*main()
{
    char array[50];
    printf("\nEnter a string:\n");
    gets(array);// gets will not acts a deliveter for space
    strupr(array);
    printf("\n The upper case of a string is %s", array);
}
*/

/* 
! write a program to tranform a string into uppercase without using strupr fun
 ? ASCII smaller case a=97;
 ? ASCII upper case A=65; difference between them is of 32
*/

main()
{
    char array[50];
    int i;
    printf("\nEnter a string to convert into a upper case\n");
    gets(array);
    for (i = 0; i[array]; i++)
    {
        if (array[i] >= 'a' && array[i] <= 'z')
            array[i] = array[i] - 32;
        // ! difference between a capital and a smaller case is 32 and a=97 is for small a and A=65 is for uppercase A
    }
    printf("\nThe uppercase of string is :%s", array);
}