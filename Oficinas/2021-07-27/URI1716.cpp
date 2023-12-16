#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll x, y;

ll expbin(ll a, ll b, ll fi)
{
    if (b == 0)
        return 1;
    if (b & 1)
    {
        return (a * expbin(a, b - 1, fi)) % fi;
    }
    ll c = expbin(a, b / 2, fi);
    return (c * c) % fi;
}

ll euclid(ll a, ll b)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    ll d = euclid(b, a % b);
    ll _x = x;
    x = y;
    y = _x - y * (a / b);
    return d;
}

int main(void)
{
    ll n, e, c, r, p, q, fi;
    ll inverse;
    scanf("%lld %lld %lld", &n, &e, &c);
    r = sqrt(n);
    for (int i = 3; i <= r; i += 2)
    {
        if (n % i == 0)
        {
            p = i;
            q = n / p;
            break;
        }
    }
    fi = (p - 1) * (q - 1);
    euclid(e, fi);
    inverse = (x % fi + fi) % fi;
    printf("%lld\n", expbin(c, inverse, n));
}