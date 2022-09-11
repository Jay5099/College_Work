#include <stdio.h>
#include "1st_prac.h"

int main()
{
    int number;
    long fact;
    printf("Enter a number: ");
    scanf("%d", &number);

    fact = factorial(number);
    printf("Factorial of %d is %ld\n", number, fact);
    return 0;
}