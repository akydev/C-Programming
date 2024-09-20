//Pattern Programing.
#include<stdio.h>
int main()
{
    int i, j,k;
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num - i; j++)
        {
           printf("*");

        }
        for(i=num-1;i>=1;i--)
        {
            for(j=0;j<=i;j++)
            {
                printf("*");
            }
        }

        printf("\n");
    }


    return 0;
}
