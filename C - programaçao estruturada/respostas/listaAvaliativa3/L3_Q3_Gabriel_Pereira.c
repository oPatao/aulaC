/*Nome: Gabriel Henrique de Oliveira Pereira
turma:GPE02M0392

Crie um programa em C que cadastre os dados de 5 alunos. Os dados a serem
cadastrados são: nome, matrícula, endereço, sexo, os nomes das 3 disciplinas e as 3
notas de cada disciplina que ele está cursando.
 Os dados devem ser cadastrados em um vetor e/ou matriz.
 Após o cadastro informe:
 a)Os dados dos alunos cadastrados e a sua situação ("aprovado" ou
"reprovado") em cada disciplina.
 b)Os dados do aluno com maior média em "LPI".
 c)A média geral dos alunos na disciplina "Algoritmo".
 d)A quantidade de alunos(as) reprovados em qualquer disciplina.*/

#include <stdio.h>
#include <string.h>

#define NUM_ALUNOS 5
#define NUM_DISCIPLINAS 3

typedef struct {
    char nome[50];
    int matricula;
    char endereco[100];
    char sexo;
    char disciplinas[NUM_DISCIPLINAS][50];
    float notas[NUM_DISCIPLINAS][3];
} Aluno;

void cadastrarAlunos(Aluno alunos[]) {
    int i, j;
    
    printf("Cadastro de Alunos:\n");
    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d:\n", i+1);
        printf("Nome: ");
        scanf("%s", alunos[i].nome);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Endereco: ");
        scanf("%s", alunos[i].endereco);
        printf("Sexo (M/F): ");
        scanf(" %c", &alunos[i].sexo);
        
        for (j = 0; j < NUM_DISCIPLINAS; j++) {
            printf("Disciplina %d: ", j+1);
            scanf("%s", alunos[i].disciplinas[j]);
            printf("Notas (3 notas): ");
            scanf("%f %f %f", &alunos[i].notas[j][0], &alunos[i].notas[j][1], &alunos[i].notas[j][2]);
        }
        
        printf("\n");
    }
}

void calcularSituacao(Aluno alunos[]) {
    int i, j;
    
    for (i = 0; i < NUM_ALUNOS; i++) {
        for (j = 0; j < NUM_DISCIPLINAS; j++) {
            float media = (alunos[i].notas[j][0] + alunos[i].notas[j][1] + alunos[i].notas[j][2]) / 3.0;
            
            if (media >= 6.0) {
                printf("%s - Disciplina: %s - Aprovado\n", alunos[i].nome, alunos[i].disciplinas[j]);
            } else {
                printf("%s - Disciplina: %s - Reprovado\n", alunos[i].nome, alunos[i].disciplinas[j]);
            }
        }
    }
}

void encontrarMaiorMediaLPI(Aluno alunos[]) {
    int i, j;
    float maiorMedia = 0.0;
    int alunoIndex = -1;
    
    for (i = 0; i < NUM_ALUNOS; i++) {
        for (j = 0; j < NUM_DISCIPLINAS; j++) {
            if (strcmp(alunos[i].disciplinas[j], "LPI") == 0) {
                float media = (alunos[i].notas[j][0] + alunos[i].notas[j][1] + alunos[i].notas[j][2]) / 3.0;
                
                if (media > maiorMedia) {
                    maiorMedia = media;
                    alunoIndex = i;
                }
            }
        }
    }
    
    if (alunoIndex != -1) {
        printf("Aluno com maior media em LPI: %s\n", alunos[alunoIndex].nome);
    } else {
        printf("Nenhum aluno esta cursando a disciplina LPI.\n");
    }
}

void calcularMediaGeralAlgoritmo(Aluno alunos[]) {
    int i, j;
    float somaMedias = 0.0;
    int contador = 0;
    
    for (i = 0; i < NUM_ALUNOS; i++) {
        for (j = 0; j < NUM_DISCIPLINAS; j++) {
            if (strcmp(alunos[i].disciplinas[j], "Algoritmo") == 0) {
                float media = (alunos[i].notas[j][0] + alunos[i].notas[j][1] + alunos[i].notas[j][2]) / 3.0;
                somaMedias += media;
                contador++;
            }
        }
    }
    
    if (contador > 0) {
        float mediaGeral = somaMedias / contador;
        printf("Media geral dos alunos na disciplina Algoritmo: %.2f\n", mediaGeral);
    } else {
        printf("Nenhum aluno esta cursando a disciplina Algoritmo.\n");
    }
}

int contarReprovados(Aluno alunos[]) {
    int i, j;
    int contador = 0;
    
    for (i = 0; i < NUM_ALUNOS; i++) {
        for (j = 0; j < NUM_DISCIPLINAS; j++) {
            float media = (alunos[i].notas[j][0] + alunos[i].notas[j][1] + alunos[i].notas[j][2]) / 3.0;
            
            if (media < 6.0) {
                contador++;
            }
        }
    }
    
    return contador;
}

void exibirMenu(Aluno alunos[]) {
    int opcao;
    
    do {
        printf("\nMENU:\n");
        printf("1 - Mostrar os dados dos alunos cadastrados e suas situacoes nas disciplinas\n");
        printf("2 - Mostrar o aluno com maior media em LPI\n");
        printf("3 - Calcular a media geral dos alunos na disciplina Algoritmo\n");
        printf("4 - Contar a quantidade de alunos reprovados em qualquer disciplina\n");
        printf("5 - Sair\n");
        printf("Digite sua opcao: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                calcularSituacao(alunos);
                break;
            case 2:
                encontrarMaiorMediaLPI(alunos);
                break;
            case 3:
                calcularMediaGeralAlgoritmo(alunos);
                break;
            case 4:
                printf("Quantidade de alunos reprovados: %d\n", contarReprovados(alunos));
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
    Aluno alunos[NUM_ALUNOS];
    
    cadastrarAlunos(alunos);
    exibirMenu(alunos);
    
    return 0;
}
    