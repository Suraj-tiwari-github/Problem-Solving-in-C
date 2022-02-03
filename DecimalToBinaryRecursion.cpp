// Print Binary of a decimal number using recursion in C
#include <iostream>
using namespace std;
decimalToBinary(int dec)
{
    if (dec == 1)
        printf("1"); // as in the LCM of decimal to binary,where 1 ends up begin last value so we add 1 to the binary and write a number from bottom to top.
    else
    {
        decimalToBinary(dec / 2); //*One of the key feature of recursion is, where we can print the value in reverse and calling again and again, then after writing a cout//printf statement. values will be printed in reverse.
        cout << dec % 2;          //*this gave us the whether the number will be 0 or 1.
    }
}
int main()
{
    int dec;
    cout << "\nEnter a decimal values:";
    cin >> dec;
    decimalToBinary(dec);
}
