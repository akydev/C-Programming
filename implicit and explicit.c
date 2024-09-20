// Implicit and Explicit Conversion Program.
#include<stdio.h>
int main()
{
    int a = 5;
    int b = 2;
    int div;
     //div = a / b ;
    //printf("Result = %d", div);
    float div1;
    //float a = 5;
    //float b = 2;
    //float div;
    //div = a / b;
    div = (float) a / b;
    printf("Result = %d", div);
        div1 = (float) a / b;
    printf("Result = %f", div1);

    return 0;
}
