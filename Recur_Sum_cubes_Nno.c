/* 
 //!question: Write a recursive function to calculate sum of cubes of N natural no.

*
 //! NOte: the below code is the sum of digits of  cube of a numbers but we have to do
 //! sum of N natural cubes

#include<math.h>
#include<stdio.h>
int main()
{
    int input;
    printf("\nEnter a number to find the sum of cubes of it:");
    scanf("%d",&input);
    printf("\nThe sum of cubes of digits %d is %d",input,SOCubes(input));

}

int SOCubes(int input){
    if(input<10)
    //! pow is the power function where first parameter is baseN0. second parameter
    // ! power to base. pow(2,5) is 2^5 
    return (pow(input,3));
    else
    {
        return( pow(input%10,3) + SOCubes(input/10));
    }
    
}
*/

int main(){
    int input;
    printf("\nEnter a number:");
    scanf("%d",&input);
    printf("The sum of cubes of a N natural number is: %d",sumCubes(input));
}

int sumCubes(int input){
    if(input==1)
    return 1;
    else
    {
        return(pow(input,3)+ sumCubes(input-1));
    }
    
}





















