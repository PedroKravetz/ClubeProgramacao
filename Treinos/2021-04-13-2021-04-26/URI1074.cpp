#include <bits/stdc++.h>
using namespace std;

int main()
{
    int quantidade, aux;
    scanf("%d", &quantidade);
    while (quantidade > 0)
    {
        quantidade--;
        scanf("%d", &aux);
        if (aux == 0)
            printf("NULL\n");
        else if (aux > 0)
            if (aux % 2 == 0)
                printf("EVEN POSITIVE\n");
            else
                printf("ODD POSITIVE\n");
        else if (aux % 2 == 0)
            printf("EVEN NEGATIVE\n");
        else
            printf("ODD NEGATIVE\n");
    }

    return 0;
}