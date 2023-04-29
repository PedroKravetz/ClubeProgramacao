#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, controle = 0, flag = 1;
    char c;
    scanf("%d", &n);
    n--;
    scanf(" %c", &c);
    if (c == '*')
        flag = 0;
    else if (c == '|')
        controle = !controle;
    while (n > 0)
    {
        n--;
        scanf("%c", &c);
        if (c == '*')
            if (controle == 1)
                break;
            else
            {
                flag = 0;
                break;
            }
        if (c == '|')
            controle = !controle;
    }
    printf("%s\n", flag ? "in" : "out");
    return 0;
}