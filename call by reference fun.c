// call by Reference

#include<stdio.h>
void swap(int*, int*);

int main()
{
    int a =10;
    int b =5;
    swap(&a,&b);
    printf("The Main Function Print below value:\n");
    printf("\n a=%d b=%d\n",a,b);

}

void swap (int* a,  int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    printf("The Swap Function print value below:\n");
    printf("a=%d b=%d\n",*a,*b);
}
