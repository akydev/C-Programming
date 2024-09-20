//program to check the given number is greater then or equal to or less then equal to.
#include<stdio.h>
int main()
{
    int n1, n2;
    printf("Enter a value of N1:");
    scanf("%d",&n1);
    printf("Enter a value of N2:");
    scanf("%d",&n2);
    if(n1>n2)
    {
        printf("N1 is greater");
    }
    else if(n1<n2)
    {
        printf("N1 is less then");
    }
    else if(n1=n2)
    {
        printf(Both Number are equal);
    }
    else{
        printf("N2 is greater");
    }
}
