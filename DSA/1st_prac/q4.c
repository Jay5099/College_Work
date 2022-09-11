#include <stdio.h>
#include <string.h>
#include "mystring.h"

int main()
{
    char str1[1000], str2[1000];
    printf("Enter the 1st sting: ");
    scanf("%s", str1);
    printf("Enter the 2st sting: ");
    scanf("%s", str2);
    compare_str(str1, str2);
    return 0;
}