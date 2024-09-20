// Factorial Numbber
#include<stdio.h>
int main()
{
    int num;
    int fact = 1;
    printf ("Enter a value: ");
    scanf("%d",&num);
while (num > 0)
{
    fact = fact * num;
    num--;
}

    printf("Factorial = %d \n",fact);

    return 0;
}
