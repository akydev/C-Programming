//Funtion With No Arguments and with return value.
#include<stdio.h>
int sum();
int main()
{
    int result;
    result = sum();
    printf("Result= %d",result);
    return 0;
}
int sum(){
    int n1, n2, add;

    printf("Enter a Value N1: ");
    scanf("%d",&n1);
    printf("Enter a Value N2: ");
    scanf("%d",&n2);

    add = n1 + n2;

    return add;
}
