#include<stdio.h>
int main()
{

    int num, digit;
    int sum = 0;

    printf("Enter a three digit number :");
    scanf("%d",&num);

    while(num > 0)
    {
        digit = num % 10;
        printf("Digits : %d \n", digit);
        sum = sum + digit;
        num = num / 10;

    }

    printf("The sum of the digits is : %d\n", sum);
    return 0;
}
