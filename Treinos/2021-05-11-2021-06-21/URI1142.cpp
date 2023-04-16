#include <bits/stdc++.h>
using namespace std;

int main()
{
    int controle = 1, quantidade;
    scanf("%d", &quantidade);
    while (quantidade > 0)
    {
        quantidade--;
        printf("%d %d %d PUM\n", controle, controle + 1, controle + 2);
        controle = controle + 4;
    }
    return 0;
}