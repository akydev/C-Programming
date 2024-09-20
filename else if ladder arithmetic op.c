// write a program for Arithmetic operation using else if ladder.
#include<stdio.h>
int main()
{
    int num1,num2, add, sub, mul, div, mod;
    char sign;

    printf("Enter a num1 : ");
    scanf("%d",&num1);

    printf("Enter a num2 : ");
    scanf("%d",&num2);

    printf("Enter arithmetic operator (+, -, *, /, %)");
    scanf("\n %c", &sign);

    if( sign == '+')
    {
        add = num1 + num2;
        printf("Result = %d",add);
    }
    else if( sign == '-')
    {
        sub = num1 - num2;
        printf("Result = %d", sub);
    }
    else if( sign == '*')
    {
        mul = num1 * num2;
        printf("Result = %d", mul);
    }
    else if( sign == '/')
    {
        div = num1 / num2;
        printf("Result = %d", div);
    }
    else if( sign == '%')
    {
        mod = num1 % num2;
        printf("Result = %d", mod);
    }
    else{
        printf("Error! Invalid Arithmetic operator \n");
    }

    return 0;
}
