#include <bits/stdc++.h>
using namespace std;

int main()
{
    int aux, quantidade, dentro = 0, fora = 0;
    scanf("%d", &quantidade);
    while (quantidade > 0)
    {
        scanf("%d", &aux);
        if (aux > 9 && aux < 21)
            dentro++;
        else
            fora++;
        quantidade--;
    }
    printf("%d in\n", dentro);
    printf("%d out\n", fora);
    return 0;
}