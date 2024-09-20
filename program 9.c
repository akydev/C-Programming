#include<stdio.h>
int main()
{
    int num, digit;
    int mul = 1;

     printf("Enter a three digit number :");
    scanf("%d",&num);

    while(num > 0)
    {
        digit = num % 10;
        printf("Digits : %d \n", digit);
        mul = mul * digit;
        num = num / 10;

    }

    printf("The Multiplication of the digits is : %d\n", mul);

    return 0;
}
