// Write a program to find a sum of all odd numbers between 1 to N numbers.
#include<stdio.h>
int main()
{
    int number;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d",&number);

    for(int i=0; i < number; i++)
    {
        if(i % 2 !=0)
        {
            sum = sum + i;
        }
    }
     printf("Sum of all odd numbers: %d \n",sum);
    return 0;
}
