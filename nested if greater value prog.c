//Compare more then three value using nested if...else.
#include<stdio.h>
int main()
{
    int n1, n2,n3;
    printf("Enter value N1:");
    scanf("%d",&n1);
    printf("Enter value N2:");
    scanf("%d",&n2);
    printf("Enter value N3:");
    scanf("%d",&n3);
    if(n1>n2)
    {
       // printf("N1 is greater");
        if(n1>n3)
        {
            printf("N1 is greater");
        }
//else{
   //         printf("N3 is greater");
   //     }
    }
    else{
       // printf("N2 is greater");

        if(n2>n3)
        {
            printf("N2 is greater");
        }
        else{
            printf("N3 is greater");
        }
    }
    return 0;
}
