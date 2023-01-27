#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    scanf("%d", &num);
    num++;
    for (int i = 1; i < num; i += 2)
        printf("%d\n", i);
    return 0;
}