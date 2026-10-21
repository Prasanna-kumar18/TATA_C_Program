#include <stdio.h>

int square(int a);
int multiply(int a, in b);

int main()
{

    int sq_r, mul_r;

    int (*ptr)(int,int);

    ptr = add;

    sq_r = ptr(10);

    ptr = multiply;

    mul_r = ptr(10,2);

    printf("The square of two  values is %d\n",sq_r);
    printf("The Multiply of two  values is %d\n",mul_r);
}

int add(int a)
{
    return a+b;
}

int multiply(int a, in b)
{
    return a*b;
}