#include <stdio.h>

int main()
{
    // int arr[5] = {1,2,3,4,5};

    // for(int i=0;i<5;i++)
    // {
    //     printf("%d,",arr[i]);
    //     // printf("Address is %d\n",&arr[i]);
    // }

    // arr[3] = 10;
    // printf("After the change\n");
    // for(int i=0;i<5;i++)
    // {
    //     printf("Value is %d\n",arr[i]);
    //     printf("Address is %d\n",&arr[i]);
    // }


    // int arr[5];

    // printf("Enter 5 values of an array ");
    // for(int i=0;i<5;i++)
    // {
    //     scanf("%d",&arr[i]);
    // }
    // printf("The values in reverse are: \n");
    // for(int i=4;i>=0;i--)
    // {
    //     printf("%d\n",arr[i]);
    // }


    // int arr[] = {1,5,7,8,4,8,90,0,5,3,5,7,9,0,32,98,6,4,3,43,564,76,88,22,345,7};

    // int no_of_ele=0;

    // no_of_ele = sizeof(arr)/sizeof(arr[0]);


    // printf("The size of array is %d\n",sizeof(arr));
    // printf("The number of Elements in arr is %d",no_of_ele);


    //Program to insert an element in any position

    int arr[5] = {2,5,4,8,9};   //2,5,10,4,8,9

    for(int i=0;i<5;i++)
    {
        printf("arr[%d] is %d\n",i,arr[i]);
    }

    for(int i=5;i>2;i--)
    {
        arr[i] = arr[i-1];
    }

    arr[2] = 10;

    printf("After inserting: \n");

    for(int i=0;i<6;i++)
    {
        printf("arr[%d] is %d\n",i,arr[i]);
        //printf("Address is %d\n",&arr[i]); 
    }
}