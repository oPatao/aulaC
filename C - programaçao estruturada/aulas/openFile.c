#include <stdlib.h>
#include <conio.h>

int main(){
    FILE *enderecoArquivo = fopen("testeamais.txt", "w");
    char ch;
    printf("digite varios caracteres: ");
    while ((ch = getche())=!'\r');
    
    putc(ch, enderecoArquivo);
    fclose(enderecoArquivo);
    
    

}