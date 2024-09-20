//Ternary operator program.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    printf("Your Entered Number is: = %d\n",n);
    (n%2==0)?printf("Number Is Even"):printf("Number Is Odd.");
    return 0;
}
