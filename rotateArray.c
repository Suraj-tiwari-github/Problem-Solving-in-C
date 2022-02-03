// write a function to rotate an array
#define RIGHT 1
#define LEFT 0

main()
{
    int arr[8] = {10, 20, 30, 40, 50, 60, 70, 80}, i, j;
    printf("\n\n");
    rotate_array(arr, 8, LEFT, 3);
    for (int i = 0; i <= 7; i++)
        printf("%d  ", arr[i]);
}

rotate_array(int arr[], int size, int dir, int shift_count)
{
    int temp;
    if (dir == 1)
    {
        while (shift_count)
        {
            temp = arr[size - 1];
            for (int i = size - 1; i >= 1; i--)
                arr[i] = arr[i - 1];
            arr[0] = temp;
            shift_count--;
        }
    }
    else
    {
        while (shift_count)
        {
            temp = arr[0];
            for (int i = 0; i <= 6; i++)
                arr[i] = arr[i + 1];
            arr[size - 1] = temp;
            shift_count--;
        }
    }
}