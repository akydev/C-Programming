// Recursive function for factorial.
#include<stdio.h>

int factorial(int n);
int main()
{
    int n, result;
    printf("Enter a Number: ");
    scanf("%d", &n);
    result = factorial(n);
    printf("Factorial of number : %d",result);
    return 0;
}
int factorial(int n)
{
    int result;
    if (n==0|| n==1|| n==-1){

        return 1;
    }
    else{
        result= n * factorial(n - 1);
        return result;
    }
}

