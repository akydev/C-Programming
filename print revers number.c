//write a program to print revers number which is given by user.
#include<stdio.h>
int main()
{
    int num,digit;
   // int i = 0;

    printf("Enter a number : ");
    scanf("%d",&num);

    while( num > 0){
       digit = num % 10;
       num = num /10;
       printf("%d",digit);
    }



    return 0;
}
