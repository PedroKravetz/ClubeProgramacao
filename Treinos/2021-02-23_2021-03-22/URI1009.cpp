#include <bits/stdc++.h>
using namespace std;

int main()
{
    char nome[61];
    float salario, vendas;
    scanf("%s", &nome);
    scanf("%f", &salario);
    scanf("%f", &vendas);
    printf("TOTAL = R$ %.2f\n", (salario + 0.15 * vendas));
    return 0;
}