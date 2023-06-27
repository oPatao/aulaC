//array bubblesort
#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 10

int main(){

    setlocale(LC_ALL, "");

    int numeros[TAM], i, aux, contador;

    printf("ENTRE COM OS 10 NUMEROS PARA PREENCHER O ARRAY\nPRESSIONE ENTER APOS CADA VALOR DIGITADO\n");

    for (i=0; i<TAM; i++){
    scanf("%d", &numeros[i]);
    }
    printf("ORDEM ATUAL DOS ITENS DO ARRAY");

    for (i=0; i<TAM; i++){
    printf("%d", numeros[i]);
    }
    for (contador = 1; contador<TAM; contador++)
    {
        
        for (i=0; i<TAM; i++){
            if (numeros[i]>numeros[i+1])
            {
                aux = numeros[i];
                numeros [i] = numeros[i+1];
                numeros[i+1] = aux;
            }
        }
        printf("\nELEMENTOS EM ORDEM CRESCENTE:\n");

        for ( i = 0; i < TAM; i++)
        {
            printf("\n%d", numeros[i]); 
        }
        system ("pause");
    }
    
}
