#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d, c, i, j;
    double max = -1;
    scanf("%d", &n);
    i = 0;
    while (n)
    {
        n--;
        scanf("%d %d", &d, &c);
        if (log2(d) * c > max)
        {
            max = log2(d) * c;
            j = i;
        }
        i++;
    }
    printf("%d\n", j);
    return 0;
}