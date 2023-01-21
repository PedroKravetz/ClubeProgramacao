#include <stdio.h>

int main()
{
    int km;
    double litros;
    scanf("%d", &km);
    scanf("%lf", &litros);
    printf("%.3lf km/l\n", km / litros);
    return 0;
}