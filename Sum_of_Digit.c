//Write a program to calculate sum of the digits of a given number
//logic
//suppose we enter 276. 276%10= 6 always when a modulus operator is applied and divide with 10 will give a last digit which is 6.
// we have to add each digit like 6+7+2=15
// and we even has to performed divide operator to check a is zero or not. while(a!=0)
void main()
{
    int a, b, i, j=0;
    printf("Enter digits to get the sum of all digits:\nMaximum accepted 10\n");
    scanf("%d",&a);
    while(a!=0)
    {
    b=a%10;
    j=j+b;
    a=a/10;
    }
    printf("%d is the Total\n",j);

}
