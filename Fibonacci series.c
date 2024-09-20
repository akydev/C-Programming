// Fibonacci series
#include<stdio.h>
int main()
{
    int n, first=0, second=1, next;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("%d \t %d\t",first,second);
    for(int i=2; i<n; i++)
    {
        //next=i;

        next = first + second;
        first = second;
        second= next;

        printf("%d \t",next);
    }
}
