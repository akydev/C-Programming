//Print Array element and use pointer to print its address.
#include<stdio.h>
int main()
{
    int a[5]={2,5,8,6,3};
    int *ptr=a;

    for(int i=0;i<5;i++)
    {
        printf("%d %d\n",(ptr+i),*(ptr+i));
    }
    return 0;
}
