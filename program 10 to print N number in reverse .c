// Write a program to print first N number in reverse using while loop.

#include<stdio.h>
int main()
{
    int num;


    printf("Enter a number :");
    scanf("%d",&num);


    while(num > 0)
    {

        printf("%d \n",num);
        num --;


    }



    return 0;
}
