#include <stdio.h>

int main()
{

    int a = 10;

    int *b = &a;    //Pointer variable

    *b = 20;

    printf("The value of a is %d\n",a);
    printf("The address of a is %d\n",&a);
    printf("The value of b is %d\n",b);
    printf("The value of a from b is %d\n",*b); //Deferencing
}