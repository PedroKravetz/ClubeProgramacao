#include <bits/stdc++.h>
using namespace std;

int main()
{
    float soma = 1;
    int controle = 2;
    while (controle < 101)
    {
        soma = soma + 1. / controle;
        controle++;
    }
    printf("%.2f\n", soma);
    return 0;
}