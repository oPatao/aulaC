/* Imprimir de 1 a 10 na tela*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(void){
    int i, nota[5];
    float media;
    char continuar = 's';

    for ( i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }


    /*Criar um programa que peça ao usuario para entrar com 4 notas de um aluno, 
    caucule sua media e retorne o valor dessa media calculada*/
    
    while (continuar == 's')
    {
        
        for (i = 0; i < 4; i++)
        {
            printf("qual a nota de n %d :", i);
            scanf("%d", &nota[i]);
        }

        media = (float)(nota[0]+nota[1]+nota[2]+nota[3])/4;

        printf("\na media das notas eh: %.1f\n", media);

        printf("\ndeseja continuar(s/n): ");
        scanf("%c");
    }
    
    system("pause");
}