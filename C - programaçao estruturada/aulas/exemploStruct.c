#include <stdio.h>

struct facil
{
    int num;
    char ch;
};

int main (){
    
    struct facil reg1;

    reg1.num=2;
    reg1.ch='z';

    printf("reg1.num = %d, reg1.ch = %c", reg1.num, reg1.ch);

    return 0;
    
}