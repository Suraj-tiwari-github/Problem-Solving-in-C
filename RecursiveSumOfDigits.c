/*
! Question: Write a recursive function to calculate sum of digits 
* ex: 1246 6+124 4+12 2+1

!note: 123 if we want only 3 then 123%10=3; 123/10= 12
*/

int main(){
    int a;
    printf("\nEnter a number:");
    scanf("%d",&a);
    printf("\nThe sum is %d",sum(a));
}

int sum(int a){
    if(a/10==0)
      return a;
    return(a%10+sum(a/10));    
    
} 
