#include <bits/stdc++.h>
using namespace std;

char c[200000];

int main()
{
    int n, controle = 0, soma = 0;
    char s;
    scanf("%d ", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%c", &s);
        c[i] = s;
    }
    for (int i = 0; i < n; i++)
    {
        if (c[i] == 'o')
            soma++;
        else
        {
            if (soma > controle)
                controle = soma;
            soma = 0;
        }
    }
    for (int i = n - 1; i > -1; i--)
    {
        if (c[i] == 'o')
            soma++;
        else
        {
            if (soma > controle)
                controle = soma;
            soma = 0;
        }
    }
    printf("%d\n", controle == 0 ? -1 : controle);
    return 0;
}