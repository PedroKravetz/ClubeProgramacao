#include <bits/stdc++.h>
using namespace std;

int main()
{
    float soma = 1;
    int numerador = 3, denominador = 2;
    while (numerador < 40)
    {
        soma = soma + 1. * numerador / denominador;
        numerador = numerador + 2;
        denominador = denominador * 2;
    }
    printf("%.2f\n", soma);
    return 0;
}