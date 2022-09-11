#include <stdio.h>
#include <string.h>
#include "mystring.h"

int main()
{
    char str[1000];
    int i;
    printf("Enter the sting: ");
    scanf("%s", str);
    change_str(str);
    return 0;
}