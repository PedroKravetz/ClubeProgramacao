#include <bits/stdc++.h>
using namespace std;

int main()
{
    float media = 0, quantidade = 0;
    int x;
    scanf("%d", &x);
    while (x >= 0)
    {
        quantidade++;
        media = media + x;
        scanf("%d", &x);
    }
    if (quantidade == 0)
        printf("%.2f\n", media);
    else
        printf("%.2f\n", media / quantidade);
    return 0;
}