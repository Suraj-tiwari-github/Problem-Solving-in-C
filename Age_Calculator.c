/* */
/*Age calculator program in c  */
void main()
{
    int birth_day, birth_month, birth_year, present_day, present_month, present_year;
    printf("Enter your date of birth DD/MM/YYYY:\n");
    scanf("%d%d%d",&birth_day,&birth_month, &birth_year);
    present_day=11;
    present_month=4;
    present_year=2020;
    age_calculator(birth_day, birth_month, birth_year, present_day, present_month, present_year);
}
age_calculator(int, int, int ,int, int, int);
age_calculator(birth_day, birth_month, birth_year, present_day, present_month, present_year)
{
    int caldate,calmonth ,calyear;
    int month[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(birth_day>present_day)
    {
        present_day=present_day+month[birth_month-1];
        present_month=present_month-1;
    }
    if(birth_month>present_month)
    {
        present_year=present_year-1;
        present_month= present_month+12;
    }
    caldate=present_day - birth_day;
    calmonth=present_month - birth_month;
    calyear=present_year - birth_year;
    printf("\nThe days: %d,\nMonth: %d,\nyear: %d.",caldate,calmonth,calyear);
}
