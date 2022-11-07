#include <stdio.h>

void printbit(unsigned int a)
{
    static int flag=0;
    if(flag!=32)
    {
        ++flag;
        printbit(a/2);
        printf("%d",a%2);
        --flag;
        if(flag==31 || flag==23)
            putchar(' ');
        if(flag==0)
            printf("\n");
    }
}

void printfloat(float x)
{
    unsigned int *p=(unsigned int *)&x;
    printbit(*p);
}

int main()
{
    float num;
    printf("Enter a number in decimal : ");
    scanf("%f",&num);
    
    printfloat(num);
    
    return 0;
}