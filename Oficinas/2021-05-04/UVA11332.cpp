#include <bits/stdc++.h>
using namespace std;

int somaAlgarismos(int x)
{
    int tmp = 0;
    if (x > 9)
    {
        tmp = x % 10 + somaAlgarismos(x / 10);
        x = somaAlgarismos(tmp);
    }
    return x;
}

int main()
{
    int x;
    scanf("%d", &x);
    while (x != 0)
    {
        printf("%d\n", somaAlgarismos(x));
        scanf("%d", &x);
    }
    return 0;
}