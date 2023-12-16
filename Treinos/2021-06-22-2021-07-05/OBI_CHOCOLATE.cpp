#include <bits/stdc++.h>
using namespace std;
#define MAX 1123456

int ch[MAX], x[MAX];

int main()
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    memset(ch, 0, sizeof(ch));
    for (i = 0; i <= n; i++)
        if (ch[i] == 0)
            for (j = i + 1; j <= n && j <= i + m; j++)
            {
                ch[j]++;
                x[j] = j - i;
            }
        else if (ch[i] == 1 && (j = i + x[i]) <= n)
        {
            ch[j]++;
            x[j] = j - i;
        }
    printf("%s\n", ch[n] ? "Paula" : "Carlos");
    return 0;
}