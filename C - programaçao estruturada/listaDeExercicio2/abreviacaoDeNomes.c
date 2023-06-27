#include <stdio.h>

int main()

{

    char primeiroNome[20], nomeDoMeio[20], ultimoNome[20]; /* person’s name */


     printf("Insira o nome completo ('primeiroNome' 'nomeDoMeio' 'ultimoNome'): " );

     scanf("%s %s %s", &primeiroNome, &nomeDoMeio, &ultimoNome);

     printf("\nNome Abreviado: ");

     printf("%s %c. %c.\n", ultimoNome, primeiroNome[0], nomeDoMeio[0]);

     return 0;

}

