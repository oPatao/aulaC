/*usar estrutura condicional encadeada, em que serão analizados os tipos de triangulo
partindo da premissa que ele deverá ser testado antes de verificar ou nao um triangulo*/
/*tipo de triangulo:equilátero, isóceles e escaleno*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool trianguloValido(int a, int b, int c){

    if (a + b <= c || a + c <= b || b + c <= a)

        return false;

    else{ return true; }
    
}

int main (void){

    int a, b, c;

    printf("me diga respectivamente o lado 'a' 'b' e 'c' do triangulo: ");

    scanf("\n %d \t %d \t %d", &a, &b, &c );


    if (trianguloValido(a, b, c))
    {
        
    if (a == b || a == c)
    {
        if (a == b && a == c)
        {
            printf("\neh equilatero\n");
             
        } else { printf("\neh isoceles\n"); }
        
    }else{ printf("\neh escaleno\n"); }

    }else{ printf("\ntriangulo invalido\n"); }
    
    
    system("pause");







}