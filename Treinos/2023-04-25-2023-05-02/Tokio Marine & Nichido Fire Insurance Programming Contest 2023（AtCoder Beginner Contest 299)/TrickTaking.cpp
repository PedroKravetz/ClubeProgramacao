#include <bits/stdc++.h>
using namespace std;

int cartas[200000];
int raking[200000];

int main()
{
    int n, t, c, controle = 0;
    scanf("%d %d", &n, &t);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &c);
        cartas[i] = c;
        if (c == t)
            controle = 1;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &c);
        raking[i] = c;
    }
    if (!controle)
        t = cartas[0];
    c = 0;
    controle = 0;
    for (int i = 0; i < n; i++)
    {
        if (cartas[i] == t)
            if (raking[i] > c)
            {
                c = raking[i];
                controle = i;
            }
    }
    printf("%d\n", controle + 1);

    return 0;
}