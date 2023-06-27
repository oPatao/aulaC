/*
Nome: Gabriel Henrique de Oliveira Pereira
turma:GPE02M0392

Crie um programa que carregue (armazene) números numa matriz 3 x 3.
Após a leitura dos números, você deverá criar um MENU que ofereça as seguintes
opções:
1 – Mostra a quantidade de números pares armazenados;
2 – Mostra a soma dos números ímpares armazenados;
3 – Mostra o maior e o menor número armazenado;
4 – Mostra a média dos números armazenados;
5 – Mostra a quantidade de números armazenados que são iguais a 10;
6 – Mostra a multiplicação dos números armazenados na diagonal principal
(índice da linha igual ao índice da coluna);
7 – Mostra a soma dos números armazenados que são divisíveis por 5.
8 – Armazena num vetor todos os números menores que 8. Mostrar o vetor
resultante.
9 – Consulta um número na matriz. O usuário deverá informar qual o número
deseja procurar na matriz, caso encontre, informar o número e qual a posição(índices)
na matriz.
10 – SAIR
*/
#include <stdio.h>
#include <stdlib.h>

void lerNumeros(int matriz[][3]) {
    int i, j;
    
    printf("Digite os numeros para preencher a matriz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

int contarPares(int matriz[][3]) {
    int i, j, contador = 0;
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] % 2 == 0) {
                contador++;
            }
        }
    }
    
    return contador;
}

int somarImpares(int matriz[][3]) {
    int i, j, soma = 0;
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] % 2 != 0) {
                soma += matriz[i][j];
            }
        }
    }
    
    return soma;
}

int encontrarMaiorNumero(int matriz[][3]) {
    int i, j, maior = matriz[0][0];
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }
    
    return maior;
}

int encontrarMenorNumero(int matriz[][3]) {
    int i, j, menor = matriz[0][0];
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }
    
    return menor;
}

float calcularMedia(int matriz[][3]) {
    int i, j, soma = 0;
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
    }
    
    return (float) soma / 9;
}

int contarNumerosIguais(int matriz[][3], int numero) {
    int i, j, contador = 0;
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] == numero) {
                contador++;
            }
        }
    }
    
    return contador;
}

int multiplicarDiagonalPrincipal(int matriz[][3]) {
    int i, produto = 1;
    
    for (i = 0; i < 3; i++) {
        produto *= matriz[i][i];
    }
    
    return produto;
}

int somarDivisiveisPor5(int matriz[][3]) {
    int i, j, soma = 0;
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] % 5 == 0) {
                soma += matriz[i][j];
            }
        }
    }
    
    return soma;
}

void armazenarMenoresQue8(int matriz[][3], int vetor[], int *tamanhoVetor) {
    int i, j;
    
    *tamanhoVetor = 0;
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] < 8) {
                vetor[*tamanhoVetor] = matriz[i][j];
                (*tamanhoVetor)++;
            }
        }
    }
}

void consultarNumero(int matriz[][3], int numero) {
    int i, j, encontrado = 0;
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] == numero) {
                printf("Numero encontrado na posicao [%d][%d]\n", i, j);
                encontrado = 1;
            }
        }
    }
    
    if (!encontrado) {
        printf("Numero nao encontrado na matriz.\n");
    }
}

void exibirMenu(int matriz[][3]) {
    int opcao, numeroConsulta, vetorMenoresQue8[9], tamanhoVetor;
    
    do {
        printf("\nMENU:\n");
        printf("1 - Mostrar quantidade de numeros pares\n");
        printf("2 - Mostrar soma dos numeros impares\n");
        printf("3 - Mostrar o maior e o menor numero armazenado\n");
        printf("4 - Mostrar a media dos numeros armazenados\n");
        printf("5 - Mostrar a quantidade de numeros armazenados que sao iguais a 10\n");
        printf("6 - Mostrar a multiplicacao dos numeros armazenados na diagonal principal\n");
        printf("7 - Mostrar a soma dos numeros armazenados que sao divisiveis por 5\n");
        printf("8 - Armazenar num vetor todos os numeros menores que 8 e mostrar o vetor resultante\n");
        printf("9 - Consultar um numero na matriz\n");
        printf("0 - Sair\n");
        printf("Digite sua opcao: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                printf("Quantidade de numeros pares: %d\n", contarPares(matriz));
                break;
            case 2:
                printf("Soma dos numeros impares: %d\n", somarImpares(matriz));
                break;
            case 3:
                printf("Maior numero: %d\n", encontrarMaiorNumero(matriz));
                printf("Menor numero: %d\n", encontrarMenorNumero(matriz));
                break;
            case 4:
                printf("Media dos numeros: %.2f\n", calcularMedia(matriz));
                break;
            case 5:
                printf("Quantidade de numeros iguais a 10: %d\n", contarNumerosIguais(matriz, 10));
                break;
            case 6:
                printf("Multiplicacao dos numeros da diagonal principal: %d\n", multiplicarDiagonalPrincipal(matriz));
                break;
            case 7:
                printf("Soma dos numeros divisiveis por 5: %d\n", somarDivisiveisPor5(matriz));
                break;
            case 8:
                armazenarMenoresQue8(matriz, vetorMenoresQue8, &tamanhoVetor);
                printf("Numeros menores que 8: ");
                for (int i = 0; i < tamanhoVetor; i++) {
                    printf("%d ", vetorMenoresQue8[i]);
                }
                printf("\n");
                break;
            case 9:
                printf("Digite o numero que deseja consultar: ");
                scanf("%d", &numeroConsulta);
                consultarNumero(matriz, numeroConsulta);
                break;
            case 0:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }
    } while (opcao != 0);
}

int main() {
    int matriz[3][3];
    
    lerNumeros(matriz);
    exibirMenu(matriz);
    
    return 0;
}
