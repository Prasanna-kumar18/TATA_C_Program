#include <stdio.h>

int main()
{
    int a= 10;
    float b = 20.5;
    char c = 'c';

    void *ptr;  //Void Pointer

    ptr = &a;

    printf("The value of ptr is %d\n",*(int*)ptr);

    ptr = &b;

    printf("The value of ptr is %f\n",*(float*)ptr);

    ptr = &c;

    printf("The value of ptr is %c\n",*(char*)ptr);

}