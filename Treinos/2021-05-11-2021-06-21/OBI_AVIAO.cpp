#include <bits/stdc++.h>
using namespace std;

int main()
{
    int fileiras, assentos, numeroEconomica, posicao, controle = 1;
    scanf("%d %d %d %d", &fileiras, &assentos, &numeroEconomica, &posicao);
    while (numeroEconomica <= fileiras)
    {
        posicao--;
        if (posicao == 0)
            break;
        controle++;
        if (controle == assentos + 1)
        {
            controle = 1;
            numeroEconomica++;
        }
    }
    if (numeroEconomica > fileiras)
        printf("PROXIMO VOO\n");
    else
        printf("%d %c\n", numeroEconomica, controle + 'A' - 1);
    return 0;
}