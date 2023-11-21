#include <stdio.h>

int main()
{

    char a[30], b[30];

    int i, ind = 0, len1 = 0, len2 = 0;

    printf("Enter the string1: ");
    fgets(a, sizeof(a), stdin);

    printf("Enter the string2: ");
    fgets(b, sizeof(b), stdin);

    i = 0;
    while (a[i] != '\0')
    {
        len1++;
        i++;
    }

    i = 0;
    while (b[i] != '\0')
    {
        len2++;
        i++;
    }

    if (len1 != len2)
    {
        ind = 1;
    }

    else if (len1 == len2)
    {
        for (i = 0; i < len1; i++)
        {
            if (a[i] == b[i])
            {
                ind = 0;
            }
            else
            {
                ind = 1;
            }
        }
    }

    if (ind == 1)
    {
        printf("Strings are not equal\n");
    }

    else
    {
        printf("Strings are equal\n");
    }

    return 0;
}
