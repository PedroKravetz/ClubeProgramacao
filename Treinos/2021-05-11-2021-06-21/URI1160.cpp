#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, pa, pb, tempo;
    double ga, gb;
    scanf("%d", &t);
    while (t > 0)
    {
        t--;
        tempo = 0;
        scanf("%d %d %lf %lf", &pa, &pb, &ga, &gb);
        while (pa <= pb && tempo < 101)
        {
            tempo++;
            pa = pa + pa * ga / 100;
            pb = pb + pb * gb / 100;
        }
        if (tempo > 100)
            printf("Mais de 1 seculo.\n");
        else
            printf("%d anos.\n", tempo);
    }
    return 0;
}