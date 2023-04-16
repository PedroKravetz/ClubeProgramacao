#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, soma, controle = 5;
    scanf("%d", &x);
    if (x == 0)
        printf("\n");
    while (x != 0)
    {
        soma = 0;
        controle = 5;
        if (x % 2 != 0)
            x++;
        while (controle > 0)
        {
            controle--;
            soma = soma + x;
            x = x + 2;
        }
        printf("%d\n", soma);
        scanf("%d", &x);
    }
    return 0;
}