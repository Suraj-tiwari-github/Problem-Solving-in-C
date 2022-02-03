typedef struct student
{
    int rollNo;
    char Name[20];
    int age;
}STUDENT;
void main()
{
    STUDENT s1;
    s1.rollNo=34;
    strcpy(s1.Name,"SUraj");
    s1.age=20;
}
