//Write a program to print i value 4 times using for loop.
#include<stdio.h>
int main()
{
    int i, num;
    printf("Enter the number.");
    scanf("%d",&num);

    for(i=0; i<num;i++)
    {
        printf("i=%d\n",i);
    }
//    printf("i=%d",i);

    return 0;
}
