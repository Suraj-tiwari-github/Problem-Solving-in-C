/*

*
**
**
****
***
**
*

*/
void main(){
int i,j;
for(i=1; i<=7; i++)
{
    for(j=1; j<=4; j++)
    {
        if(i<=4){// This line is i=1 to i=4
            if(j<=i)
                printf("* ");
            else
                printf(" ");
        }
         if(i>=5){// This line is for i=5 to i=7. we have use if-if and else
            if(j<=8-i)
                printf("* ");
            else
                printf(" ");
        }

    }
    printf("\n\n");
}
}
