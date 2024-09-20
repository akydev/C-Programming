// Swap two value without using 3rd variable
#include<stdio.h>
int main()
{
    int a = 10;
    int b = 5;

    a= a>>1;
    printf("a= %d\n",a);

    b= b<<1;
    printf("b= %d", b);
    return 0;
}
