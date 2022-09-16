#include <stdio.h>
#include <string.h>
#include "mystring.h"

int main()
{
    char str[1000], sub_str[1000];
    int i;
    printf("Enter the sting: ");
    scanf("%s", str);
    printf("Enter the sub-sting: ");
    scanf("%s", sub_str);

    int res = check_str(str, sub_str);
    if (res == -1)
        printf("Not present %d", res);
    else
        printf("Present at index %d", res);
    return 0;
}