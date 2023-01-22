#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    scanf("%c", &c);
    while (c != '\n')
    {
        if ((c > 47 && c < 58) || c == 45)
            printf("%c", c);
        else if (c > 64 && c < 68)
            printf("2");
        else if (c > 67 && c < 71)
            printf("3");
        else if (c > 70 && c < 74)
            printf("4");
        else if (c > 73 && c < 77)
            printf("5");
        else if (c > 76 && c < 80)
            printf("6");
        else if (c > 79 && c < 84)
            printf("7");
        else if (c > 83 && c < 87)
            printf("8");
        else if (c > 86 && c < 91)
            printf("9");
        scanf("%c", &c);
    }
    printf("\n");
    return 0;
}