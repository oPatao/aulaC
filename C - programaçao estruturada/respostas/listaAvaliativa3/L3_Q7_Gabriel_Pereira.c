/*Nome: Gabriel Henrique de Oliveira Pereira
turma:GPE02M0392

    Considere as linhas de código abaixo:

    Qual a opção abaixo irá alterar o valor de i para 30.
a) k = 30; b) *k = 30; c) p = 30; d) *p = 30;
R: d)*p=30
*/

#include <stdio.h>

int main(){
    int *p, i, k;

    i = 42;
    
    

    k = i;

    p = &i;

    *p = 30;

    printf("%d", i);

    return 0;
}