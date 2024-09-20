// enter a value in specific location of array.

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

    int index, value;
    printf("Enter a specific position : ");
    scanf("%d",&index);
    printf("Enter a value for array element: ");
    scanf("%d", &value);
   for(i=n-1; i>=index; i--)
    {
       // a[i]=i+1;
      a[i+1]=a[i];
      //a[i]=a[i+1];

    }
   // a[2]=8;
    a[index]=value;

   for(i=0; i<=n; i++)
   {
       printf("array element= %d \n",a[i]);
   }

    return 0;
}
