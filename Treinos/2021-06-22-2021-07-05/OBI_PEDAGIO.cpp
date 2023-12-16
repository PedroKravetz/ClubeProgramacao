#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, d, k, p;
    scanf("%d %d %d %d", &l, &d, &k, &p);
    printf("%d\n", l * k + l / d * p);
    return 0;
}