//check the entered value is grater than ten or not.
#include<stdio.h>
int main()
{
    int a;

    printf("Enter a value A: ");
    scanf("%d",&a);
    printf("A = %d",a);

    // int b = 10;
    //comparing A and B
    if(a>10)
    {
        printf(" A is grater than 10");
    }
    else{
        printf("A is less than 10");
    }
    return 0;
}
