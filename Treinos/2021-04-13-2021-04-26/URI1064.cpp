#include <bits/stdc++.h>
using namespace std;

int main()
{
    float num1, num2, num3, num4, num5, num6, soma = 0, media;
    int positivos = 0;
    scanf("%f %f %f %f %f %f", &num1, &num2, &num3, &num4, &num5, &num6);
    if (num1 > 0)
    {
        soma += num1;
        positivos++;
    }
    if (num2 > 0)
    {
        soma += num2;
        positivos++;
    }
    if (num3 > 0)
    {
        soma += num3;
        positivos++;
    }
    if (num4 > 0)
    {
        soma += num4;
        positivos++;
    }
    if (num5 > 0)
    {
        soma += num5;
        positivos++;
    }
    if (num6 > 0)
    {
        soma += num6;
        positivos++;
    }
    media = soma / positivos;
    printf("%d valores positivos\n%.1f\n", positivos, media);
    return 0;
}