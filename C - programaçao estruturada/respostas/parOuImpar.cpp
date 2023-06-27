#include <stdio.h>

int main() {
    int num;
    printf("coloque um numero: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("\n%d eh par.", num);
    else
        printf("\n%d eh impar.", num);    
    return 0;
}