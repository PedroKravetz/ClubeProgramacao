#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c, p, f;
    scanf("%d %d %d", &c, &p, &f);
    if (c * f > p)
    {
        printf("%c\n", 'N');
    }
    else
        printf("%c\n", 'S');
    return 0;
}