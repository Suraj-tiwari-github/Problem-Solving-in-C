// Sorting
main()
{
    int a[5];
    input(a);
    display(a);
    sort(a);
    display(a);
    getch();//Passing name of array means passing address
}
void sort(int *p)
{
    int round,i,t;
    for(round=1;round<=4;round++)
    {
                for(i=0;i<=4-round;i++)
        {
             if(*(p+i)>*(p+i+1))
            {
             t=*(p+i);
             *(p+i)=*(p+i+1);
             *(p+i+1)=t;
             }
        }
    }
}
void display(int *p)
{
    int i;
    for(i=0;i<=4;i++)
        printf("\n%d",*(p+i));
}
void input(int *p)
{
    int i;
    printf("Enter 5 Numbers for sorting:");
    for(i=0;i<=4;i++)
        scanf("%d",p+i);
}
