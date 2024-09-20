// write a program to find simple interest.
#include<stdio.h>
int main()
{
    //where (I) is the interest.
    // where (P) is the principal amount ( amount of money).
    // r is the annual interest rate.
    // t is the time in years.

     int I, P,r,t;

     printf("Enter the principal amount P: ");
     scanf("%d",&P);

     printf("Enter the annual interest rate r: ");
     scanf("%d",&r);

     printf("Enter the time in years t: ");
     scanf("%d",&t);

     I = (P * r * t)/100;

     printf("Simple Interest I = %d",I);
    return 0;
}
