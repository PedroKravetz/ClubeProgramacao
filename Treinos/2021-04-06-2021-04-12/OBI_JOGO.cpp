#include <bits/stdc++.h>
using namespace std;

int main()
{
    int par, alice, bob;
    scanf("%d %d %d", &par, &alice, &bob);
    if (alice + bob % 2 == 0)
        printf("%d\n", par);
    else
        printf("%d\n", !par);
    return 0;
}