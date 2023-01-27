#include <bits/stdc++.h>
using namespace std;

int main()
{
    int jogos, pontos, vitorias, empates, derrotas, flag = -1;
    scanf("%d %d %d %d %d", &jogos, &pontos, &vitorias, &empates, &derrotas);
    if (derrotas < 0 && jogos < 0)
    {
        derrotas = 0;
        jogos = vitorias + empates;
        flag = 1;
    }
    while (flag != 1)
    {
        if (jogos < 0 && vitorias > -1 && empates > -1 && derrotas > -1)
            jogos = vitorias + empates + derrotas;
        if (vitorias < 0 && jogos > 0 && empates > -1 && derrotas > -1)
            vitorias = jogos - empates - derrotas;
        if (empates < 0 && jogos > 0 && vitorias > -1 && derrotas > -1)
            empates = jogos - vitorias - derrotas;
        if (derrotas < 0 && jogos > 0 && vitorias > -1 && empates > -1)
            derrotas = jogos - vitorias - empates;
        if (pontos < 0 && vitorias > -1 && empates > -1)
            pontos = vitorias * 3 + empates;
        if (vitorias < 0 && pontos > -1 && empates > -1)
            vitorias = (pontos - empates) / 3;
        if (empates < 0 && pontos > -1 && vitorias > -1)
            empates = pontos - 3 * vitorias;
        if (vitorias < 0 && pontos > -1 && derrotas > -1 && jogos > -1)
            vitorias = (pontos + derrotas - jogos) / 2;
        flag++;
    }
    printf("%d %d %d %d %d\n", jogos, pontos, vitorias, empates, derrotas);
    return 0;
}