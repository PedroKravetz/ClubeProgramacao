#include <bits/stdc++.h>
using namespace std;

int main()
{
    int quantidade, paineis = 0;
    char c;
    scanf("%d\n", &quantidade);
    while (quantidade > 0)
    {
        quantidade--;
        scanf("%c", &c);
        if (c == 'P' || c == 'C')
            paineis = paineis + 2;
        else if (c == 'A')
            paineis = paineis + 1;
    }
    printf("%d\n", paineis);
    return 0;
}