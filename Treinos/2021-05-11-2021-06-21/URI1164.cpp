#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, soma, numero, controle;
    scanf("%d", &n);
    while (n > 0)
    {
        n--;
        controle = 1;
        soma = 0;
        scanf("%d", &numero);
        while (controle < numero)
        {
            if (numero % controle == 0)
                soma = soma + controle;
            controle++;
        }
        if (soma == numero)
            printf("%d eh perfeito\n", numero);
        else
            printf("%d nao eh perfeito\n", numero);
    }
    return 0;
}