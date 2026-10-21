#include <stdio.h>

int main()
{
    int val_1, val_2, val_3;

    // //Simple if condition

    printf("Enter three numbers: ");
    scanf("%d%d%d",&val_1, &val_2, &val_3);

    // if (val_1 > val_2)
    // {
    //     printf("The value %d is greater",val_1);
    // }

    //if else

    // if (val_1 > val_2)
    // {
    //     printf("The value %d is greater",val_1);
    // }
    // else
    // {
    //     printf("The value %d is greater",val_2);
    // }

    //Nested if

    if (val_1 > val_2) 
    {
        if(val_1 > val_3)
        { 
            printf("The value1 %d is greater",val_1);
        }
        else
        {
            printf("The value3 %d is greater",val_3);
        }
    }
    else if (val_2 > val_3)
    {
        printf("The value2 %d is greater",val_2);
    }
    else
    {
        printf("The Value3 %d is greater",val_3);
    }

    return 0;

}