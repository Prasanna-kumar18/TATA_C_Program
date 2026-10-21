#include <stdio.h>
#include <string.h>

typedef struct
{
    int Id_no;
    char Name[20];
    float Height;
} classroom;

int main()
{

    classroom c1;    //c1 is object of structure classroom

    c1.Id_no = 100;
    c1.Height = 178.5;
    strcpy(c1.Name,"Prasanna");

    printf("The Id no is %d\n",c1.Id_no);
    printf("The Name is %s\n",c1.Name);
    printf("The height is %.2f\n",c1.Height);
}