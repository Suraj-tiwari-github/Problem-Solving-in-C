//Write a function to calculate area of a circle.(Takes Something, Returns Something)
// Area of a circle is pi. r. square where pi is 3.14

//float findArea(int);
int main()
{
    int radius;
    float sum=0;
    printf("Please enter the radius of a circle:");
    scanf("%d",&radius);
    float findArea(int);
    sum=findArea(radius);
    printf("The area of a circle is %lf", sum);
    _getch();
    return 0;
}

float findArea(int r)
{
    float sum=0;
    sum=(3.14*(r*r));
    return sum;
}
