//print a array and its memory address.
#include<stdio.h>
int main()
{
    int a[5];
    int n;

    printf("Enter size of array: ");
    scanf("%d",&n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < n; i++)
    {
         printf("array element of index = a[%d] %d %u \n",i,a[i], &a[i]);
    }

    return 0;
}
