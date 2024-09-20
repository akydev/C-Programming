// Write a program to count number of digits in a given number
#include<stdio.h>
int main()
{
    int number;
    int i = 0;

    printf("Enter a number: ");
    scanf("%d", &number);
   while (number > 0)
    {
        number = number / 10;
        i++;
    }
    printf("Number of digits: %d \n",i);
    return 0;
}
