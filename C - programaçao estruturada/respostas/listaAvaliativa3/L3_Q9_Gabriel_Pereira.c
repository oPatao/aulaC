/*Nome: Gabriel Henrique de Oliveira Pereira
turma:GPE02M0392

Faça um programa em C que armazene em um vetor 3 valores, e imprima os valores utilizando
notação de ponteiro.*/

#include <stdio.h>

int main() {
    int valores[3] = {10, 20, 30};
    int *ponteiro;

    ponteiro = valores; 

    printf("Valor 1: %d\n", *ponteiro);
    printf("Valor 2: %d\n", *(ponteiro + 1));
    printf("Valor 3: %d\n", *(ponteiro + 2));

    return 0;
}
