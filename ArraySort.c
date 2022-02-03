/* 
Write a recursive function to sort an array by using c language.
*/
int getMaxIndex(int a[], int);
void sort(int a[], int );

int main(){
  int size=10;
  int a[]={1,90, 343, 70, 60, 4, 40, 30, 220, 10};
  //Writing the name of array means passing its address 
   sort(a,size); 
  for(int i=0; i<size; i++){
    printf("%d  ",a[i]);
  }
  _getch();
}
void sort(int a[], int size) // here a has the same address of array
{
  int t, maxIndex;
  if(size>1){
    maxIndex=getMaxIndex(a,size);
    t=a[size-1];
    a[size-1]=a[maxIndex];
    a[maxIndex]=t;
    sort(a,size-1);
  }
}
// getMaxIndex will return the maximum value index in the array.
int getMaxIndex(int a[], int size){
  int max, maxIndex;
  max=a[0];   // assuming a[0] is the max to compare with list of element in the array
  maxIndex=0; // Index of a[0] will be 0
  for(int i=1; i<size; i++)
  {
    if(max<a[i]){
      max=a[i];
      maxIndex=i; // This will contain the max value of index and it return to the fun,
    }
  }
  return maxIndex;
}


