// Array Program to find age an weight of person.
#include<stdio.h>
int main()
{
    int p[5], height[5], weight[5];
    int i;

    for(i=0; i<5; i++)
    {
        printf("Enter a person number: ");
        scanf("%d", &p[i]);
        printf("Enter the height of the person: ");
        scanf("%d", &height[i]);
        printf("Enter the weight of the person: ");
        scanf("%d", &weight[i]);
    }
    for(i=0;i<5;i++)
    {
        if(height[i]>170 && weight[i]<50)
        {
            printf("person = %d having height = %d and weight = %d",p[i],height[i],weight[i]);
        }
    }
    return 0;
}
