#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i = 2;
    scanf("%d", &n);
    if (n == 1 || n == 2)
        printf("\n");
    else
        while (i < 10000)
        {
            printf("%d\n", i);
            i = i + n;
        }
    return 0;
}