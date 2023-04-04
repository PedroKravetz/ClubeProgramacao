#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    if (x == 0 || y == 0)
        printf("\n");
    while (x != 0 && y != 0)
    {
        if (x > 0)
            if (y > 0)
                printf("primeiro\n");
            else
                printf("quarto\n");
        else if (y > 0)
            printf("segundo\n");
        else
            printf("terceiro\n");
        scanf("%d %d", &x, &y);
    }
    return 0;
}