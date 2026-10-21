#include <stdio.h>

int main()
{

    // //while(cond)

    // int count = 0;

    // while(count < 5)
    // {
    //     printf("The statement executed for %d inside while loop\n", count+1);
    //     count++;
    // }


    int number = 1234;
    int count = 0;
    int rem=0;

    while (number != 0)
    {

        rem = number % 10; // 1
        count+=rem; //4+3+2+1 = 10
        number/=10; //0

    }

    printf("The count of the digits are: %d",count);
} 