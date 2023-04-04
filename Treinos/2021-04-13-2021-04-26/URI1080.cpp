#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 1, num, posi = 1, aux;
    scanf("%d", &num);
    while (i < 100)
    {
        i++;
        scanf("%d", &aux);
        if (aux > num)
        {
            posi = i;
            num = aux;
        }
    }
    printf("%d\n%d\n", num, posi);
    return 0;
}