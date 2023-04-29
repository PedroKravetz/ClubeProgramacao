#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, casa, trabalho;
    char ida, volta;
    scanf("%d %d %d", &n, &casa, &trabalho);
    while (n > 0)
    {
        n--;
        scanf(" %c %c", &ida, &volta);
        if (ida == 'Y' || trabalho == 0)
        {
            casa--;
            trabalho++;
            printf("Y ");
        }
        else
            printf("N ");

        if (volta == 'Y' || casa == 0)
        {
            casa++;
            trabalho--;
            printf("Y\n");
        }
        else
            printf("N\n");
    }
    return 0;
}