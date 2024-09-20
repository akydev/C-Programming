// Remove duplicate from sorted array.
#include<stdio.h>
int main()
{
    //int a [5] = {1,2,3,3,8};
    int a [10];
    int i,j,n;

    printf("Enter the array size: ");
    scanf("%d",&n);


    for(i=0; i<n; i++)
    {
        printf("Enter a array element: ");
        scanf("%d",&a[i]);

        if(a[i] == a[i+1])
        {
            a[i]= a[i+1];
        }
    }
    for(i=0; i<n-1; i++)
    {
        printf("Array Element: %d \n ",a[i]);
    }


}

