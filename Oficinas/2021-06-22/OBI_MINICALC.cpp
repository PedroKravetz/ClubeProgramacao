#include <bits/stdc++.h>
using namespace std;

int euclides(int a, int b)
{
    if (b == 0)
        return a;
    return euclides(b, a % b);
}

int main()
{
    int capacidade, dividendo, divisor, numeroComum;
    scanf("%d %d %d", &capacidade, &dividendo, &divisor);
    numeroComum = euclides(dividendo, divisor);
    dividendo /= numeroComum;
    divisor /= numeroComum;
    if (dividendo > capacidade || divisor > capacidade)
        printf("IMPOSSIVEL\n");
    else
        printf("%d %d\n", dividendo, divisor);
    return 0;
}