#include<stdio.h>
int main ()
{
    int i, j;
    int letter=65;


    for(i=0; i<3;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",letter);
            letter++;
        }
        printf("\n");
    }

    return 0;
}

