#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);

int main()
{

    int (*ptr[3])(int, int);

    ptr[0] = add;
    ptr[1] = sub;
    ptr[2] = mul;

    ptr[0](10,5);
    ptr[1](25,5);
    ptr[2](3,2);
}

int add(int a,int b)
{
    printf("The addition of two numbers is %d\n",a+b);
}

int sub(int a, int b)
{
    printf("The subtraction of two numbers is %d\n",a-b);
}

int mul(int a, int b)
{
    printf("The Multiplication of two numbers is %d\n",a*b);
}