//Projeto final - Gabriel henrique de Oliveira Pereira

#include <stdio.h>

float calcularPeso(float volume) {
    float R = 25.0;
    return volume * R;
}

int main() {
    float peso = 0.0;
    float altura, largura, comprimento;
    char opcao, opcao2;
    int novoCalculo = 1;

    do
    {
    
        do {
            printf("\033[1;36m");  // Texto ciano brilhante
            printf("========== Calculadora de Guindaste ==========\n");
            printf("\033[0m");  // Texto padrão

            printf("Opcoes:\n");
            printf("1. Fazer um novo calculo\n");
            printf("2. Ver o peso e o ultimo guindaste recomendado\n");
            printf("3. Ver apenas o ultimo peso\n");
            printf("4. Sair\n");
            printf("Escolha uma opcao: ");
            scanf(" %c", &opcao);

            switch (opcao) {
                case '1':
                    printf("\nDigite a altura do bloco: ");
                    scanf("%f", &altura);

                    printf("Digite a largura do bloco: ");
                    scanf("%f", &largura);

                    printf("Digite o comprimento do bloco: ");
                    scanf("%f", &comprimento);

                    float volume = altura * largura * comprimento;
                    peso = calcularPeso(volume);
                    novoCalculo = 1;
                    break;

                case '2':
                    printf("\nUltimo peso calculado: %.2f\n", peso);

                    if (peso <= 1000.0) {
                        printf("Ultimo guindaste recomendado: G1\n");
                    } else if (peso > 1000.0 && peso <= 3000.0) {
                        printf("Ultimo guindaste recomendado: G3\n");
                    } else {
                        printf("Ultimo guindaste recomendado: G2\n");
                    }

                    novoCalculo = 0;
                    break;

                case '3':
                    printf("\nUltimo peso calculado: %.2f\n", peso);
                    novoCalculo = 0;
                    break;

                case '4':
                    novoCalculo = 0;
                    break;

                default:
                    printf("\nOpcao invalida. Por favor, escolha novamente.\n");
                    novoCalculo = 0;
                    break;
            }

            printf("\n");

        } while (novoCalculo);

        printf("\nDeseja calcular novamente? (S/N): ");
        scanf(" %c", &opcao2);

    } while (opcao2 == 'S' || opcao2 == 's');

    return 0;
}
