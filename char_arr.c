#include <stdio.h>

int main()
{
    // char name[10] = {'p','r','o','g','r','a','m','\0'};


    // for (int i=0;name[i]!='\0';i++)
    // {
    //     printf("%c",name[i]);
    // }

    // return 0;

    // char name[] = "program";

    // printf("%s\n",name);

    // printf("%c",name[2]);


    // char name[10];

    // printf("Enter the name: ");
    // scanf("%10s",name);
    // printf("The name is %s",name);

    // return 0;

    char name[10];

    printf("Enter the name: ");
    // gets(name);
    fgets(name,sizeof(name),stdin);
    printf("The name is %s",name);

}