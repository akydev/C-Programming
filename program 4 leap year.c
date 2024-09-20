//write a program to fine the given year is leap year or not.
#include<stdio.h>
int main()
{
    int year;

    printf("Enter the year : ");
    scanf("%d",&year);

    if ((year%4 == 0) && ((year%400 == 0) || (year%100 != 0)))
    {
        printf("%d is a leap year\n",year);
    }
    else
    {
        printf("%d is a not a leap year", year);
    }
    return 0;
}
