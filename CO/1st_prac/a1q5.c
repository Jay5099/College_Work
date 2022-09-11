#include <stdio.h>
#include "1st_prac.h"
#include <string.h>
int main()
{
    int n;
    char s1[100], s2[100];
    printf("Enter the first binary number\n");
    gets(s1);
    printf("Enter the second binary number\n");
    gets(s2);
    addition_signed_binary_numbers_U21CS129(s1, s2, strlen(s1), strlen(s2));
    return 0;
}