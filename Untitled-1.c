#include<stdlib.h>
#include<stdio.h>
sort(int a[], int );
int getMaxIndex(int a[], int );
int main()
{
    int a[9],size=10;
    printf("\nEnter 1o values to array:\n ");
    fflush(stdin);
    for(int i=0; i<size; i++){
    scanf("%d" ,&a[i]);
    }
    fflush(stdin);
    printf("\nThe entered values are \n");
    for(int i=0; i<size; i++ ){
        printf("%d  ",a[i]);
    }
    sort(a,size);
    printf("\n\nThe sorted array is ");
    
    for(int i=0; i<size; i++ ){
        printf("%d  ",a[i]);
    }
    fflush(stdin);

}

sort(int a[], int size){

    int maxIndex, t;
    maxIndex=getMaxIndex(a,size);
    if(size>1){
        t=a[size-1];
        a[size-1]=a[maxIndex];
        a[maxIndex]=t;
        sort(a,size-1);
    }
}

int getMaxIndex(int a[], int size){
    int max,maxIndex;
    max=a[0]; maxIndex=0;
    for(int i=1; i<size; i++){
    if(max<a[i]){
        max=a[i];
        maxIndex=i;
        }
    }
    return maxIndex;
}