#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll alfabeto[26];

ll fatorial(ll num)
{
    if (num == 1 || num == 0)
        return 1;
    return (fatorial(num - 1) * num) % 1000000007;
}

int main()
{
    char c;
    ll soma = 0, resultado;
    while (scanf("%c", &c) != EOF)
    {
        if (c == '\n')
        {
            resultado = fatorial(soma);
            for (int i = 0; i < 26; i++)
            {
                resultado /= fatorial(alfabeto[i]);
                alfabeto[i] = 0;
            }
            printf("%lld\n", resultado % 1000000007);
            soma = 0;
        }
        else
        {
            soma++;
            alfabeto[c - 65] += 1;
        }
    }
    return 0;
}