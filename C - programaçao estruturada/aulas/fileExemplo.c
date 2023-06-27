#include <stdio.h>

int main(){
    FILE *arquivo;
    char leitura;
    arquivo = fopen("aula26.txt", "r");

    if (arquivo == NULL){
        printf("ERRO 404");
        return 0;
    }
    leitura= getc(arquivo);

    while (leitura != EOF)
    {
        putchar(leitura);
        leitura = getc(arquivo);
    }
    fclose(arquivo);
}