// print number 2 3 4 4 5 6

#include<stdio.h>
int main ()
{
    int i, j;

    for(i=2; i<=5;i++)
    {
        for(j=2;j<i;j++)
        {
            printf("%d",j);

        }
        printf("\n");
    }

    return 0;
}

