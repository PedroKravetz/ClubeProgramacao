#include <bits/stdc++.h>
using namespace std;

int main()
{
    int controle = 2, x;
    scanf("%d", &x);
    if (x < 0)
        x = x * -1;
    printf("1\n");
    while (controle <= x)
    {
        if (x % controle == 0)
            printf("%d\n", controle);
        controle++;
    }

    return 0;
}