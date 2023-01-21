#include <bits/stdc++.h>
using namespace std;

int main()
{
    int altura, tempo, conseguiu;
    float fadiga, distancia, percorre, escorrega;
    scanf("%d %f %f %f", &altura, &percorre, &escorrega, &fadiga);
    while (altura != 0)
    {
        conseguiu = 0;
        distancia = 0;
        tempo = 0;
        fadiga = fadiga * percorre / 100.0;
        while (distancia >= 0)
        {
            tempo++;
            distancia += percorre;
            if (distancia > altura)
            {
                conseguiu = 1;
                break;
            }
            distancia -= escorrega;
            if (percorre - fadiga < 0)
                percorre = 0;
            else
                percorre -= fadiga;
        }
        if (conseguiu)
            printf("success on day %d\n", tempo);
        else
            printf("failure on day %d\n", tempo);
        scanf("%d %f %f %f", &altura, &percorre, &escorrega, &fadiga);
    }
    return 0;
}