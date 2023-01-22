#include <bits/stdc++.h>
using namespace std;
int main()
{
    int experimentos, total = 0, ratos = 0, coelhos = 0, sapos = 0, aux;
    char tipo[2];
    scanf("%d", &experimentos);
    while (experimentos > 0)
    {
        experimentos--;
        scanf("%d\n %s", &aux, &tipo);
        total += aux;
        if (strcmp(tipo, "C") == 0)
            coelhos += aux;
        else if (strcmp(tipo, "R") == 0)
            ratos += aux;
        else
            sapos += aux;
    }
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2f %\n", 100.0 * coelhos / total);
    printf("Percentual de ratos: %.2f %\n", 100.0 * ratos / total);
    printf("Percentual de sapos: %.2f %\n", 100.0 * sapos / total);
    return 0;
}