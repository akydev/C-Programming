// Write a program to print multiplication table of given number.
#include<stdio.h>
int main ()
{
   int i = 1;
   int num, result;
   printf("Enter a number for a table.");
   scanf("%d", &num);
   for( i = 1; i <= 10; i++)
   {
        result = num * i;

        printf("Multiplication of given number in form of table %d * %d = %d\n",num, i, result);

   }
    return 0;
}
