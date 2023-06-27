#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char nome[80];
    printf("Digite o seu nome: ");
    gets(nome);
    puts("saudacoes, ");
    puts(nome);
    puts("puts pula linha linha sozinho");
    puts(&nome[4]);
    system ("pause");

}