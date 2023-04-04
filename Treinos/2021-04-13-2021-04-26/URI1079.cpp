#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    float num1, num2, num3;
    scanf("%d", &n);
    while (n > 0)
    {
        scanf("%f %f %f", &num1, &num2, &num3);
        printf("%.1f\n", (num1 * 2 + num2 * 3 + num3 * 5) / 10.0);
        n--;
    }
    return 0;
}