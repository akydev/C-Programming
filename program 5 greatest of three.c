// Find the greatest of three number.
#include<stdio.h>
int main ()
{
    int num1, num2, num3;
    printf("Enter the number one : ");
    scanf("%d", &num1);

    printf("Enter the number two: ");
    scanf("%d", &num2);

    printf("Enter the number three: ");
    scanf("%d", &num3);

    if ((num1>num2) && (num1>num3))
    {
        printf("%d Is Greatest.",num1);
    }
    else if ((num2>num1) && (num2>num3))
    {
        printf("%d  Is Greatest.",num2);
    }
    else
    {
        printf("%d  Is Greatest.",num3);
    }

    return 0;
}
