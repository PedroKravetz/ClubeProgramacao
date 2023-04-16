#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, atual = 1, anterior = 0, proximo;
    scanf("%d", &x);
    printf("%d", anterior);
    x--;
    while (x > 0)
    {
        x--;
        printf(" %d", atual);
        proximo = atual + anterior;
        anterior = atual;
        atual = proximo;
    }
    printf("\n");

    return 0;
}