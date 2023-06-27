/*usando ponteiros à estrutura, crie um programa para imprimir na tela: hora, minutos e segundos.
OBS: os valores podem ser predeterminados.
*/

#include <stdio.h>


typedef struct {
    int hora;
    int minutos;
    int segundos;
} Hora;

void imprimirHora(Hora *pHora) {
    printf("Hora: %02d:%02d:%02d\n", pHora->hora, pHora->minutos, pHora->segundos);
}

int main() {
    Hora horaAtual;


    horaAtual.hora = 12;
    horaAtual.minutos = 30;
    horaAtual.segundos = 45;


    Hora *pHora = &horaAtual;

    imprimirHora(pHora);

    return 0;
}
