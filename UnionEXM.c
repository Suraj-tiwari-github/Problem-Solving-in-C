union item
{
    int x;float y;char z;
};
void main()
{
    union item i1;
    i1.x=5;
    printf("%d",i1.x);
    i1.y=34.54;
    printf("\n%f",i1.y);
    i1.z='s';
    printf("%c",i1.z);
    getch();
}
