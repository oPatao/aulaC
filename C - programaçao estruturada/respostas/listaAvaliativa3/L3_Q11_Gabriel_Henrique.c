/*Nome: Gabriel Henrique de Oliveira Pereira
turma:GPE02M0392

Desenvolva um programa em C que contenha um vetor contendo 5 elementos inteiros. Utilizando
apenas notação de ponteiros, leia esse vetor do teclado e imprima o endereço das posições
contendo valores pares.
*/

#include <stdio.h>

int main() {
    int vetor[5];
    int i;

    printf("Digite 5 numeros inteiros:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Endereco das posicoes com valores pares:\n");
    for (i = 0; i < 5; i++) {
        if (vetor[i] % 2 == 0) {
            printf("Posicao %d: %p\n", i, &vetor[i]);
        }
    }

    return 0;
}
