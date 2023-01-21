#include <bits/stdc++.h>
using namespace std;

int main()
{
    int quantidade, num1, num2;
    scanf("%d", &quantidade);
    while (quantidade > 0)
    {
        scanf("%d %d", &num1, &num2);
        quantidade--;
        if (num1 > num2)
            printf(">\n");
        else if (num2 > num1)
            printf("<\n");
        else
            printf("=\n");
    }
    return 0;
}