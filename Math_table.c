// program for writing math table
main()
{
    int a, b, c;
    printf("Enter a number:\n");
    scanf("%d",&a);
    for(c=1; c<=10; c++)
    {
        printf("%d * %d = %d\n",a,c,(a*c));
    }

}
