#include<stdio.h>
struct book
{
    int bookid;
    char title[20];
    float price;
};
void main()
{
    struct book b1;
    input(b1);
    getch();
}
/*void display(struct book b)
{
    printf("\nThe BookId is%d\nThe Title of book ID is %s,\nThe price is %f",b.bookid,
           b.title,b.price);
} */
 void input(struct book b)
{
  printf("Enter bookID,Title and price:\n");
  scanf("%d",&b.bookid);
  fflush(stdin);
  gets(b.title);
  scanf("%f",&b.price);
  printf("%d\n%s\n%f",b.bookid,b.title,b.price);
}
