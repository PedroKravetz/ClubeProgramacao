#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y, soma;
    scanf("%d", &n);
    while (n > 0)
    {
        soma = 0;
        n--;
        scanf("%d %d", &x, &y);
        if (x % 2 == 0)
            x++;
        while (y > 0)
        {
            y--;
            soma = soma + x;
            x = x + 2;
        }
        printf("%d\n", soma);
    }
    return 0;
}