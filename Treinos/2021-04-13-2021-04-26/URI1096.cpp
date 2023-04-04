#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 1, j = 7;
    while (i < 10)
    {
        printf("I=%d J=%d\n", i, j);
        j--;
        if (j == 4)
        {
            j = 7;
            i = i + 2;
        }
    }
    return 0;
}