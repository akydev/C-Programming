// print number 1 22 333

#include<stdio.h>
int main ()
{
    int i, j;

    for(i=0; i<=3;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }

    return 0;
}

