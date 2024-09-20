//write a program to convert temperature celcius to fahrenheit and fahrenheit to celcius.
#include<stdio.h>
int main()
{
    float F, C, result;

    printf("Enter The Temperature In Celcisu C : ");
    scanf("%f",&C);

    result = (C*9/5) + 32;
    printf("Result in Fahrenheit F = %f\n", result);

    printf("Enter The Temperature In Fahrenheit F: ");
    scanf("%f", &F);

    result = (F-32) * 5/9;
    printf(" Result in Celcius C = %f", result);

    return 0;
}
