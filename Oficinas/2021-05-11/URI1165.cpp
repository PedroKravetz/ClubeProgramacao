#include <bits/stdc++.h>
using namespace std;

int primo(int x)
{
    int temp = 2;
    if (x == 0 || x == 1)
        return 0;
    int raiz = sqrt(x) + 1;
    while (temp < raiz)
    {
        if (x % temp == 0)
            return 0;
        temp++;
    }
    return 1;
}

int main()
{
    int teste, num;
    scanf("%d", &teste);
    while (teste > 0)
    {
        teste--;
        scanf("%d", &num);
        if (primo(num))
            printf("%d eh primo\n", num);
        else
            printf("%d nao eh primo\n", num);
    }
    return 0;
}