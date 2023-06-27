/*Nome: Gabriel Henrique de Oliveira Pereiras
turma:GPE02M0392

Crie um programa em C que receba três números do usuário depois crie uma função que receba
os 3 números como parâmetros: A, B e C. Ordene de tal forma que, ao final da função, A contenha
o menor número e C o maior. Imprima os três números. Obs: Utilize ponteiro para solucionar o
problema.*/

#include <stdio.h>

void ordenarNumeros(int *a, int *b, int *c) {
    int temp;
    
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    
    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
    
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int a, b, c;
    
    printf("Digite tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);
    
    ordenarNumeros(&a, &b, &c);
    
    printf("Numeros ordenados: %d %d %d\n", a, b, c);
    
    return 0;
}
