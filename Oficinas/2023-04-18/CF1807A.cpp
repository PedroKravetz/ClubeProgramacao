#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, n;
    scanf("%d", &n);
    while (n > 0)
    {
        n--;
        scanf("%d %d %d", &a, &b, &c);
        if (a + b == c)
            printf("+\n");
        else
            printf("-\n");
    }
    return 0;
}