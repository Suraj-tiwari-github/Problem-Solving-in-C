/* 
! Question: Recursive Function to calculate sum of squares of digits in c language.
* user will enter a numbers and we need to square each number and provide a sum of
* all numbers
? Ex: 1234 is entered by the user.
       ? 1^2 +2^2+ 3^3+ 4^2 in recursive order.
*/

int main(){
    int user;
    printf("\nEnter a number:");
    scanf("%d",&user);
    // sum of square is SOsquare
    printf("\nThe sum of square of digits is %d", SOsquare(user));
}

int SOsquare(int user){
    if(user<10)
        return(user*user);
    else
    {
        return((user%10)*(user%10)+SOsquare(user/10));
        /* 
        !working of the above line:
            243%10(Result 3) +243%10(result 3) + 243/10(result 24)
            24%10(Result 4) + 24%10(result 4) + 24/10;(result 2)
            2%10(result base case 2*2 ) + 2%10 + 2/10 ; 
            2*2+ 4*4 + 3*3 
            ! this is working of return. 
        */
    }

}