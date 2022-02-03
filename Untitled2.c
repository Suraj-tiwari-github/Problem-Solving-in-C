/*// practice for the FILE session
// write a program to write hello student in the file.
#include<stdio.h>
void main()
{
    int i; char s[]="practicing FILE non premptive data type:";
    FILE *fp;
    fp=fopen("f2.txt", "w");// file name and with opening modes
    if(fp==NULL)
    {
        printf("FILE not exists:");
    exit(1);
    }
    for(i=0; i<strlen(s); i++)
    fputc(s[i], fp);
    fclose(fp);
    _getch();
}

// NOW WRITING INTO THE FILE BY TAKING THE STRING FROM THE USER
// using fgets(name of the array, number of character at once, file pointer);
#include<stdio.h>
void main()
{
    FILE *fp;
    char s[10];
    fp=fopen("f2.txt","r");
    if(fp==NULL)
    {
        printf("FILE not exist");
        exit(1);
    }
    while(fgets(s, 9, fp)!=NULL)
        printf("%s",s);
    fclose(fp);
}
*
// writing into the file using fputs() function// syntax of fputs(name of the array, file pointer)
#include<stdio.h>
main()
{
    char s[100];
    FILE *fp;
    fp=fopen("f2.txt","w");
    if(fp==NULL)
    {
        printf("File not exist");
        exit(1);
    }
    printf("Write something long:");
    gets(s);
    fputs(s, fp);
    fclose(fp);
}
*/
//FWRITE IS A FUNCTION SYNTAX OF fwrite()
//fwrite(address of the variable,or array, sizeof(), number of character to be printed, file pointer)
#include<stdio.h>
struct computer
{
    int cpuModel;
    int yearPurchase;
    float price;
    float rating;
    char nameOfCpu[20];
};
void main()
{
    struct computer myPc;
    FILE *fp;
    printf("Enter the cpuModel:\n 2.Enter the yearPurchase:\n 3. price:\n 4.Rating\n 5.NameOfTheCPU:\n ");
    scanf("%d",&myPc.cpuModel);
    scanf("%d",&myPc.yearPurchase);
    scanf("%f",&myPc.price);
    scanf("%f",&myPc.rating);
    fflush(stdin);
    gets(myPc.nameOfCpu);
    fp=fopen("myfile.dat","wb");
    if(fp==NULL)
    {
        printf("File not exist");
        exit(1);
    }
    fwrite(&myPc, sizeof(myPc), 1, fp);

    printf("Printed\n\n\n\nNow Reading from a file:");
    fclose(fp);
    _getch();

}

















