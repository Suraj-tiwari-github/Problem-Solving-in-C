/** star pattern-22
   1
  12A
 123AB
1234ABC
*/
void main()
{
    int i,j,a; char b;
    for(i=1; i<=4; i++) {
            a=1;b='A';
        for(j=1; j<=7; j++)
        {
            if(j>=5-i && j<=4)
            { printf("%d",a);
                a++;
            }
            else
            {
                if(j>=5 && j<=3+i) {
                printf("%c",b);
                   b++;
           }
            else
                printf(" ");
            }

        }printf("\n");
    }
}

