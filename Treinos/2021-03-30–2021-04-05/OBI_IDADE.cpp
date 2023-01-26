#include <bits/stdc++.h>
using namespace std;

int main()
{
    int mae, filho1, filho2, filho3;
    scanf("%d %d %d", &mae, &filho1, &filho2);
    if (filho2 > filho1)
        swap(filho1, filho2);
    filho3 = mae - filho1 - filho2;
    if (filho3 > filho1)
        swap(filho3, filho1);
    printf("%d\n", filho1);
    return 0;
}