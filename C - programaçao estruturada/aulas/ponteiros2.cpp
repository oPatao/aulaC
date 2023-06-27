#include <stdio.h>

int main(){
    int x = 10;
    int *ponteiro = &x;

    int y = 20;

    *ponteiro = y;

    printf ("%i\t%i\n", x, y);
    
    return 0;
}