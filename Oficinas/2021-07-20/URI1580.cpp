#include <bits/stdc++.h>
using namespace std;
#define P 1000000007

typedef long long ll;
int alfabeto[26];
char s[1123];
ll fat[1123];

ll expbin(ll a, ll b)
{
    if (b == 0)
        return 1;
    if (b & 1)
        return ((a * expbin(a, b - 1)) % P);
    ll c = expbin(a, b / 2);
    return (c * c) % P;
}

int main()
{
    ll n, a, b;
    fat[0] = 1;
    for (int i = 1; i < 1123; i++)
    {
        fat[i] = (i * fat[i - 1]) % P;
    }
    while (scanf(" %s", &s) != EOF)
    {
        n = strlen(s);
        memset(alfabeto, 0, sizeof(alfabeto));
        for (int i = 0; i < n; i++)
        {
            alfabeto[s[i] - 'A']++;
        }
        a = fat[n];
        b = 1;
        for (int i = 0; i < 26; i++)
        {
            b = (b * fat[alfabeto[i]]) % P;
        }
        b = expbin(b, P - 2);
        printf("%lld\n", (a * b) % P);
    }
    return 0;
}