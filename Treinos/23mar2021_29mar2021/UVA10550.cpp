#include <stdio.h>

int main()
{
    int inicial, a, b, c, graus;
    scanf("%d %d %d %d", &inicial, &a, &b, &c);
    while (a != 0 || b != 0 || c != 0 || inicial != 0)
    {
        graus = 1080;
        graus += (inicial - a + 40) % 40 * 9;
        graus += (b - a + 40) % 40 * 9;
        graus += (b - c + 40) % 40 * 9;
        printf("%d\n", graus);
        scanf("%d %d %d %d", &inicial, &a, &b, &c);
    }
    return 0;
}