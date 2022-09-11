#include <math.h>
// 1st Question//

int binary(int num)
{
    int i = 0, j = 0;
    int b_num[20];
    for (i = 0; num != 0; i++)
    {
        b_num[i] = num % 2;
        num /= 2;
    }

    printf("The given number is : ");
    j = i;
    for (i = 0; i < j; i++)
    {
        printf("%d", b_num[j - i - 1]);
    }
    printf("\n");
    return 0;
}

// 2nd Question//

int decimal(int bin)
{
    int i = 0, dec_num = 0, bin_arr[100];
    if (bin == 0)
    {
        dec_num = 0;
    }
    else
    {
        for (i = 0; bin != 0; i++)
        {
            bin_arr[i] = bin % 10;
            bin /= 10;
            // printf("%d ", bin_arr[i]);

            dec_num += bin_arr[i] * pow(2, i);
        }
        printf(" The decimal number is : %d ", dec_num);
    }
    return 0;
}

// 3rd Question

long factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return (n * factorial(n - 1));
}

// 4th Question

long long int btod(int a[], int k)
{
    int t = k;
    int i = 0;
    long long int v = 0;
    for (i = 0; i <= k; i++)
    {
        v += pow(2, t) * a[i];
        t--;
    }
    return v;
}

void addition_unsigned_binary_numbers_U21CS129(char s1[], char s2[], int l, int m)
{
    int a[100], b[100], c[100], i, j, k;
    for (i = 0; i < l; i++)
    {
        a[i] = s1[i] - 48;
    }
    for (i = 0; i < m; i++)
    {
        b[i] = s2[i] - 48;
    }
    int x = btod(a, strlen(s1) - 1);
    int y = btod(b, strlen(s2) - 1);
    int z = x + y;
    dtob4(z);
}
void dtob4(int x)
{
    int y = x;
    int a[100];
    int k, i = 0;
    while (y != 0)
    {
        int temp = y % 2;
        a[i] = temp;
        y = y / 2;
        i++;
    }
    printf("The addition of two unsigned binary is -->");
    for (k = i - 1; k >= 0; k--)
    {
        printf("%d", a[k]);
    }
    printf("<-----And in decimal its value is %d\n", x);
}

// 5th q

void addition_signed_binary_numbers_U21CS129(char s1[], char s2[], int m, int n)
{
    int flag1 = 0, flag2 = 0;
    if (s1[0] == '1')
    {
        flag1 = 1;
    }
    if (s2[0] == '1')
    {
        flag2 = 1;
    }
    int a[100], b[100];
    int i, j = 0, k = 0;
    {
    }
    for (i = 1; i < 8; i++)
    {
        a[j] = s1[i] - 48;
        j++;
    }
    for (i = 1; i < 8; i++)
    {
        b[k] = s2[i] - 48;
        k++;
    }
    int d1 = btod(a, j - 1);
    int d2 = btod(b, k - 1);
    if (flag1 == 1)
    {
        d1 *= -1;
    }
    if (flag2 == 1)
    {
        d2 *= -1;
    }
    int d3 = d1 + d2;
    printf("The addition of two signed binary is -->");
    dtob5(d3);
}
void dtob5(int x)
{
    int y = x;
    if (y > 0)
    {
        printf("0");
    }
    else
    {
        y *= -1;
        printf("1");
    }
    int a[100];
    int k, i = 0;
    while (y != 0)
    {
        int temp = y % 2;
        a[i] = temp;
        y = y / 2;
        i++;
    }
    for (k = i - 1; k >= 0; k--)
    {
        printf("%d", a[k]);
    }
    printf("<-----And in decimal its value is %d\n", x);
}