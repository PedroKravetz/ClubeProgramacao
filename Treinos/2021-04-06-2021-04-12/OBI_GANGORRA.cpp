#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p1, c1, p2, c2;
    scanf("%d %d %d %d", &p1, &c1, &p2, &c2);
    if (p1 * c1 == p2 * c2)
        printf("%d\n", 0);
    else if (p1 * c1 > p2 * c2)
        printf("%d\n", -1);
    else
        printf("%d\n", 1);
    return 0;
}