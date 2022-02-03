// Recursion
int fun(int);
int main()
{
    int k,s;
    printf("Enter a numbers:");
    scanf("%d",&s);
    k=fun(s);
    printf("%d",k);
}
int fun(int a)
{
  int s;
  if(a==1)
        return a;
  s=a+fun(a-1);
  return s;
}
