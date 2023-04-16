#include <bits/stdc++.h>
using namespace std;

int main()
{
    int alcool = 0, diesel = 0, gasolina = 0, controle = 0;
    while (controle != 4)
    {
        scanf("%d", &controle);
        if (controle == 1)
            alcool++;
        else if (controle == 2)
            gasolina++;
        else if (controle == 3)
            diesel++;
        }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);
    return 0;
}