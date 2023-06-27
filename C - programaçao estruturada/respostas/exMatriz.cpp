/*criar um programa que execute uma matriz 3x3, em que os valores são kançados de acordo
com a linha e coluna, e a mesma é montada no formato da matriz*/

#include <stdlib.h>
#include <stdio.h>

int main (){

    int matriz [3] [3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\ndigite o numero da linha %d, e coluna %d: ", i, j);
            scanf("%d", &matriz[j][i]);
        }
        
    }
     for (int m = 0; m < 5; m++)
    {
        for (int n = 0; n < 5; n++)
        {
            printf("%i ", matriz[m][n]);
        }
        printf("\n");
    }
    
    return 0;


}