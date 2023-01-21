#include <bits/stdc++.h>
using namespace std;

int euclides(int a, int b)
{
    if (b > 0)
    {
        a = euclides(b, a % b);
    }
    return a;
}

int main()
{
    int x, y, z;
    while (scanf("%d %d %d", &x, &y, &z) != EOF)
    {
        if (x > y)
            swap(x, y);
        if (y > z)
            swap(y, z);
        if (z * z == x * x + y * y)
            if (euclides(x, y) == 1)
                printf("tripla pitagorica primitiva\n");
            else
                printf("tripla pitagorica\n");
        else
            printf("tripla\n");
    }
    return 0;
}