/*
Nome: Gabriel Henrique de Oliveira Pereira
turma:GPE02M0392

    Quais os valores impressos?
    pela forma que o codigo estava escrito, provavelmente nenhum valor seria impresso, ja que nao havia nem biblioteca nem int no main

    mas considerando o codigo arrumado: 44, 6422292, 12, 6422288, 6422292, 642230, 44, 6422292, 6422296, 44*/

#include <stdio.h>
#include <stdlib.h>

int main() {
int *pontA, *pontB, v1, v2;

v1 = 3;
v2 = 12;
pontA = &v1;
pontB = pontA;
*pontB = 44;
printf("Valores das variáveis");
printf("v1 (conteudo) = %d",v1);
printf("v1 (endereco) = %d",&v1);
printf("v2 (conteudo) = %d",v2);
printf("v2 (endereco) = %d",&v2);
printf("Valores dos ponteiros");
printf("pontA (conteudo) = %d",pontA);
printf("pontA (endereco) = %d",&pontA);
printf("pontA (valor do ponteiro) = %d",*pontA);
printf("pontB (conteudo) = %d",pontB);
printf("pontB (endereco) = %d",&pontB);
printf("pontB (valor do ponteiro) = %d",*pontB);


return 0;
}