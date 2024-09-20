//Write a program to check given number is palindrome or not.
#include<stdio.h>
int main()
{
    int i,num, digit;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d",&num);
    int temp = num;

    while(num > 0)
    {
        digit = num % 10;
        sum = (sum * 10) + digit;
        num = num / 10;
    }
    if(temp == sum)
        {
            printf("Given number %d is a palindrome",temp);
        }
    else
    {
        printf("Given number is not a palindrome");
    }

    return 0;
}

