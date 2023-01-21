#include <stdio.h>

int main()
{
    int horas, velocidade;
    scanf("%d", &horas);
    scanf("%d", &velocidade);
    printf("%.3f\n", horas * velocidade / 12.0);
    return 0;
}