#include<stdio.h>
int main ()
{
    int number;
    int digit;
    int sum = 0;

    // Input the three digit number.
    printf("Enter a three digit number: ");
    scanf("%d", &number);


    for(int i = 0; number > 0 ; i++)
    {
        // modulo operation
        digit = number % 10; // last digit reminder
       // printf("%d\n",digit);


        // submission operation
        sum = sum + digit;

        //Division operation
        number = number  / 10;
    }

    printf("The sum of the digits is : %d\n", sum);

    return 0;
}

