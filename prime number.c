// Write a program to check the given number is prime or not?
#include<stdio.h>
int main()
{
    int i,num;
    int b = 0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i = 2; i < num / 2; i++)
    {
        if(num % i == 0)
        {
            b = 1;
            break;
        }

    }
    if(b == 1)
        {
            printf("%d is not a prime",num);
        }
    else
    {
        printf("%d is a prime",num);
    }

    return 0;
}
