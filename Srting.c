#include<stdio.h>
int main()
{
    char st[] = "hello World";
    int i;
    int count = 0;
    for(i=0; st[i]!=NULL; i++)
    {
       // printf("Hello");
        if(st[i]== 'a'|| st[i]== 'e' || st[i]== 'i' || st[i]== 'o' || st[i]== 'u' )
            count++;
    }
    printf("%d",count);
    return 0;
}
