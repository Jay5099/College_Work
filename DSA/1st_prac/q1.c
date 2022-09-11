#include<stdio.h>
#include<string.h>
#include"mystring.h"

int main(){
    char str[1000];
    int i;
    printf("Enter the sting: ");
    gets(str);
    i = find_length(str);
    printf("The length of the string is :%d",i);
    return 0;
}