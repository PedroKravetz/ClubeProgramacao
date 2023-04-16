#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, aux = 1, print = 1;
    scanf("%d %d", &x, &y);
    while (print <= y)
    {
        printf("%d", print);
        print++;
        if (aux % x != 0)
            printf(" ");
        else
            printf("\n");
        aux++;
    }
    return 0;
}