char* Reverse(char *p);
main()
{
    printf("%d",Reverse("Computer"));
}
char* Reverse(char *p)
{
    int l,i;
    char ch;
    for(l=0;*(p+l)!='\0';l++);
    for(i=0;i<l/2;i++)
    {
        ch=*(p+i);// i=0->0
        *(p+i)=*(p+l-1-i);//0=7-0
        *(p+l-1-i)=ch;//7=ch
    }
    return(p);//First address
}
