// Swapping of two numbers using third variable
void main()
{
    void swap(int,int);
    int a,b,c;
    printf("Enter Two numbers for swapping");
    scanf("%d%d",&a,&b);
    printf("The values of A is=%d\n The value of B is=%d\n",a,b);
    swap(&a,&b);
    printf("A=%d\nB=%d",a,b);
}
swap(int *A,int *B)
{
    int t;
    t=*A;
    *A=*B;
    *B=t;
}
