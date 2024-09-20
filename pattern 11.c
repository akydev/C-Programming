#include<stdio.h>
int main()
{
    int i, j, k;
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    for (i = 0; i < num; i++)
    {
        for(j = 0; j < i ; j++)
        {
            printf("0");

        }
        for (k = 0; k < num-i; k++)
        {
           printf("*");


        }
        printf("\n");
    }


    return 0;
}
