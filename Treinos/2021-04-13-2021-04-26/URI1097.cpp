#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 1, j = 7, count = 0;
    while (i < 10)
    {
        printf("I=%d J=%d\n", i, j);
        j--;
        count++;
        if (count == 3)
        {
            count = 0;
            j = j + 5;
            i = i + 2;
        }
    }
    return 0;
}