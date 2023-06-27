/*Nome: Gabriel Henrique de Oliveira Pereira
turma:GPE02M0392

Desenvolva um programa que declare um vetor de inteiros e um ponteiro para inteiros. Associe
o ponteiro ao vetor. Agora, some mais um (+1) a cada posição do vetor usando o ponteiro (use *).
*/
#include <stdio.h>

int main() {
    int vetor[5] = {1, 2, 3, 4, 5};
    int *ponteiro = vetor; 
    int i;

    printf("Valores originais do vetor: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    
    for (i = 0; i < 5; i++) {
        (*ponteiro)++;
        ponteiro++;
    }

    printf("Valores atualizados do vetor: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
