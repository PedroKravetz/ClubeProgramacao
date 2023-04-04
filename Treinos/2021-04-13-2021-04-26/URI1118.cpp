#include <bits/stdc++.h>
using namespace std;

int main()
{
    float nota, media;
    int count, contr = 1;
    while (contr != 2)
    {
        count = 0;
        media = 0;
        while (count != 2)
        {
            scanf("%f", &nota);
            if (nota < 0 || nota > 10)
                printf("nota invalida\n");
            else
            {
                media = media + nota;
                count++;
            }
        }
        printf("media = %.2f\n", media / 2.);
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &contr);
        while (contr > 2 || contr < 1)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &contr);
        }
    }
    return 0;
}