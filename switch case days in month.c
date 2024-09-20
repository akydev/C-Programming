//write a program to find numbers of day in month.
#include<stdio.h>
int main()
{
    int month;
    printf("Enter month number between 1 to 12: ");
    scanf("%d",&month);

    switch(month)
    {
    case 1:
            printf("The month have 31 days");
            break;
    case 2:
            printf("The month have 28 or 29 days");
            break;

    case 3:
            printf("The month have 31 days");
            break;
    case 4:
            printf("The month have 30 days");
            break;
    case 5:
            printf("The month have 31 days");
            break;
    case 6:
            printf("The month have 30 days");
            break;
    case 7:
            printf("The month have 31 days");
            break;
    case 8:
            printf("The month have 31 days");
            break;
    case 9:
            printf("The month have 30 days");
            break;
    case 10:
            printf("The month have 31 days");
            break;
    case 11:
            printf("The month have 30 days");
            break;
    case 12:
            printf("The month have 31 days");
            break;

    default:
        printf("you entered wrong input.");
    }
    return 0;
}
