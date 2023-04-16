#include <bits/stdc++.h>
using namespace std;

int main()
{
    int controle = 1, quantidade;
    scanf("%d", &quantidade);
    while (quantidade > 0)
    {
        quantidade--;
        printf("%d %d %d\n", controle, controle * controle, controle * controle * controle);
        controle++;
    }
    return 0;
}