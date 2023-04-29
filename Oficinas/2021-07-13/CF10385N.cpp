#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y, dias = 0, saldo;
    scanf("%d ", &n);
    scanf("$%d.%d", &x, &y);
    saldo = y;
    while (n > 0)
    {
        n--;
        scanf(" $%d.%d", &x, &y);
        saldo = (saldo + y) % 100;
        if (saldo != 0)
            dias++;
    }
    printf("%d\n", dias);
    return 0;
}