#include <bits/stdc++.h>
using namespace std;

int main()
{
    int controle = 0, positivos = 0;
    float aux;
    while (controle < 6)
    {
        scanf("%f", &aux);
        if (aux >= 0)
            positivos++;
        controle++;
    }
    printf("%d valores positivos\n", positivos);
    return 0;
}