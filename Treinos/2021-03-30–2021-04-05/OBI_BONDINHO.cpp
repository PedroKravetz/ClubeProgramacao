#include <bits/stdc++.h>
using namespace std;

int main()
{
    int alunos, monitores;
    scanf("%d %d", &alunos, &monitores);
    printf("%c\n", alunos + monitores < 51 ? 'S' : 'N');
    return 0;
}