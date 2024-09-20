#include<stdio.h>
int main ()
{
    int i, j;
    int even=2;


    for(i=0; i<3;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d",even);
            even = even+2;
        }
        printf("\n");
    }

    return 0;
}

