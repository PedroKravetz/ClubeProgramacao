#include <bits/stdc++.h>
using namespace std;

#define MAX 112345

int p[MAX], posicao, q[MAX], m[MAX], k;

void sieve(int n)
{
    p[0] = 2;
    posicao = 1;
    for (int i = 3; i <= n; i++)
    {
        int primo = 1, raiz = sqrt(i);
        for (int j = 0; j < posicao && p[j] <= raiz && primo; j++)
            primo &= i % p[j] != 0;
        if (primo)
            p[posicao++] = i;
    }
}

void fact(int n)
{
    k = 0;
    for (int i = 0; i < posicao && p[i] * p[i] <= n; i++)
        if (n % p[i] == 0)
        {
            q[k] = p[i];
            m[k] = 0;
            while (n % p[i] == 0)
            {
                m[k]++;
                n /= p[i];
            }
            k++;
        }
    if (n > 1)
    {
        q[k] = n;
        m[k] = 1;
        k++;
    }
}

int main(void)
{
    int n, first;
    sieve(MAX);
    while (scanf("%d", &n), n)
    {
        fact(abs(n));
        printf("%d =%s", n, n < 0 ? " -1" : "");
        first = n > 0;
        for (int i = 0; i < k; i++)
            for (int j = 0; j < m[i]; j++)
            {
                printf("%s%d", first ? " " : " x ", q[i]);
                first = 0;
            }
        printf("\n");
    }
    return 0;
}