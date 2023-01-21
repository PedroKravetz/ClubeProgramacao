#include <stdio.h>;

int main()
{
    float num1, num2;
    scanf("%f", &num1);
    scanf("%f", &num2);
    printf("MEDIA = %.5f\n", (num1 * 3.5 + num2 * 7.5) / 11);
    return 0;
}