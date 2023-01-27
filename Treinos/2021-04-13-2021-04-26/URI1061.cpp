#include <bits/stdc++.h>
using namespace std;

int main()
{
    int dia1, hora1, minutos1, segundos1, dia2, hora2, minutos2, segundos2;
    int tempo1, tempo2, hora, segundo, minutos, dia;
    scanf("Dia %d %d : %d : %d Dia %d %d : %d : %d", &dia1, &hora1, &minutos1, &segundos1, &dia2, &hora2, &minutos2, &segundos2);
    tempo1 = segundos1 + minutos1 * 60 + hora1 * 60 * 60 + dia1 * 60 * 60 * 24;
    tempo2 = segundos2 + minutos2 * 60 + hora2 * 60 * 60 + dia2 * 60 * 60 * 24;
    tempo2 -= tempo1;
    dia = tempo2 / (60 * 60 * 24);
    tempo2 = tempo2 % (60 * 60 * 24);
    hora = tempo2 / (60 * 60);
    tempo2 = tempo2 % (60 * 60);
    minutos = tempo2 / 60;
    segundo = tempo2 % 60;
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dia, hora, minutos, segundo);
    return 0;
}