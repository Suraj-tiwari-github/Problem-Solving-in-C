/* */
#include <stdio.h>
void main()
{
    int dec, store, i = 1, Rem, bin = 0;
    printf("Enter a decimal number:\n");
    scanf("%d", &dec);
    store = dec;
    while (dec != 0)
    {
        Rem = dec % 2;
        dec = dec / 2;
        bin = bin + (Rem * i); /* the logic is simple the number which we get from the above two operation is up to down,but in the binary we need
    bottom to the top. to that we are multiply the reminder with i and i is multiplying every time with 10 so the result in will be
    in bin variable. */
        i = i * 10;            // this is the main which we are getting the binary and Rem(using modulus)  is what the result is
        
    }
    printf("The binary equivalent of the decimal %d is %d", store, bin);
}
