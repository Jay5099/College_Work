#include <stdio.h>
int main()
{
    int i = 0, n = 200;
    char c = 0;
    for (i = 0; i < n; i++, c++)
    {
        if (c == '9')
        {

            printf("\n");
            printf("%c\n", c);
            printf("%c\n", i);
        }
        else
        {
            continue;
        }
    }
    return 0;
}