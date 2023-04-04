#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0, m, n, aux;
    scanf("%d %d", &m, &n);
    if (m < 1 || n < 1)
        printf("\n");
    while (m > 0 && n > 0)
    {
        count = m + n;
        if (m > n)
            swap(m, n);
        aux = m;
        m++;
        while (m < n)
        {
            count = count + m;
            m++;
        }
        while (aux < n + 1)
        {
            printf("%d ", aux);
            aux++;
        }
        printf("Sum=%d\n", count);
        scanf("%d %d", &m, &n);
    }
    return 0;
}