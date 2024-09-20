// Write a program to print submission of array elements.
#include<stdio.h>
int main()
{
    int a[5];
    int n;

    printf("Enter size of array: ");
    scanf("%d",&n);
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];

    }
    printf(" submission of all array elements = %d", sum);
    return 0;
}
