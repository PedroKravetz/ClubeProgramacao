#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ataque1, defesa1, ataque2, defesa2;
    scanf("%d %d %d %d", &ataque1, &defesa1, &ataque2, &defesa2);
    if ((ataque1 == defesa2 && ataque2 == defesa1) || (ataque1 != defesa2 && ataque2 != defesa1))
        printf("%d\n", -1);
    else if (ataque1 != defesa2)
        printf("%d\n", 1);
    else
        printf("%d\n", 2);

    return 0;
}