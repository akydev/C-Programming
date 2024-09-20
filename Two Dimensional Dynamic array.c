// Two Dimensional Dynamic array
#include<stdio.h>
int main ()
{
    int num1, num2;
    int arr[10][10];
    printf("Enter a number of row: ");
    scanf("%d",&num1);
    printf("Enter a number of col: ");
    scanf("%d",&num2);

    for(int i=0; i< num1; i++)
    {
        for(int j= 0; j< num2; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("The array Elements are : \n");
    for(int i=0; i<num1; i++)
    {
        for(int j=0; j<num2; j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
