/*Nome: Gabriel Henrique de Oliveira Pereira
turma:GPE02M0392

) Qual o valor impresso para a e b ?
A= 10 B = 20*/

#include <stdio.h>
int main () {
int a = 5, b = 15;
int *pA, *pB;
pA = &a;
pB = &b;
*pA = 10;
*pB = *pA;
pA = pB;
*pA = 20;
printf (" a= %d", a);
printf(" b= %d ", b);
}
