#include <stdio.h>
#include <string.h>
#include "mystring.h"

int main()
{
    char str1[1000], str2[1000];
    char x[2000];
    int i;
    printf("Enter the 1st sting: ");
    scanf("%s", str1);
    printf("Enter the 2st sting: ");
    scanf("%s", str2);
    // printf("%s",concate_str(str1,str2));
    printf("String: ");
    concate_str(str1, str2);
    // printf("%s", x);
    return 0;
}