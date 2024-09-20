//Write a program to print N even number using loop.
#include<stdio.h>
int main()
{
    int i,num, add=0;
    printf("Enter a number. ");
    scanf("%d",&num);

    for(i=0; i<num; i++)

    {
        add = i + add;
        printf("i=%d, add=%d  \n",i,add);

    }
    printf("Result=%d\n",add);
    return 0;
}
