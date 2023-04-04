#include <bits/stdc++.h>
using namespace std;

int main()
{
    float i = 0, j = 1;
    int count = 0, count2 = 0;
    while (i < 2.1)
    {
        if (count2 % 5 == 0)
            printf("I=%.0f J=%.0f\n", i, j);
        else
            printf("I=%.1f J=%.1f\n", i, j);
        j++;
        count++;
        if (count == 3)
        {
            count2++;
            count = 0;
            j = j - 3 + 0.2;
            i = i + 0.2;
        }
    }
    return 0;
}