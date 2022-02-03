//ArmStrong number is a number which is multiply by root 3 for each number and getting the result of a number which is been multiply
// 153=1^3 + 5^3 +3^3
//Write a program to print all Armstrong numbers under 1000.
// The mistake i done in this program is i haven't assigned e=0; in the for loop we are doing for each number so we have to assigned
// e=0 for each number of calculation
void main()
{
    int a, b, c,sum,f ;
    printf("Enter a number:");
    scanf("%d",&f);// Giving a has 1000
    printf("ArmStrong Numbers are\n");
    for(a=1; a<=f; a++)
    {
        sum=0;
        b=a;
        while(b!=0)
        {
    c=b%10;
    sum=sum+c*c*c;
    b=b/10;
        }
    if(a==sum)
        printf("\n%d\n",sum);
    }
}
