#include<stdio.h>
int main ()
{
    int number;
    int digit;
    int sum = 0;

    // Input the three digit number.
    printf("Enter a three digit number: ");
    scanf("%d", &number);

    // Extract and print each digit
    printf("The digits in the number are: \n");
    for(int i = 0; i < 3; i++)
    {
        digit = number % 10; // last digit reminder
        printf("%d\n",digit);
        number = number / 10; // remove last digit
        sum = sum + digit;
    }

    printf("The sum of the digits is : %d\n", sum);

    return 0;
}
