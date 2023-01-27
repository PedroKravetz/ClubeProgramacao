#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (b == c && d == b + c && a == b + c + d)
        printf("%c\n", 'S');
    else
        printf("%c\n", 'N');
    return 0;
}