#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, horas;
    float salario;
    scanf("%d", &num);
    scanf("%d", &horas);
    scanf("%f", &salario);
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", horas * salario);
    return 0;
}