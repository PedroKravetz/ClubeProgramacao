#include <bits/stdc++.h>
using namespace std;

int main()
{
    int dimensao1, dimensao2, dimensao3, largura, altura;
    scanf("%d %d %d %d %d", &dimensao1, &dimensao2, &dimensao3, &largura, &altura);
    if (dimensao2 > dimensao1)
        swap(dimensao1, dimensao2);
    if (dimensao3 > dimensao2)
        swap(dimensao2, dimensao3);
    if (dimensao2 > dimensao1)
        swap(dimensao1, dimensao2);
    if (largura > altura)
        swap(largura, altura);

    if (dimensao3 <= largura && dimensao2 <= altura)
        printf("S\n");
    else
        printf("N\n");
    return 0;
}