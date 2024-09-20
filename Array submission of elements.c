// Write a program to print submission of array elements.
#include<stdio.h>
int main()
{
    int a[5]={10,2,9,1,5};
    int sum = 0;
    for(int i=0; i<5; i++)
    {
        sum = sum + a[i];

    }
    printf(" submission of all array elements = %d", sum);
    return 0;
}
