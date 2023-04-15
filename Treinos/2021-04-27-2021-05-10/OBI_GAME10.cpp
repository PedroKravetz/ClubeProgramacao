#include <bits/stdc++.h>
using namespace std;

int main()
{
    int posicoes, disco, aviao;
    scanf("%d %d %d", &posicoes, &disco, &aviao);
    printf("%d\n", (disco - aviao + posicoes) % posicoes);
    return 0;
}