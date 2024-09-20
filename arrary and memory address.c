//print a array and its memory address.
#include<stdio.h>
int main()
{
    int a[5] = {12,5,8,3,9};
    for(int i = 0; i < 5; i++)
    {
        printf("%d %u \n",a[i], &a[i]);
    }
    return 0;
}
