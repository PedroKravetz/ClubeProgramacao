#include <bits/stdc++.h>
using namespace std;

int main()
{
    int controle = 1, quantidade, aux = 0;
    scanf("%d", &quantidade);
    quantidade = quantidade * 2;
    while (quantidade > 0)
    {
        quantidade--;
        if (aux % 2 == 0)
            printf("%d %d %d\n", controle, controle * controle, controle * controle * controle);
        else
        {
            printf("%d %d %d\n", controle, controle * controle + 1, controle * controle * controle + 1);
            controle++;
        }
        aux++;
    }
    return 0;
}