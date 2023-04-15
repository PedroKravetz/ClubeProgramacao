#include <bits/stdc++.h>
using namespace std;

int main()
{
    int controle, movimentos, tipoMovimento;
    char inicio;
    scanf("%d %c\n", &movimentos, &inicio);
    if (inicio == 'A')
        controle = 1;
    else if (inicio == 'B')
        controle = 2;
    else
        controle = 3;
    while (movimentos > 0)
    {
        movimentos--;
        scanf("%d", &tipoMovimento);
        if (tipoMovimento == 1)
            if (controle == 1)
                controle = 2;
            else if (controle == 2)
                controle = 1;
        if (tipoMovimento == 2)
            if (controle == 2)
                controle = 3;
            else if (controle == 3)
                controle = 2;
        if (tipoMovimento == 3)
            if (controle == 1)
                controle = 3;
            else if (controle == 3)
                controle = 1;
    }
    printf("%c\n", 'A' - 1 + controle);
    return 0;
}