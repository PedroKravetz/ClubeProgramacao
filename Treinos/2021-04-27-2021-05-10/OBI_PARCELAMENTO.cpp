#include <bits/stdc++.h>
using namespace std;

int main()
{
    int valor, parcelas, controle, aux;
    scanf("%d %d", &valor, &parcelas);
    if (valor % parcelas == 0)
    {
        aux = valor / parcelas;
        while (parcelas > 0)
        {
            parcelas--;
            printf("%d\n", aux);
        }
    }
    else
    {
        controle = valor % parcelas;
        aux = valor / parcelas + 1;
        while (controle > 0)
        {
            controle--;
            parcelas--;
            printf("%d\n", aux);
        }
        aux--;
        while (parcelas > 0)
        {
            parcelas--;
            printf("%d\n", aux);
        }
    }
    return 0;
}