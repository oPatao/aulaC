#include <stdio.h>

int main(){
    int x = 10;
    int *ponteiro = &x;

    printf ("%i\n", *ponteiro);
    printf ("%i\n", ponteiro);
    return 0;
}