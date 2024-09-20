//Scanf and gets fun for strings
#include<stdio.h>
int main()
{
    char st[16];
    printf("Enter A string: ");
    //scanf("%[^\n]s",st);
    scanf("%s",st);
    printf("Your String :%s\n",st);

    return 0;
}
