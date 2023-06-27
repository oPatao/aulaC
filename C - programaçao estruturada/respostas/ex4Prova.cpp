#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(){

    char nome[80];
    float valor, valorAjuste;

    puts("digite o nome do produto: ");
    gets(nome);

    puts("\ndigite o valor do produto: ");
    scanf("%f", &valor);

    valorAjuste = valor * 1.15;

    printf("\no valor ajustado do produto ( %s ) eh: %.2f\n", nome, valorAjuste);

    system ("pause");


}