// Using math Header file.
#include<stdio.h>
#include<Math.h>

int main()
{
    int a = 25;
    a= sqrt(a);
    printf("The Square root of a = %d \n", a);

    float b=25.68;
    b = floor(b);
    printf("The Floor value of b= %f\n", b);

    float c=25.68;
    c = ceil(c);
    printf("The Floor value of b= %f\n", c);

    float d=25.68;
    d = abs(d);
    printf("The Floor value of b= %f\n", d);

    int result;
    int base=2,  power=3;
    result = pow (base,power);
    printf("The Floor value of b= %d\n", result );


    return 0;
}
