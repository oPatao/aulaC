/*DESCOBRIR O DESCONTO DE UM CLIENTE DE ACORDO COM UMA COR ESCOLIDA PELO MESMO
azul = 50%
vermelho = 25%
Branco = 10%x
*/



#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int x;
    float valor, desconto, total;

    printf("digite o valor da compra: ");
    scanf("%f", &valor);

    printf("\n\n1.azul\n2.vermelho\n3.branco");
    printf("\ndigite o numero que representa a cor do seu disconto: ");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        desconto = 0.5;

        printf("\n\nSeu desconto eh de 50%");
        total = valor*desconto;

        printf("\no novo valor total da sua conta eh: %.2f\n\n", total);

        break;
    
    case 2:
        desconto = 0.7;

        printf("\n\nSeu desconto eh de 30%");
        total = valor * desconto;

        printf("\no novo valor total da sua conta eh: %.2f\n\n", total);

        break;

    case 3:
        desconto = 0.90;

        printf("\n\nSeu desconto eh de 10%");
        total = valor * desconto;

        printf("\no novo valor total da sua conta eh: %.2f\n\n", total);

        break;
    
    default:
        printf("\n\nINVALIDA\n\n\n");
        break;
    }

    system("pause");
}