#include <stdio.h>

void add(int , int );

int main()
{

        void (*ptr)(int, int);

        ptr = add;

        ptr(10,20);
}

void add(int a, int b)
{
    printf("The sum of two numbers is %d",a+b);
}