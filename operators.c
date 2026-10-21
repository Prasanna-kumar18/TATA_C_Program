#include <stdio.h>
#include <stdint.h>

int main()
{
    //Arithmetic (+, -, *, /, ++, --)

    int val_1;
    int val_2;
    int Result;
    //int8_t f;

    printf("Enter two values: ");
    scanf("%d%d",&val_1,&val_2);

    // printf("The addition of two numbers is: %d\n",val_1 + val_2);
    // printf("The Sub of two numbers is: %d\n",val_1 - val_2);
    // printf("The Mul of two numbers is: %d\n",val_1 * val_2);
    // printf("The Div of two numbers is: %d\n",val_1 / val_2);


    // printf("The post-Increment of first number is: %d\n",val_1++);
    // printf("The new post-Increment of first number is: %d\n\n",val_1);
    

    // printf("The pre-Increment of second number is: %d\n",++val_2);
    // printf("The new pre-Increment of second number is: %d\n",val_2);


    // Logical Operators (&&, ||, ^)

    //printf("The Logical AND of val1 & val2 is %d\n", val_1 && val_2);
    // printf("The Logical OR of val1 & val2 is %d", val_1 || val_2);

    //Bitwise Operators (&, |, ~, <<, >>)

    // printf("The bitwise AND of two numbers is %d\n",val_1 & val_2);
    // printf("The bitwise OR of two numbers is %d\n",val_1 | val_2);
    // printf("The bitwise EX-OR of two numbers is %d\n",val_1 ^ val_2);
    // printf("The 2 left shift of val1 is %d", val1 << 2);
    //printf("The ~ of value 1 is %d",~f);

    // //Relational Operators (>, <, ==, >=, <=, !=) 10 , 8

    // printf("For Greater operator %d\n", val_1 > val_2);
    // printf("For Lesser operator %d\n", val_1 < val_2);
    // printf("For equal operator %d\n", val_2 = ++val_1);
    // printf("For Greater or equal operator %d\n", val_1 >= val_2);
    // printf("For lesser or equal operator %d\n", val_1 <= val_2);
    // printf("For not equal operator %d\n", val_1 != val_2);

    //Assignment Operator

    val_1 += 5; //val_1 = val_1 + 5;

    val_2 *= 2;  // val_2  = val_2 * 2;

    Result = val_1 + val_2;

    printf("The output of Result = %d, val_1 = %d and val_2 =%d", Result, val_1, val_2);

    //Ternery Operator

    //Syntax --> (cond)?(true):(false)



    return 0;

}