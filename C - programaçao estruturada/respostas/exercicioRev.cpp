//leia doisvalores inteiros, no caso variaveis A e B. A seguir, calcule a soma entre
//eles e atribua a variavel SOMA. a seguir escrever o valor desta variavel.

#include <stdio.h>
#include <string>
#include <string.h>

int main(){

    int a, b, c, d, x, SOMA, PROD, DIFERENCA;
    float salario, salarioTotal, vendas, preco, valorTotal=0;
    char nomeVendedor [40];


    //L11 -> L18 ex1 e ex2
    a = 30;
    b = 10;

    x = a + b;
    SOMA = a + b;

    printf("%d", x);
    printf("\nSOMA = %d", SOMA);

    //L21 -> L24 ex3 / L25 -> L29 ex4
    a = 9;
    b = 3;

    PROD = a*b; 

    c = 1;
    d = 2;

    DIFERENCA = (a*b) - (c*d);
    
    printf("\nPRODUTO = %d\nDIFERENCA = %d", PROD, DIFERENCA);


    //L40 -> L52 ex5

    printf("\ninsira o nome do vendedor:  ");
    scanf("%s", &nomeVendedor);

    printf("\ninsira (em reais) o quanto ele vendeu: ");
    scanf("%f", &vendas);

    printf("\ninsira o salario desse vendedor: ");
    scanf("%f", &salario);

    salarioTotal = (salario) + (vendas*0.15);

    printf("\no salario com adicional do %c eh de %.2f", nomeVendedor, salarioTotal);

    //L56 -> L79 ex6

    
    printf("\nforneca o codigo do produto 1: ");
    scanf("%d", &a);

    printf("\nagora o preco: ");
    scanf("%f", &preco);

    printf("\nvalor de unidades: ");
    scanf("%d", &b);

    valorTotal = valorTotal + (preco * b);
    
    printf("\nforneca o codigo do produto 2: ");
    scanf("%d", &a);

    printf("\nagora o preco: ");
    scanf("%f", &preco);

    printf("\nvalor de unidades: ");
    scanf("%d", &b);

    valorTotal = valorTotal + (preco * b);

    printf("\nO total da sua compra eh: %.2f reais", valorTotal);

    // EX7



    return 0;
}