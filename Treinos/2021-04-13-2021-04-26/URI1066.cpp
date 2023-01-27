#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2, num3, num4, num5, pares = 0, positivos = 0, negativos = 0;
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    if (num1 % 2 == 0)
        pares++;
    if (num2 % 2 == 0)
        pares++;
    if (num3 % 2 == 0)
        pares++;
    if (num4 % 2 == 0)
        pares++;
    if (num5 % 2 == 0)
        pares++;
    if (num1 > 0)
        positivos++;
    if (num2 > 0)
        positivos++;
    if (num3 > 0)
        positivos++;
    if (num4 > 0)
        positivos++;
    if (num5 > 0)
        positivos++;
    if (num1 < 0)
        negativos++;
    if (num2 < 0)
        negativos++;
    if (num3 < 0)
        negativos++;
    if (num4 < 0)
        negativos++;
    if (num5 < 0)
        negativos++;
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", pares, 5 - pares, positivos, negativos);
    return 0;
}