// Remove duplicate element
#include <stdio.h>

int main()
{

int n,j, count = 0;
    printf("Enter array elements: ");
    scanf("%d", &n);
    int a[n], temp[n];


    printf("Enter elements in the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }



  for (int i = 0; i < n; i++)
    {

        for (j = 0; j < count; j++)
        {
          if (a[i] == temp[j])
            break;

        }

        if (j == count)
        {
          temp[count] = a[i];
          count++;
        }
    }

    printf("\nArray Removing Duplicates: ");
    for (int i = 0; i < count; i++)
        printf("%d ", temp[i]);

    return 0;
}l
