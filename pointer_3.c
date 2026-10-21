#include <stdio.h>

int main()
{

    // int arr[5] = {1,2,3,4,5};

    // printf("The address of arr is %d\n",&arr);

    // printf("The address of arr[0] is %d\n", &arr[1]);

    // int *ptr = arr; //Address

    // *ptr = 10;  //value to that pointing address

    // printf("The value of ptr is %d\n",ptr);


    int arr[5] = {12,21,33,47,58};

    int *ptr = arr;

    // printf("The ptr value is %d\n",ptr+1);    //Address of 2
    // printf("The *ptr value is %d\n",*ptr+1);  //2

    // for(int i=0;i<5;i++)
    // {
    //     printf("The value of %d is %d\n",ptr+i,*(ptr+i));
    // }
    int i=0;
    while(i<5)
    {
        printf("The value is %d\n",*(ptr++));
        i++;
    }
}