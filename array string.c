// Array with String.
#include<stdio.h>
int main()
{
    int i;
    char st[5] = {'h','e','l','l','o',NULL};
    char st1[]="Hello world";
    printf("%s \n",st);
    printf("%s \n",st1);
    for(i=0;i<5; i++)
    {
       printf("%c\n",st[i]);

    }
    for(i=0; st1[i]!=NULL; i++)
    {
       printf("%c",st1[i]);
    }

    return 0;
}
