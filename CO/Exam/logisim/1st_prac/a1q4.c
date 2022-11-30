#include <stdio.h>
#include <string.h>
#include "1st_prac.h"
int main()
{
    int n;
    char str1[100], str2[100];
    printf("Enter the first binary number\n");
    scanf("%s", str1);
    printf("Enter the second binary number\n");
    scanf("%s", str2);
    addition_unsigned_binary_num_U21CS129(str1, str2, strlen(str1), strlen(str2));
    return 0;
}
