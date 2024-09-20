// User Define function submission of n number given by user.
#include<stdio.h>
int sum(int n);
int main()
{
    sum(5);
}
int sum(int n)
{
    int sum = 0;
    for(int i=0; i<=n; i++)
    {
        sum = sum + i;
    }
    printf("Sum of all N number : %d", sum);
}
