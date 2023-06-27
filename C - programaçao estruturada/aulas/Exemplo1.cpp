#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    
    setlocale(LC_ALL, "");

    char nome[80];
    printf("digite o seu nome: ");
    scanf("%s", &nome);
    printf("\nSeja bem vindo, %s", nome);
    
    system ("pause");
}