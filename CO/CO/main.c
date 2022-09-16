
#include<stdio.h>
#include"bin.h"

int main(){
    
    int n=2*8;
    char s1[n+1];
    char s2[n+1];
    printf("Enter one binary string \n");
    gets(s1);
    printf("Enter second binary string \n");
    gets(s2);
    addition_unsigned_binary_numbers_U21CS133(s1,s2,n);
    printf("s1: %s\ns2: %s\n",s1,s2);
    addition_signed_binary_numbers_U21CS133(s1,s2,n);
    return 0;
}
