#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, sum = 0;
    scanf("%d %d", &x, &y);
    if (x > y)
        swap(x, y);
    while (x <= y)
    {
        if (x % 13 != 0)
            sum = sum + x;
        x++;
    }
    printf("%d\n", sum);
    return 0;
}