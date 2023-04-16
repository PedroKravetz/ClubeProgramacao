#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p, n, x1, x2, quantidade = 0;
    scanf("%d %d", &n, &p);
    while (n > 0)
    {
        n--;
        scanf("%d %d", &x1, &x2);
        if (x1 + x2 >= p)
            quantidade++;
    }
    printf("%d\n", quantidade);
    return 0;
}