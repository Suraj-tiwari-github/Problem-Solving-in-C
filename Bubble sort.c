// Bubble means a round shape like a baloon so when we make two elements together it's form shape of bubble as we can draw by using two elements a bubble shape can be drawn. Bubble means two comparison as simple as possible.

//Applying some changes to bubble sort to create a modified bubbel sort.

int main()
{
    //!taking a best case example to understand the modified bubble sort.
    int a[] = {9, 22, 34, 55, 66, 77, 88, 99};
    int i;
    bubble_sort(a, 7);
    //printing the sorted array
    for (i = 0; i <= 7; i++)
    {
        printf(" %d", a[i]);
    }
    _getch();
}

bubble_sort(int a[], int N)
{
    int round, j, flag;
    for (round = 0; round <= N - 1; round++)
    {
        //Number of rounds.
        flag = 0;                            //! for every round flag is set to  0
        for (j = 0; j <= N - 1 - round; j++) // j is for index in array.
        {
            if (a[j] > a[j + 1])
            {
                flag = 1; //? if swapping is formed
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
            if (flag == 0) //! if the data is not sorted & in every comparison swapping is performed then this if statement will never work: worst case
            {
                //! just for understanding the rounds for better understanding:
                printf("Round: %d\n", round);
            }
            return;
        }
    }
}