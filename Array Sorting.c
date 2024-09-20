//Sorting Array Element
#include<stdio.h>
int main()
{
    int a[5]={4,1,20,7,5};
    int temp,i,j;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
         printf("%d\t",a[i]);
    }



    return 0;
}
