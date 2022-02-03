// Write a program to find the smallest among 10 numbers in an array
// ! note: To take values in the array we have to take +1 in size while creating
// ! and while taking input and printing should take exact for example:
// ! array is size 10 initially start from 0 to 10 is 11
// ! and while printing take 9 which is from 0 to 9 is 10.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int array[10];
    printf("\nEnter 10 numbers to find the smallest among 10");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\n");
    //printing the array(unsorted)
    fflush(stdin);
    for (int i = 0; i <= 9; i++)
    {
        printf("%d  ", array[i]);
    }
    int smallest = array[0];
    for (int i = 1; i <= 9; i++)
    {
        if (smallest > array[i])
            smallest = array[i];
    }

    printf("\n\n The smallest number in the array is\n %d", smallest);
}