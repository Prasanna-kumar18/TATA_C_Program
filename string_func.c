#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] = "Embedded";
    char str2[50] = "Systems";
    char str3[50];

    strcpy(str3, str1);
    printf("strcpy()  : str3 = %s\n", str3);

    printf("strcmp()  : %d\n", strcmp(str1, str2));

    printf("strlen()  : %d\n", strlen(str1));

    strncpy(str3, str2, 3);
    str3[3] = '\0';  
    printf("strncpy() : str3 = %s\n", str3);

    printf("strncmp() : %d\n", strncmp("Embedded", "Embed", 5));

    strcat(str1, " ");
    strcat(str1, str2);
    printf("strcat()  : str1 = %s\n", str1);

    char *ptr = strstr(str1, "bed");
    if (ptr != NULL)
    {
        printf("strstr()  : Substring found = %s\n", ptr);
    }
    else
    {
        printf("strstr()  : Substring not found\n");
    }
    return 0;
}
```
