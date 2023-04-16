#include <bits/stdc++.h>
using namespace std;

int main()
{
    int controle, x;
    scanf("%d", &x);
    while (x != 0)
    {
        controle = 1;
        while (controle < x)
        {
            printf("%d ", controle);
            controle++;
        }
        printf("%d\n", controle);
        scanf("%d", &x);
    }
    return 0;
}