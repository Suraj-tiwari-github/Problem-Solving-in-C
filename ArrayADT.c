struct arrayADT {
    int capacity; // max size of a array
    int lastIndex;// last Index, A element is store in the array.
    int *ptr;// to contain the address of the array.
};

struct arrayADT* createArray(int capacity) {
    // creating a array and storing the address in a pointer and returing that address.
    struct arrayADT *arr;
    arr=(struct arrayADT*)malloc(sizeof(struct arrayADT));
    arr->capacity=capacity;
    //*The index starts from 0 but we haven't put a value in the array should be contain -1 in it.
    arr->lastIndex=-1;
    //*creating a array now
    //* malloc returns void address, what is a void address? A address which is of no type and can convert into any type we want it to be, a type casting should be done inorder to avoids the warning or error sometimes.
    arr->ptr=(int *)malloc(sizeof(int)*capacity);
    return (arr);
}

int getItem(struct arrayADT *arr, int index) {
    // to get a particular item in an array.
    //If the index value is greather than the value of arr->lastindex then it is invalid because, LastIndex is a value which store a element index which is at the last position. if the index value is greater than the lastIndex then it is invalid.
    if (arr->lastIndex<index || index<0) {
        //*if the index value is less than 0 which means the array is empty. The minimum value a array should contain is 0.
        printf("\nInvalid Index");
        return (-1);
    }
    else
    {
        return (arr->ptr[index]);
    }
}

int setItem(struct arrayADT *arr, int index, int value) {
    if (arr->lastIndex==arr->capacity-1) {
        printf("Array is full\n");
        return 0; // 0 means insertion is not possible.
    }
    //*for invalid index
    if (index<0 || index>arr->lastIndex+1) {
        printf("Invalid index");
        return 0;
    }
    if (index<=arr->lastIndex) {
        //*for shifting if the value to be insert into middle of a element like a index is provided here.
        arr->lastIndex++; // if the value are shifting for a new value to get inserted into the array then lastIndex value should be increment in order to know what is the lastIndex of a array.
        int i=arr->lastIndex;
        while (i!=index) {
            arr->ptr[i]=arr->ptr[i-1];// shifting for a new value to be inserted in the middle of somewhere.
            i--;
        }
        arr->ptr[index]=value;
        return 1;
    }
    if (index==arr->lastIndex+1) {
        arr->lastIndex++;
        arr->ptr[arr->lastIndex]=value;
        return 1;
    }
}

int editItem(struct arrayADT* arr, int index, int newValue) {
    if (index<0 || index>arr->lastIndex) {
        printf("Invalid index\n");
        return 0;
    }
    else
    {
        arr->ptr[index]=newValue;
        return 1;
    }
}

int countItem(struct arrayADT *arr) {
    return (arr->lastIndex+1);
}

int removeItem(struct arrayADT*arr, int index) {
    if (index<0 || index<arr->lastIndex) {
        printf("\nInvalid index\n");
        return 0;
    }
    if (index<arr->lastIndex) {
        int i; i=index;
        while (i<arr->lastIndex) {
            arr->ptr[i]=arr->ptr[i+1];
            i++;
        }
        arr->lastIndex=arr->lastIndex-1; // this is because we have remove an item from the array and count of LastIndex value should be decrement to -1;
        return 1;
    }
    if (index==arr->lastIndex) {
        arr->lastIndex=arr->lastIndex-1; // just decrement if the value to remove is the last value in the array, so we need to decrement the lastIndex count.
        return 1;
    }
}

int search(struct arrayADT *arr, int value) {
    int i;
    if (arr->lastIndex==-1) {
        printf("\nInvalid choice");
        return -1;
    }
    for (i=0; i<=arr->lastIndex; i++)
        if (arr->ptr[i]==value)
            return i;

    //* if the above return statement of for loop didn't executes then this line i mean after this comment lines will get executes 
    return -1; // which indicates that we haven't found a elemvalue
}

void sort(struct arrayADT *arr) {
    int round, i, n, temp;
    n=arr->lastIndex+1;
    for (round=1; round<=n-1; round++) {
        for (i=0; i<=n-1-round; i++)
            if (arr->ptr[i]>arr->ptr[i+1]) {
                temp=arr->ptr[i];
                arr->ptr[i]=arr->ptr[i+1];
                arr->ptr[i+1]=temp;
            }
    }
}

int main() {
    struct arrayADT *arr;int i;
    arr=createArray(5);
    setItem(arr, 0, 10);
    setItem(arr, 1, 20);
    setItem(arr, 2, 30);
    setItem(arr, 3, 40);
    setItem(arr, 1, 50);
    editItem(arr, 0, 90);
    sort(arr);
    removeItem(arr, 4);
    i=search(arr, 40);
    if (i==-1)
        printf("\nItem not found");
    else
    {
        printf("\nItem found at index %d\n", i+1);
    }



    for (i=0; i<countItem(arr); i++) {
        printf("%d  ", getItem(arr, i));
    }
    _getch();
}

