/*
nome: Gabriel Henrique de Oliveira Pereira
turma:GPE02M0392
*/

#include <stdio.h>
#include <stdlib.h>


int main (){

    int base, altura, area, nota[5], i, idade, aulasMinistradas, presencas, ADVINHA;
    float media, notaFinal, presencasMinimas;

    //atividade 1
        for (i = 0; i < 5; i++)
    {
        printf("qual a nota de n %d :", i);
        scanf("%d", &nota[i]);
    }

    media = (nota[0]+nota[1]+nota[2]+nota[3]+nota[4])/5;

    printf("\na media das notas eh: %.1f", media);
         


    //atividade 2
    base = 3;
    altura = 4;

    area = (base*altura)/2;

    printf("\na area do trianglo: %d", area);

    //atividade 3

    printf("\n\nqual a sua idade? \t");
    scanf("%d", &idade);

    if (idade < 30)
    {
        printf("\nvoce eh muito jovem");

    }

    if (idade > 70)
    {
        printf("\nVelho");
    }else if(idade <= 70 && idade >= 21){
        printf("\nAdulto");
    }else{
        printf("\njovem");
    }

    //exercicio 4 

    printf("\n\nNota final: ");
    scanf("%f", &notaFinal);

    printf("\nTotal de presencas: ");
    scanf("%d", &presencas);

    printf("\nAulas ministradas: ");
    scanf("%d", &aulasMinistradas);

    presencasMinimas = aulasMinistradas*0.75;

    if (notaFinal > 6 && presencas >= presencasMinimas)
    {
        printf("\nAPROVADO");
    }else{printf("\nREPROVADO");}

    //exercicio 5
    printf("\n\nfala um numero: ");
    scanf("%d", &ADVINHA);

    if (ADVINHA < 10)
    {
        printf("\nMenor que 10");
    }else if(ADVINHA > 10){
        printf("\nMaior que 10");
    }else{
        printf("Voce acertou");
    }
    

    system("pause");

}
