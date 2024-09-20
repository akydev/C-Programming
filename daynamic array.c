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
        printf("%d %u \n",a[i], &a[i]);
    }
    return 0;
}
