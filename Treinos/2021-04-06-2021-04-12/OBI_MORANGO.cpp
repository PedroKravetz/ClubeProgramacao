#include <bits/stdc++.h>
using namespace std;

int main()
{
    int comprimento1, comprimento2, largura1, largura2;
    scanf("%d %d %d %d", &comprimento1, &largura1, &comprimento2, &largura2);
    printf("%d\n", largura1 * comprimento1 > largura2 * comprimento2 ? largura1 * comprimento1 : largura2 * comprimento2);
    return 0;
}