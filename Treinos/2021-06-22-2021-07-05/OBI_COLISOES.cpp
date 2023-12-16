#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x0, x1, x2, x3, y0, y1, y2, y3;
    scanf("%d %d %d %d %d %d %d %d", &x0, &y0, &x1, &y1, &x2, &y2, &x3, &y3);
    if ((x2 >= x0 && x2 <= x1) || (x0 >= x2 && x0 <= x3))
    {
        if ((y2 >= y0 && y2 <= y1) || (y0 >= y2 && y0 <= y3))
            printf("%d\n", 1);
        else
            printf("%d\n", 0);
    }
    else
        printf("%d\n", 0);
    return 0;
}