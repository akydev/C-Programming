// Size of Array..
//Create a array and print it
#include<stdio.h>
int main()
{
    int a[5] = {12,1,9,2,3};
    printf("%d \n",sizeof (a));
    printf("%d \n",a[1]);
    printf("%d \n",a[2]);
    printf("%d \n",a[3]);
    printf("%d \n",a[4]);

    printf("%u \n", &a[0]);
    printf("%u \n", &a[1]);
    printf("%u \n", &a[2]);
    printf("%u \n", &a[3]);
    printf("%u \n", &a[4]);

    a[2] = 6;
    printf("%d \n",a[2]);

    return 0;
}

