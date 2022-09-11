// first_program

int find_length(char str[1000])
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
        ;
    printf("The length of the string is :%d", i);
    return i;
}

// 2nd program
void concate_str(char str1[1000], char str2[1000])
{
    char concated_str[2000];
    int l1 = 0, l2 = 0, k = 0;
    for (l1 = 0; str1[l1] != '\0'; l1++)
        ;
    for (l2 = 0; str2[l2] != '\0'; l2++)
        ;
    for (k = 0; k < l1; k++)
    {
        printf("%c", str1[k]);
    }
    for (k = 0; k < l2; k++)
    {
        printf("%c", str2[k]);
    }
}

// 3rd program

void copy_str(char str1[1000], char str2[1000])
{
    int l1, i;
    for (l1 = 0; str1[l1] != '\0'; l1++)
        ;

    for (i = 0; i < l1; i++)
    {
        str2[i] = str1[i];
    }
    printf("The 2nd string is: ");
    for (i = 0; i < l1; i++)
    {
        printf("%c", str2[i]);
    }
}

// 4th pragram

void compare_str(char str1[], char str2[])
{
    int l1 = 0, l2 = 0, k = 0, temp = 0;
    for (l1 = 0; str1[l1] != '\0'; l1++)
        ;
    for (l2 = 0; str2[l2] != '\0'; l2++)
        ;
    if (l2 == l1)
    {
        for (k = 0; k < l1; k++)
        {

            if (str1[k] == str2[k])
            {
                continue;
            }
            else
            {
                printf("\nstrings are not equal...\n");
                return;
            }
        }
        printf("Strings are equal...");
    }
}
// 5th program

void find_occur(char str[])
{
    int l1, i = 0;
    char c;
    printf("Enter the word want you find: ");
    scanf(" %c", &c);
    for (l1 = 0; str[l1] != '\0'; l1++)
        ;
    for (i = 1; i < l1; i++)
    {
        if (str[i] == c)
        {

            printf("The occur is  at %d", i + 1);
            break;
        }
    }
    if (str[i] == '\0')
    {
        printf("The %c is not found!!", c);
    }
}

// 6th program

void check_str()
{
}

// 7th program
void reverse_str(char str[])
{
    int l1, i;
    char str_r[1000];
    for (l1 = 0; str[l1] != '\0'; l1++)
        ;
    for (i = 0; i < l1 + 1; i++)
    {
        str_r[i] = str[l1 - i];
        printf("%c", str_r[i]);
    }
}

// 8th program
void change_str(char str[])
{
    int l1, i;
    char str_changed[1000];
    for (l1 = 0; str[l1] != '\0'; l1++)
        ;
    for (i = 0; i < l1; i++)
    {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
        {
            printf("*");
        }
        else
        {
            printf("#");
        }
    }
}