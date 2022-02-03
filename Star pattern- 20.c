/**The star pattern-19
      A 1
    A B 1 2
  A B C 1 2 3
A B C D 1 2 3 4

*/
void main()
{
    int i,j,z; char k;
    for(i=1; i<=4; i++) {
        k='A',z=1;
        for(j=1; j<=8; j++)
        {
            if(j<=4){
                if(j>=5-i && j<=3+i){
                printf("%c",k);
                k++; }
                else
                    printf(" ");
        }
            else
        {       if(j>=5 && j<=4+i){
                printf("%d",z);
                z++;}
        }

       }
printf("\n");
} }

