#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, n, sum = 0;
    scanf("%d %d", &a, &n);
    while (n < 1)
        scanf("%d", &n);
    while (n > 0)
    {
        sum = sum + a;
        a++;
        n--;
    }
    printf("%d\n", sum);
    return 0;
}