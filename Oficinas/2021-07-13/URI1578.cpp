#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long llu;

int main()
{
    int n, tamanho, numero = 3, espacos, aux2;
    llu matriz[30][30], aux;
    int controle[30];
    scanf("%d", &n);
    for (int z = 0; z < n; z++)
    {
        numero++;
        scanf("%d", &tamanho);
        for (int i = 0; i < tamanho; i++)
            for (int j = 0; j < tamanho; j++)
            {
                scanf("%llu", &matriz[i][j]);
                matriz[i][j] = matriz[i][j] * matriz[i][j];
                controle[i] = 0;
            }
        for (int i = 0; i < tamanho; i++)
            for (int j = 0; j < tamanho; j++)
            {
                espacos = 0;
                aux = matriz[i][j];
                while (aux > 0)
                {
                    espacos++;
                    aux = aux / 10;
                }
                if (controle[j] < espacos)
                    controle[j] = espacos;
            }
        if (z != 0)
            printf("\n");
        printf("Quadrado da matriz #%d:\n", numero);

        for (int i = 0; i < tamanho; i++)
        {
            for (int j = 0; j < tamanho; j++)
            {
                aux = matriz[i][j];
                aux2 = controle[j];
                if (aux == 0)
                    aux2--;
                while (aux > 0)
                {
                    aux2--;
                    aux = aux / 10;
                }
                while (aux2 > 0)
                {
                    printf(" ");
                    aux2--;
                }
                printf("%llu", matriz[i][j]);
                if (j != tamanho - 1)
                    printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}
