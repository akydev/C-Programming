// Write a program using do while loop.
#include<stdio.h>
int main()
{
    int i=0;
    int n;
    printf("Enter N number:");
    scanf("%d",&n);
     do{
        printf("i=%d\n",i);
        i++;
     }

     while(i<n);
    return 0;
}
