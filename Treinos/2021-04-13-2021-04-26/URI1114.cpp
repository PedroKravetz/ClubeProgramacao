#include <bits/stdc++.h>
using namespace std;

int main()
{
    int senha;
    scanf("%d", &senha);
    while(senha!=2002)
    {
        printf("Senha Invalida\n");
        scanf("%d", &senha);
    }
    printf("Acesso Permitido\n");
}