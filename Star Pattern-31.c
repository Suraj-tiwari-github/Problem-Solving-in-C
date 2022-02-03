//star pattern 31
/**
    1
   A B
 1  2  3
A  B C  D
*
This is my bakwas login
void main()
{
    int i,j,k=1,z=0,a=65,s=65;
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=7; j++)
        {
            if(i%2==1)
            {// for the number
                  z=0;
                  if(i==1 && j==4)
                    { printf("%d",k);}
                  if(i==3)
                  { if(j%2==0)
                      {z=1; printf("%d",k++);}
                  }
                  if(z==0)
                    printf(" ");
            }
            else
            {
                z=0;
                if(i==2 && (j==3 ||j==5))
                {
                    z=1; printf("%c",a++);
                }
                else if(i==4 && j%2==1)
                {
                    z=1; printf("%c",s++);
                }
                if(z==0)
                    printf(" ");
         }

    }
     printf("\n");
}
}
*/
// This is the logic of mysirG
void main()
{
    int i,j,k,lin,num;
    char alpha;
    printf("Enter the numbers of line you want the pattern in:");
    scanf("%d",&lin);
    for(i=1;i<=lin;i++)
    {
        k=1;
        num=1; alpha='A';
        for(j=1; j<=2*lin-1; j++)
        {
            if(j>=lin+1-i && j<=lin-1+i)
            {
             if(k)
                if(j%2==0)
                printf("%d",num++);
                else
                    printf("%c",alpha++);
            else
                { printf(" "); }
                k=1-k;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}





















