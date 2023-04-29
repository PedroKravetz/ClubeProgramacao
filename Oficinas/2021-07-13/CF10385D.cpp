#include <bits/stdc++.h>
using namespace std;

int caixas[112345];

int main()
{
    int n, controle, soma = 0, aux;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &controle);
        caixas[controle] += 1;
        aux = controle;
        while (caixas[aux] == 2)
        {
            caixas[aux] = 0;
            aux++;
            caixas[aux] += 1;
        }
    }
    for (int i = 0; i < n + 1; i++)
    {
        soma = soma + caixas[i];
    }
    if (soma < 3 && n != 1)
        printf("Y\n");
    else
        printf("N\n");
    return 0;
}