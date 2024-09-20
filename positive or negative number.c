//Positive number or Negative number program.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    printf("Your entered number is = %d\n",n);
    if(n>=0)
    {
        printf("Entered Number Is Positive.",n);
    }
    else{
        printf("Entered Number is Negative.",n);
    }
    return 0;
}
