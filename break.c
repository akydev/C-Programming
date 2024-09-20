//Write a program using break
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
            break;
        }
        printf("i = %d \n",i);
    }

    return 0;
}
