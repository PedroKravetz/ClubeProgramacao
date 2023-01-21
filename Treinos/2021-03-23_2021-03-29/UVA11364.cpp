#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testes, quantidade, maior, menor, aux;
    scanf("%d", &testes);
    while (testes > 0)
    {
        maior = -1;
        menor = 101;
        testes--;
        scanf("%d", &quantidade);
        while (quantidade > 0)
        {
            quantidade--;
            scanf("%d", &aux);
            if (aux > maior)
                maior = aux;
            if (aux < menor)
                menor = aux;
        }
        printf("%d\n", (maior - menor) * 2);
    }
    return 0;
}