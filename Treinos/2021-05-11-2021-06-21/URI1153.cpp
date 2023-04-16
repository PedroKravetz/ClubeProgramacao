#include <bits/stdc++.h>
using namespace std;

int main()
{
    int fatorial = 1, x;
    scanf("%d", &x);
    while (x > 0)
    {
        fatorial = fatorial * x;
        x--;
    }
    printf("%d\n", fatorial);
    return 0;
}