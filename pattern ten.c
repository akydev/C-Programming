#include<stdio.h>
int main()
{
    int i, j, k;
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    for (i = 0; i < num; i++)
    {
        for(j = 1; j < num -i ; j++)
        {
            printf("0");
        }
        for (k = 0; k < i +1; k++)
        {
           printf("*");

        }
        printf("\n");
    }


    return 0;
}
