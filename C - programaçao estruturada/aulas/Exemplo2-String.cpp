/*gets()*/
#include <stdio.h>
#include <stdlib.h>

int main(){

    char nome[80];

    printf("digite seu nome: ");
    gets(nome);
    printf("saudações, %s", nome);
    system ("pause");
}