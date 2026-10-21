#include <stdio.h>

int main()
{

    int val_1, val_2;
    int choice;

    printf("Enter two numbers: ");
    scanf("%d%d",&val_1, &val_2);

    printf("Enter 1.Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n Enter the choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("The addition of two numbers is %d",val_1 + val_2);
            break;
        case 2:
            printf("The Subtraction of two numbers is %d",val_1 - val_2);
            break;
        case 3:
            printf("The Multiplication of two numbers is %d",val_1 * val_2);
            break;
        case 4:
            printf("The Division of two numbers is %d",val_1 / val_2);
            break;
        default:
            printf("Invalid Number, Enter proper choice");
            break;
    }

    return 0;
}