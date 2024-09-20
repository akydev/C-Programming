// Arithmetic Operation using Switch case.
#include<stdio.h>
int main()
{
    int num1, num2, add, sub, mul, div, mod;
    char sign;

    printf("Enter a number 1: ");
    scanf("%d", &num1);

    printf("Enter a number 2: ");
    scanf("%d",&num2);

    printf(" Enter an arithmetic operator ( +, -, *, /, %): ");
    scanf("\n%c",&sign);

    switch (sign)
    {
    case '+' :
        add = num1 + num2 ;
        printf("Result =%d", add);
        break;
    case '-' :
        sub = num1 - num2 ;
        printf("Result =%d", sub);
        break;
    case '*' :
        mul = num1 * num2 ;
        printf("Result =%d", mul);
        break;

    case '/' :
        div = num1 / num2 ;
        printf("Result =%d", div);
        break;
    case '%' :
        mod = num1 % num2 ;
        printf("Result =%d", mod);
        break;


    default:
        printf(" Error! Invalid Operator");
    }
    return 0;
}
