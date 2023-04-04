#include <bits/stdc++.h>
using namespace std;

int main()
{
    float nota, media = 0;
    int count = 0;
    while (count != 2)
    {
        scanf("%f", &nota);
        if (nota < 0 || nota > 10)
            printf("nota invalida\n");
        else
        {
            media = media + nota;
            count++;
        }
    }
    printf("media = %.2f\n", media / 2.);
    return 0;
}