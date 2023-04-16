#include <bits/stdc++.h>
using namespace std;

int main()
{
    int quantidade = 0, gremio = 0, inter = 0, empates = 0, controle = 1, gols1, gols2;
    while (controle == 1)
    {
        quantidade++;
        scanf("%d %d", &gols1, &gols2);
        if (gols1 > gols2)
            inter++;
        else if (gols1 < gols2)
            gremio++;
        else
            empates++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &controle);
    }
    printf("%d grenais\n", quantidade);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empates);
    if (inter > gremio)
        printf("Inter venceu mais\n");
    else if (inter < gremio)
        printf("Gremio venceu mais\n");
    else
        printf("Não houve vencedor\n");
    return 0;
}