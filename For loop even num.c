//Write a program to print N even number using loop.
#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter a number. ");
    scanf("%d",&num);

    for(i=0; i<num; i++)
    {
        if(i%2 ==0)
            printf("i=%d\n",i);
    }
    return 0;
}
