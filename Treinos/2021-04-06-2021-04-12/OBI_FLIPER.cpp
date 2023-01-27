#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p, r;
    scanf("%d %d", &p, &r);
    if (p == 0)
        printf("%c\n", 'C');
    else if (r == 0)
        printf("%c\n", 'B');
    else
        printf("%c\n", 'A');
    return 0;
}