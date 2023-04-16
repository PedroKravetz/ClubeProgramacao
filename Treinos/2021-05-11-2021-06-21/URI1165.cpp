#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, numero, controle, aux, flag;
    scanf("%d", &n);
    while (n > 0)
    {
        scanf("%d", &numero);
        n--;
        flag = 1;
        controle = 2;
        aux = sqrt(numero);
        while (controle <= aux)
        {
            if (numero % controle == 0)
            {
                flag = 0;
                break;
            }
            controle++;
        }
        if (flag)
            printf("%d eh primo\n", numero);
        else
            printf("%d nao eh primo\n", numero);
    }
    return 0;
}