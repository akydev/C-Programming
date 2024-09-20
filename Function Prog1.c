//Function Program
#include<stdio.h>
void sum();
int main()
{
    sum();
    return 0;
}
void sum()
{
    int n1,n2, add;
    printf("Enter a Value N1: ");
    scanf("%d",&n1);
    printf("Enter a Value N2: ");
    scanf("%d",&n2);

    add = n1 + n2;

    printf("Add = %d", add);
}

