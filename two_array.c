#include <stdio.h>

int main()
{

    // int arr[2][3] = {{1,7,3},{8,4,2}};

    // for(int i=0;i<2;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         printf("%d\t",arr[i][j]);
    //     }
    //     printf("\n");
    // }


    int arr[3][3];

    printf("Enter the element of 3x3 matrix: ");

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",arr[i][j]);
        }
    }
}