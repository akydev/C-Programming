// Function with argument and with return value
#include<stdio.h>
int sum();

int main()
{
    int n1, n2, add;
    printf("Enter a Value N1:");
    scanf("%d",&n1);
    printf("Enter a Value N2:");
    scanf("%d",&n2);

    add=sum(n1,n2);

    printf("Add = %d", add);
    return 0;
}

int sum(int a, int b){
    return a + b;
}
