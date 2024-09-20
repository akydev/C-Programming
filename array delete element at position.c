// delete a  value in specific location of array.

#include<stdio.h>
int main()
{
    int i,n;
    int a[20];
    printf("Enter a value :");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter a array element:");
        scanf("%d",&a[i]);
    }

    int index;
    printf("Enter a specific position : ");
    scanf("%d",&index);

   for(i=index; i<n-1; i++)
    {
      a[i]=a[i+1];

    }


   for(i=0; i<n-1; i++)
   {
       printf("array element= %d \n",a[i]);
   }

    return 0;
}
