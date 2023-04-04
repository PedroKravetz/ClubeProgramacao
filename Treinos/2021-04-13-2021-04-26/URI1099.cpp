#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y, count;
    scanf("%d", &n);
    while (n > 0)
    {
        count = 0;
        n--;
        scanf("%d %d", &x, &y);
        if (x > y)
            swap(x, y);
        if (x % 2 == 0)
            x++;
        else
            x = x + 2;
        while (x < y)
        {
            count = count + x;
            x = x + 2;
        }
        printf("%d\n", count);
    }
    return 0;
}