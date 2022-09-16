#include <stdio.h>
#include <string.h>
#include "mystring.h"

int main()
{
    char str1[1000], str2[1000], x[2000];
    printf("Enter the sting: ");
    scanf("%s", str1);
    printf("the copied sting is: ");
    copy_str(str1, str2);
    // printf("<--[ %s ]-->", );
    return 0;
}