#include <stdio.h>

int main()
{

    char c;
    int b = 0;

    while (scanf("%c", &c) != EOF)
    {
        if (c == '\"')
        {
            if (b == 0)
            {
                printf("``");
                b = 1;
            }
            else
            {
                printf("\'\'");
                b = 0;
            }
        }
        else
            printf("%c", c);
    }

    return 0;
}