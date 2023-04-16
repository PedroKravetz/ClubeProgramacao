#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    if (x > y)
        swap(x, y);
    while (x < y)
    {
        x++;
        if (x % 5 == 2 || x % 5 == 3)
            printf("%d\n", x);
    }
    return 0;
}