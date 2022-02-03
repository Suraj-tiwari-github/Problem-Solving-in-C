int arr[10];
void merge(int low, int mid, int high)
{
    int temp[10]; // creating exact numbers of elements that will be used by the array.
    int i = low;
    int j = mid + 1;
    int k = low;

    while (i <= mid && j <= high) // comparing the values of sub array at each index.
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++]; // assigning and then incrementing.
        else
        {
            temp[k++] = arr[j++];
        }
    }
    // copying the remaining elements in the array if the above while loop condition becames false.
    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= high)
        temp[k++] = arr[j++];

    //assigning every element in the orginal array
    for (i = low; i <= high; i++)
        arr[i] = temp[i];
}
mergeSort(int low, int high)
{
    int mid;
    if (low != high)
    {
        mid = (low + high) / 2;
        mergeSort(low, mid);
        mergeSort(mid + 1, high);
        merge(low, mid, high);
    }
}
int main()
{
    int i, n;
    printf("\nEnter the number of elements:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nSize of int in this computer : %d", sizeof(arr[0]));
    printf("\nUnsorted list is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    mergeSort(0, n - 1); // as the index starts from 0.

    printf("\nThe sorted list is :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}