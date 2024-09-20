//Write a program using continue
#include<stdio.h>
int main()
{
    int i, num;
    printf("Enter a Number: ");
    scanf("%d",&num);

    for (i = 0; i < num; i++)
    {

        if(i==5)
        {
            continue;
        }
        printf("i = %d \n",i);
    }

    return 0;
}
