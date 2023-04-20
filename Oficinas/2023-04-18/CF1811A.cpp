#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long llu;

int main()
{
    int t, n, flag;
    char num[200000], controle[2000000], dig;
    scanf("%d", &t);
    while (t > 0)
    {
        t--;
        scanf("%d %c %s", &n, &dig, num);
        for (int i = n - 1; i >= 0; i--)
        {
            controle[i] = num[i];
        }
        flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (dig > controle[i] && flag)
            {
                printf("%c", dig);
                flag = 0;
                printf("%c", controle[i]);
            }
            else
                printf("%c", controle[i]);
        }
        if (flag)
            printf("%c", dig);
        printf("\n");
    }
    return 0;
}