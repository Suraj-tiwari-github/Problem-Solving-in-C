//! In selection sort we'll select a minimum element in the array: selection sort can be used to find the smallest element in the array, rather than sorting a array.
int findmin_selection_sort(int arr[], int index, int n)
{
    int i, j, min;
    min = arr[index];
    i = index;
    for (j = i + 1; j <= n - 1; j++)
    {
        if (arr[i] > arr[j])
        {
            min = arr[j];
            i = j;
        }
    }
    return i;
}

int main()
{
    int arr[10] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10}, i, minIndex, temp;
    for (i = 0; i <= 8; i++)
    {
        minIndex = findmin_selection_sort(arr, i, 10);
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    for (i = 0; i <= 9; i++)
        printf("  %d", arr[i]);
}
