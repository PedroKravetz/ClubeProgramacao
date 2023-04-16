#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x1, x2, y1, y2, d = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        n--;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        d = d + (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    }
    printf("%d\n", d);
    return 0;
}