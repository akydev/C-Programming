// Function with arguments and no return value.
#include<stdio.h>
void sum(int,int);
int main()
{
    int n1, n2;
    printf("Enter a value N1 :");
    scanf("%d",&n1);
    printf("Enter a value N2 :");
    scanf("%d",&n2);
    sum(n1,n2);
    return 0;
}
void sum(int a, int b)
{
    int add;
    add = a + b;
    printf("Add= %d", add);
}
