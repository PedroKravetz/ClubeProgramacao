#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2, num3, num4, num5, pares = 0;
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
    printf("%d valores pares\n", pares);
    return 0;
}