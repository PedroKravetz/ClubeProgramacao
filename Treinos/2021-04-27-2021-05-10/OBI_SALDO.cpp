#include <bits/stdc++.h>
using namespace std;

int main()
{
    int movimentacao, saldo, menor, aux;
    scanf("%d %d", &movimentacao, &saldo);
    menor = saldo;
    while (movimentacao > 0)
    {
        movimentacao--;
        scanf("%d", &aux);
        saldo = saldo + aux;
        if (saldo < menor)
            menor = saldo;
    }
    printf("%d\n", menor);
    return 0;
}