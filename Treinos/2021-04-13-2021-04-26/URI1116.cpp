#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y;
    scanf("%d", &n);
    while (n > 0)
    {
        n--;
        scanf("%d %d", &x, &y);
        if (y == 0)
            printf("divisao impossivel\n");
        else
            printf("%.1f\n", 1. * x / y);
    }
    return 0;
}