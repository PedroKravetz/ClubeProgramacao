#include <bits/stdc++.h>
using namespace std;

int continuarRoubando(int posicao, int ovelhasRoubadas, int quantidade)
{
    if (ovelhasRoubadas % 2 == 0)
        if (posicao - 1 < 0)
            return 0;
        else
            return 1;
    else if (posicao + 1 == quantidade)
        return 0;
    else
        return 1;
}

int main()
{
    int quantidade, posicao = 0, fazendasRoubadas = 0, aux;
    int *fazendas;
    long long *ovelhas;
    long long ovelhasSobrando = 0;
    scanf("%d", &quantidade);
    fazendas = (int *)malloc(quantidade * sizeof(int));
    ovelhas = (long long *)malloc(quantidade * sizeof(long long));
    for (int i = 0; i < quantidade; i++)
    {
        scanf("%d", &ovelhas[i]);
        fazendas[i] = 0;
    }

    while (continuarRoubando(posicao, ovelhas[posicao], quantidade))
    {
        aux = posicao;
        if (ovelhas[posicao] % 2 != 0)
            posicao++;
        else
            posicao--;
        if (ovelhas[aux] > 0)
        {
            ovelhas[aux] -= 1;
            fazendas[aux] = 1;
        }
    }

    if (ovelhas[posicao] > 0)
    {
        ovelhas[posicao] -= 1;
        fazendas[posicao] = 1;
    }

    for (int i = 0; i < quantidade; i++)
    {
        fazendasRoubadas += fazendas[i];
        ovelhasSobrando += ovelhas[i];
    }
    printf("%d %lld\n", fazendasRoubadas, ovelhasSobrando);

    return 0;
}