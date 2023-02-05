#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, soma = 0;
    scanf("%d %d", &x, &y);
    if (x > y)
        swap(x, y);
    ++x;
    while (x < y)
    {
        if (x % 2 != 0)
            soma += x;
        x++;
    }
    printf("%d\n", soma);
    return 0;
}