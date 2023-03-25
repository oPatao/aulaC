/*um programa que leia o numero de filhos e o salario de varias pessoas
e imprima o maior salario, a media salarial, percentual de salarios menores
que 100 e a media de filhos */

#include <stdlib.h>
#include <stdio.h>

int main (void){

    int filhos, filhosTotais = 0, pesquisados = 0, P100 = 0;
    float mediaSalarial, mediaFilhos, salario, percentualPessoas, maiorSalario = 0, salarioTotal=0;


    while (salario > 0);
    {
        pesquisados++;
        printf("\nNumero de filhos: ");
        scanf("%d", &filhos);

        printf("\nsalario (salario negativo fecha a pesquisa.): ");
        scanf("%f", &salario);

        if (maiorSalario < salario)
        {
            maiorSalario = salario;
        }

        if (salario <= 100)
        {
            P100++;
        }
        
        filhosTotais += filhos;

        if (salario >= 0 )
        {
            salarioTotal += salario;
        }
        
    }

    mediaSalarial = (float)salarioTotal/pesquisados;

    mediaFilhos = (float) filhosTotais/pesquisados;

    percentualPessoas = (float) P100/(pesquisados/100);

    printf("entre %d de pesquisados,\na  media salarial eh: %.2f,\na media de filhos eh: %.2f,\no maior salario eh: %.2f,\no percentual de pessoas com menos de 100 reais de salario eh: %.2f", pesquisados, mediaSalarial, mediaFilhos, maiorSalario, percentualPessoas);


    



    system("pause");
}