/** Star Pattern-26
A
BA
CBA
DCBA

ASCII code for A is 65
*/
void main()
{
    int i,j; char a,b;
    for(i=1; i<=4; i++){
            a=64+i;// i will be incremented each time with 1 .
        for(j=1; j<=4; j++){
            if(j<=i)
            printf("%c",a--);// This is a post decrement operator.First the value a is going to printed then a will be decre.

            else
                printf(" ");
        }
        printf("\n");}
    }
