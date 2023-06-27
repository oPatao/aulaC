/*
Nome: Gabriel Henrique De Oliveira Pereira
turma:GPE02M0392

Crie um programa que armazene 3 nomes numa matriz de strings. Após o
cadastro, você deverá criar um MENU que informe:
1 – Mostra os nomes cadastrados em maiúsculo e na ordem inversa, ou seja,
mostra do último ao primeiro nome cadastrado;
2 – Mostra quantas pessoas com o nome “PAULO” foram cadastradas;
3 - Mostra quantas letras ‘A’ foram cadastradas na matriz de strings;
4 – Mostra quantas letras ‘C’ o segundo nome cadastrado possui.
5 – SAIR
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void cadastrarNomes(char nomes[][50]) {
    int i;
    
    printf("Digite os nomes a serem cadastrados:\n");
    for (i = 0; i < 3; i++) {
        printf("Nome %d: ", i+1);
        scanf("%s", nomes[i]);
    }
}

void converterParaMaiusculo(char nome[]) {
    int i;
    
    for (i = 0; i < strlen(nome); i++) {
        nome[i] = toupper(nome[i]);
    }
}

void mostrarNomesInvertidos(char nomes[][50]) {
    int i;
    
    printf("Nomes cadastrados em maiusculo e na ordem inversa:\n");
    for (i = 2; i >= 0; i--) {
        converterParaMaiusculo(nomes[i]);
        printf("%s\n", strrev(nomes[i]));
    }
}

int contarPessoasComNome(char nomes[][50], char nome[]) {
    int i, contador = 0;
    
    for (i = 0; i < 3; i++) {
        if (strcmpi(nomes[i], nome) == 0) {
            contador++;
        }
    }
    
    return contador;
}

int contarLetrasA(char nomes[][50]) {
    int i, j, contador = 0;
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < strlen(nomes[i]); j++) {
            if (toupper(nomes[i][j]) == 'A') {
                contador++;
            }
        }
    }
    
    return contador;
}

int contarLetrasC(char nome[]) {
    int i, contador = 0;
    
    for (i = 0; i < strlen(nome); i++) {
        if (toupper(nome[i]) == 'C') {
            contador++;
        }
    }
    
    return contador;
}

void exibirMenu(char nomes[][50]) {
    int opcao, contador;
    char nomeConsulta[50];
    
    do {
        printf("\nMENU:\n");
        printf("1 - Mostrar os nomes cadastrados em maiusculo e na ordem inversa\n");
        printf("2 - Mostrar quantas pessoas com o nome \"PAULO\" foram cadastradas\n");
        printf("3 - Mostrar quantas letras 'A' foram cadastradas na matriz de strings\n");
        printf("4 - Mostrar quantas letras 'C' o segundo nome cadastrado possui\n");
        printf("5 - Sair\n");
        printf("Digite sua opcao: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                mostrarNomesInvertidos(nomes);
                break;
            case 2:
                contador = contarPessoasComNome(nomes, "PAULO");
                printf("Quantidade de pessoas com o nome \"PAULO\": %d\n", contador);
                break;
            case 3:
                contador = contarLetrasA(nomes);
                printf("Quantidade de letras 'A' cadastradas: %d\n", contador);
                break;
            case 4:
                contador = contarLetrasC(nomes[1]);
                printf("Quantidade de letras 'C' no segundo nome cadastrado: %d\n", contador);
                break;
            case 5:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }
    } while (opcao != 5);
}

int main() {
    char nomes[3][50];
    
    cadastrarNomes(nomes);
    exibirMenu(nomes);
    
    return 0;
}