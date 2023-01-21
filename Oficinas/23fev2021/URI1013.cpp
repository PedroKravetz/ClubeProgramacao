#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2, num3, aux;
    scanf("%d %d %d", &num1, &num2, &num3);
    aux = (num1 + num2 + abs(num1 - num2)) / 2;
    printf("%d eh o maior\n", (aux + num3 + abs(aux - num3)) / 2);
    return 0;
}