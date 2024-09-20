#include<stdio.h>
int main ()
{
    int i, j;
    //int even=2;


    for(i=1; i<=3;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i+j);
           // even = even+2;
        }
        printf("\n");
    }

    return 0;
}

