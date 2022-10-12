#include<stdio.h>
int main()
{
    int days, weeks, hours;
    printf("Enter the number of days: ");
    scanf("%d",&days);
    int year=days/365;
    days=days%365;
    weeks=days/7;
    days=days%7;
    hours=days*24;
    days=hours/24;
    printf("Years : %d\n",year);
    printf("Week : %d\n",weeks);
    printf("Days : %d",days);

    return 0;
}
