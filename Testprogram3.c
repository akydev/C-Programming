// Remove duplicate from sorted array.
#include<stdio.h>
int main()
{
   // int a [10] = {1,2,3,3,8};
    int a [10];
    int i,j,k,n;

    printf("Enter the array size: ");
    scanf("%d",&n);


    for(i=0; i<n; i++)
    {
        printf("Enter a array element: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        {
            for(j=i+1; j<n; j++)
            {

                if(a[i] == a[j])
                {
                    for(k=i; k<=n;k++)
                    {
                       a[k] = a[k+1];
                    }
                    n--;

                }

            }
    }

    for(i=0; i<n; i++)
    {
       printf("Array Element: %d \n ",a[i]);
    }


}

