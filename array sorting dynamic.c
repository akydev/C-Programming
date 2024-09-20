//Array Sorting Dynamic program.
#include<stdio.h>
int main()
{
    int a[5];
    int temp,i,j;
    printf("Enter a Array Element: \n");
    for(i=0; i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[i]=temp;
            }

        }

    }
    for(i=0; i<5;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
