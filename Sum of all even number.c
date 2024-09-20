// Write a program to find sum of all even number between first to N number.
#include<stdio.h>
int main()
{
    int i, num;
    int sum = 0;
   // int result;
    printf("Enter a number : ");
    scanf("%d",&num);

    for(i = 0; i < num; i++)
    {
        if(i %2 == 0)
        {
           sum = sum + i;
        }
    }
     printf("Sum of all even numbers: %d \n",sum);

    return 0;
}
