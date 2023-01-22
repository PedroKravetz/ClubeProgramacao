#include <bits/stdc++.h>
using namespace std;

int main()
{
    int distancia;
    scanf("%d", &distancia);
    if (distancia < 81)
        printf("%d\n", 1);
    else if (distancia < 1401)
        printf("%d\n", 2);
    else
        printf("%d\n", 3);
    return 0;
}