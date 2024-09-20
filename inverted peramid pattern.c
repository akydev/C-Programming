// Pattern Program.
#include<stdio.h>
int main ()
{
    int i, j, k, n;

    printf("Enter a value : ");
    scanf("%d", &n);

    for(i=0; i<=n;i++)
    {
        for(k=0;k<i;k++)
        {
            printf("0");
        }
        for(j=0;j<2*n - (2*i-1) ;j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
