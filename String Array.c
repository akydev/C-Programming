// Array with String.
#include<stdio.h>
int main()
{
    int n,i,j;
    char st[10];
    printf("Enter a string value: ");
    scanf("%d",&n);
    for(i=1;i<10; i++)
    {
        scanf("%c",&st[i]);
    }
    printf("%s",st);

    return 0;
}
