#include <bits/stdc++.h>
using namespace std;

int cavalos2(int m)
{
    if (m % 4 == 1 || m % 4 == 3)
        return ++m;
    if (m % 4 == 2)
        return 2 + m;
    return m;
}

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    if (m < n)
        swap(m, n);

    if (n == 1)
        printf("%d\n", m);
    else if (n == 2)
        printf("%d\n", cavalos2(m));
    else
        printf("%d\n", (m * n + 1) / 2);
    return 0;
}