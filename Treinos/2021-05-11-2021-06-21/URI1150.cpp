#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, z, sum, quantidade = 1;
    scanf("%d %d", &x, &z);
    while (x >= z)
        scanf("%d", &z);
    sum = x;
    while (sum < z)
    {
        quantidade++;
        x++;
        sum = sum + x;
    }
    printf("%d\n", quantidade);
    return 0;
}