#include <bits/stdc++.h>
using namespace std;

int main()
{
    float pi = 3.14159;
    double num1, num2, num3;
    scanf("%lf %lf %lf", &num1, &num2, &num3);
    printf("TRIANGULO: %.3lf\n", (num1 * num3) / 2);
    printf("CIRCULO: %.3lf\n", (pi * num3 * num3));
    printf("TRAPEZIO: %.3lf\n", (num1 + num2) * num3 / 2);
    printf("QUADRADO: %.3lf\n", (num2 * num2));
    printf("RETANGULO: %.3lf\n", (num1 * num2));
    return 0;
}