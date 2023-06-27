/*nome: Gabriel Henrique de Oliveira Pereira
turma:GPE02M0392

Faça um programa que leia o nome, sexo e o valor da mensalidade de 3 alunos.
Após a leitura dos dados informe:
a) O valor da menor mensalidade;
b) A quantidade de alunos do sexo masculino ('M');
c) A média das mensalidades;
d) O nome e a idade do aluno mais velho.*/
#include <stdio.h>
#include <string.h>

#define NUM_ALUNOS 3

typedef struct {
    char nome[50];
    char sexo;
    float mensalidade;
} Aluno;

void lerDadosAlunos(Aluno alunos[]) {
    int i;
    
    printf("Cadastro de Alunos:\n");
    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d:\n", i+1);
        printf("Nome: ");
        scanf("%s", alunos[i].nome);
        printf("Sexo (M/F): ");
        scanf(" %c", &alunos[i].sexo);
        printf("Mensalidade: ");
        scanf("%f", &alunos[i].mensalidade);
        
        printf("\n");
    }
}

float calcularMenorMensalidade(Aluno alunos[]) {
    int i;
    float menorMensalidade = alunos[0].mensalidade;
    
    for (i = 1; i < NUM_ALUNOS; i++) {
        if (alunos[i].mensalidade < menorMensalidade) {
            menorMensalidade = alunos[i].mensalidade;
        }
    }
    
    return menorMensalidade;
}

int contarAlunosMasculinos(Aluno alunos[]) {
    int i;
    int contador = 0;
    
    for (i = 0; i < NUM_ALUNOS; i++) {
        if (alunos[i].sexo == 'M') {
            contador++;
        }
    }
    
    return contador;
}

float calcularMediaMensalidades(Aluno alunos[]) {
    int i;
    float somaMensalidades = 0.0;
    
    for (i = 0; i < NUM_ALUNOS; i++) {
        somaMensalidades += alunos[i].mensalidade;
    }
    
    return somaMensalidades / NUM_ALUNOS;
}

void encontrarAlunoMaisVelho(Aluno alunos[]) {
    int i;
    int maiorIdade = 0;
    int alunoIndex = -1;
    
    for (i = 0; i < NUM_ALUNOS; i++) {
        int idade;
        printf("Idade do aluno %s: ", alunos[i].nome);
        scanf("%d", &idade);
        
        if (idade > maiorIdade) {
            maiorIdade = idade;
            alunoIndex = i;
        }
    }
    
    if (alunoIndex != -1) {
        printf("Aluno mais velho: %s, idade: %d\n", alunos[alunoIndex].nome, maiorIdade);
    } else {
        printf("Nenhum aluno cadastrado.\n");
    }
}

int main() {
    Aluno alunos[NUM_ALUNOS];
    
    lerDadosAlunos(alunos);
    
    float menorMensalidade = calcularMenorMensalidade(alunos);
    printf("Menor mensalidade: %.2f\n", menorMensalidade);
    
    int quantidadeMasculinos = contarAlunosMasculinos(alunos);
    printf("Quantidade de alunos do sexo masculino: %d\n", quantidadeMasculinos);
    
    float mediaMensalidades = calcularMediaMensalidades(alunos);
    printf("Media das mensalidades: %.2f\n", mediaMensalidades);
    
    encontrarAlunoMaisVelho(alunos);
    
    return 0;
}
