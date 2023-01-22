#include <bits/stdc++.h>
using namespace std;

int main()
{
    int posicao1, posicao2;
    scanf("%d %d", &posicao1, &posicao2);

    if ((posicao1 - 1) / 8 != (posicao2 - 1) / 8)
        printf("final\n");
    else if ((posicao1 - 1) / 4 != (posicao2 - 1) / 4)
        printf("semifinal\n");
    else if ((posicao1 - 1) / 2 != (posicao2 - 1) / 2)
        printf("quartas\n");
    else
        printf("oitavas\n");
    return 0;
}