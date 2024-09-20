// Recursion Funtion

#include<stdio.h>
int sum(int n);
int main()
{
    int result;

    result = sum(5);
    printf("sum of N number : %d",result);
}
int sum(int n)
{

    if (n>0){
        return n + sum (n-1);
    }

}
