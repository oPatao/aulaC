#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){

    int nota[5], i;
    float media;

    //atividade 1
        for (i = 0; i < 5; i++)
    {
        printf("qual a nota de n %d :", i);
        scanf("%d", &nota[i]);
    }

    media = (nota[0]+nota[1]+nota[2]+nota[3]+nota[4])/5;

    printf("\na media das notas eh: %.1f", media);

    system("pause"); 

}