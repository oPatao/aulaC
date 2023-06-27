#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int a = 0, b = 1, i, n, ancora;

    printf("Digite um número: ");
    scanf("%d", &n);

    printf("\nSérie de Fibonacci:\n\n");
    printf("%d\n", b);

    for(i = 0; i < n; i++) {

        ancora = a + b;
        a = b;
        b = ancora;

        printf("%d\n", ancora);
    }

    system ("pause");
}