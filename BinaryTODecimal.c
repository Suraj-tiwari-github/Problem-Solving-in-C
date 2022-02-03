/* program for converting the binary into the decimal*#include<math.h>
void main()
{
    unsigned int bin,dec=0;
    int i=0;
    printf("Enter a Binary number \n");
scanf("%d",&bin);

while(bin!=0)
{
dec=dec+pow(2,i)*(bin%10);// Pow works on the double value and the modulus operator works on the integer value only  so we have to use () in modulus operator to increase the priority and should get solve first
bin=bin/10;
i++;
}
printf("Decimal equivalent is %d\n",dec);
}
int is only accepable to display and performed  operation on 10 values above that you will get a neg.*/

// improved logic
void main()
{
     int a;
    printf("Enter a binary number\n");
    a=btod("11111111010101010");// what we are passing in the double quotes. the string is going to received same in the function
    printf("Decimal equivalent is %d",a);

}
int btod (char s[]);
int btod(char s[])// [] empty brackets indicates that  string is going to received as it is  in the array
{
     int  i,d=0;
    for(i=0; s[i]!='\0'; i++)
        {
    if(s[i]=='0')
        d=d*2+0;// simple logic if 0 no adding 1 after multiplying with 2
    else
        d=d*2+1;// where it is 1 in the string it is clear that the binary is 1 and we need to add 1 after *2
    }
    return d;
}
