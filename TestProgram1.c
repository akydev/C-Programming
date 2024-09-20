// Write a series program and submission of value.
#include<stdio.h>
float sum(int n);
int main()
{
    int n;
    float result;
    printf("Enter a series value: ");
    scanf("%d",&n);

    result= sum(n);
    printf("The Submission of Series Element is = %f",result);

return 0;
}
float sum(int n)
{
    float i;
    float sum = 1;
    for(i=1; i<n; i++)
    {
        sum = sum + (1/i);
        //printf("Sum=%d \n",sum);
    }
    return sum;
}
