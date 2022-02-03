
void binary_search(int arr[], int size, int item);
void binary_search(int arr[], int size, int item)
{
    int l = 0, u = size - 1; //size-1 is because index starts from 0 to the last element suppose 11, 0-11 is 12 but again here we are accessig element from 0 only to it's need to decrease by 1;
    //using a while loop  until l<=u lower is less than or equal to u.
    while (l <= u)
    {
        int middle = (l + u) / 2; // midpoint of the array.
        if (item == arr[middle])
        {
            printf("\nSearch successful\n");
            return;
        }
        else if (item > arr[middle])
            l = middle + 1;
        else
            u = middle - 1;
    }
    printf("\nNo such element\n");
}

main()
{
    //we haven't learn sorting yet so taking a array which is already sorted.
    int arr[] = {3, 11, 12, 25, 35, 47, 54, 66, 77, 89, 90};
    int size = 0, item, i;
    // as we don't know what the size, counting is not for a good programmer we'll make computer to count the elements;
    for (i = 0; arr[i]; i++)
        ;
    size = i;
    item = 89;
    printf("\nSize of the array is %d", size);
    binary_search(arr, size, item);
}