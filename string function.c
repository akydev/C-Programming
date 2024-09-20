// String Function...
#include<stdio.h>
#include<STRING.h>
int main()
{
    int result;
    char st[]= "Hello World";

    result= strlen(st);
    printf("String Length = %d\n", result);

    char str1[] = "Hello";
    char str2[] = "Hey";

    result = strcmp(str1,str2);
    printf("String Cmp = %d\n", result);

    char str3[]="Hello";
    char str4[]="World";
    strcat(str3,str4);
    printf("The Concatenated String :%s\n", str3);

    char str5[]="You Are";
    char str6[]="Awesome";
    strcpy(str5,str6);
    printf("The Copy String:%s\n",str5);

    char str7[16]="Hi How Are you?";
    char *ptr=strchr(str7,'A');
    printf("The First occurrence: %s \n",ptr);

    char str8[]="The World Is Awesome";
    char str9[]="World";
    char *ptr2=strstr(str8,str9);
    printf("First occurrence of second string in the first String: %s\n",ptr2);

    char str10[]="HELLO";
    char str11[]="hello";
    int result2 = strcasecmp(str10,str11);
    printf("Case comparison: %d \n",result2);


    return 0;
}
