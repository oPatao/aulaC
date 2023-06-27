/*nome: Gabriel Henrique de oliveira pereira
turma:GPE02M0392

Faça um programa que leia o nome, o time e a quantidade de gols de 3 jogadores
de futebol. Após o cadastro informe:
a) A quantidade total de gols marcados;
b) Quantos jogadores jogam no FLAMENGO;
c) Todos os dados do artilheiro.
*/
#include <stdio.h>
#include <string.h>

#define NUM_JOGADORES 3

typedef struct {
    char nome[50];
    char time[50];
    int gols;
} Jogador;

void lerDadosJogadores(Jogador jogadores[]) {
    int i;
    
    printf("Cadastro de Jogadores:\n");
    for (i = 0; i < NUM_JOGADORES; i++) {
        printf("Jogador %d:\n", i+1);
        printf("Nome: ");
        scanf("%s", jogadores[i].nome);
        printf("Time: ");
        scanf("%s", jogadores[i].time);
        printf("Quantidade de gols: ");
        scanf("%d", &jogadores[i].gols);
        
        printf("\n");
    }
}

int calcularQuantidadeTotalGols(Jogador jogadores[]) {
    int i;
    int totalGols = 0;
    
    for (i = 0; i < NUM_JOGADORES; i++) {
        totalGols += jogadores[i].gols;
    }
    
    return totalGols;
}

int contarJogadoresFlamengo(Jogador jogadores[]) {
    int i;
    int contador = 0;
    
    for (i = 0; i < NUM_JOGADORES; i++) {
        if (strcmp(jogadores[i].time, "FLAMENGO") == 0) {
            contador++;
        }
    }
    
    return contador;
}

void encontrarArtilheiro(Jogador jogadores[]) {
    int i;
    int artilheiroIndex = 0;
    
    for (i = 1; i < NUM_JOGADORES; i++) {
        if (jogadores[i].gols > jogadores[artilheiroIndex].gols) {
            artilheiroIndex = i;
        }
    }
    
    printf("Artilheiro:\n");
    printf("Nome: %s\n", jogadores[artilheiroIndex].nome);
    printf("Time: %s\n", jogadores[artilheiroIndex].time);
    printf("Gols: %d\n", jogadores[artilheiroIndex].gols);
}

int main() {
    Jogador jogadores[NUM_JOGADORES];
    
    lerDadosJogadores(jogadores);
    
    int totalGols = calcularQuantidadeTotalGols(jogadores);
    printf("Quantidade total de gols marcados: %d\n", totalGols);
    
    int quantidadeFlamengo = contarJogadoresFlamengo(jogadores);
    printf("Quantidade de jogadores que jogam no FLAMENGO: %d\n", quantidadeFlamengo);
    
    encontrarArtilheiro(jogadores);
    
    return 0;
}
