// Given number is armstrong number or not.
#include<stdio.h>
#include<Math.h>
int main()
{
    int num, digit;
    int sum = 0;

    printf("Enter a number :");
    scanf("%d",&num);
    int temp=num;



    while(num>0)
    {
        digit = num%10;
        sum= sum + (digit*digit*digit);
        num = num/10;
    }
    if(sum==temp)
    {
        printf("Number is Armstrong number");
    }
    else{
        printf("Number not is Armstrong number");
    }
    return 0;
}
