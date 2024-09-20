#include<stdio.h>
int main()
{
    int i, j, k;
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    for (i = 1; i <= num; i++)
    {
        for(j = 1; j <= 2 * (num -i) ; j++)
        {
            printf("0");
        }
        for (k = 1; k < 2 * i; k++)
        {
           printf("* ");

        }
        printf("\n");
    }


    return 0;
}
