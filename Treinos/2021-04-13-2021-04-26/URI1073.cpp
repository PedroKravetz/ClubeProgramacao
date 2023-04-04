#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numero, aux = 2;
    scanf("%d", &numero);
    while (aux < numero + 1)
    {
        printf("%d^2 = %d\n", aux, aux * aux);
        aux += 2;
    }
    return 0;
}