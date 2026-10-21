#include <stdio.h>

// //No Argument, No return

// void display(); //Funtion Declaration

// int main()
// {

//     display();  //Function calling

//     printf("This is printing from main funtion\n");

// }

// void display()  //Funtion Definition
// {
//     printf("This is printing from display funtion\n");
// }

// //No Argument, with return

// int add();

// int main()
// {
//     int result;

//     result = add();

//     printf("The adddition of two values are %d",result);

//     return 0;

// }

// int add()
// {
//     int a, b;

//     printf("Enter the value of a and b: ");
//     scanf("%d%d",&a,&b);

//     return a+b;
// }

// //With Argument, No return

// void sub(int , int );

// void main()
// {
//     int val_1, val_2;

//     printf("Enter the two values: ");
//     scanf("%d%d",&val_1,&val_2);

//     sub(val_1, val_2);  //Function calling with Argument
// }

// void sub(int a, int b)
// {
//     printf("The subtraction of two values are %d",a-b);
// }

//With Argument, with Return.

int greatest(int , int );

int main()
{
    int a, b;

    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);

    int result = greatest(a, b);

    printf("The Greatest number is %d",result);

    return 0;
}
int greatest(int a, int b)
{
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}