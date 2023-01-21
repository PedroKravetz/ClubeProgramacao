#include <bits/stdc++.h>
using namespace std;

int main()
{
    int largura, comprimento;
    scanf("%d %d", &largura, &comprimento);
    printf("%d\n", largura * comprimento + (largura - 1) * (comprimento - 1));
    printf("%d\n", 2 * (largura + comprimento - 2));
    return 0;
}