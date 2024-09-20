//program for ternary op +
#include<stdio.h>
int main()
{
    //char op = '+';
    char op;
    int n1;
    int n2;
    printf("Enter First Number: ");
    scanf("\n%d",&n1);
    printf("Enter Second Number:");
    scanf("\n%d",&n2);
    printf("Enter arithmetic sign: ");
    scanf("\n%c",&op);
    int result = (op=='+')? (n1+n2): (n1-n2);
    printf("Result = %d",result);
    return 0;
}
