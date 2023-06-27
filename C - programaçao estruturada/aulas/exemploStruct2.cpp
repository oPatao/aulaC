#include <stdio.h>
main(){
    struct facil
    {
        int num;
        char ch;

    };
    struct facil xx1;
    struct facil xx2;
    
    xx1.num = 2;
    xx1.ch = 'Z';
    xx2.num = 3;
    xx2.ch = 'Y';

    printf("xx1.num = %d\nxx1.ch = %c\nxx2.num = %d\nxx2.ch = %c", xx1.num, xx1.ch, xx2.num, xx2.ch);

    return 0;

    
    
}