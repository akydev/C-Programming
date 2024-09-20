// print pattern square border *
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int i=1; i<=num; i++)
    {
        for(int j=1; j<=i; j++)
        {

            if(j==1 || j==i || i==num )
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
    return 0;
}
