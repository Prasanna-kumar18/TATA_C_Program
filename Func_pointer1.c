#include <stdio.h>

void display();

int main()
{

    void(*ptr)();

    ptr = display;

    ptr();  //Function pointer call


}

void display()
{
    printf("This is printing from display function");
}