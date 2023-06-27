#include <stdio.h>

struct listaDeLivros
{
    
    char titulo [30];
    int regnum;
};

main(){
    struct listaDeLivros livro1 ={"O Pequeno Principe", 192};
    struct listaDeLivros livro2 ={"O Grande Principe", 148};
    
    printf("\t Livros disponiveis:\n");
    printf("\n\t%s (%d)\n", livro1.titulo, livro1.regnum);
    printf("\n\t%s (%d)", livro2.titulo , livro2.regnum);

    return 0;
        
}