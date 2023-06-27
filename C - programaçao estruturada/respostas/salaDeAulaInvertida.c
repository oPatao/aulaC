// Fazer uma lista encadeado usando calloc, malloc, realloc e free gravar um video e postar

#include <stdlib.h>
#include <stdio.h>

typedef struct node 
{
    int dados;
    struct node* next;
    
} node;

node* criarNode(int dados){
    node* novoNode = (node*)malloc(sizeof(node));
    novoNode -> dados= dados;
    novoNode->next = NULL;
    return novoNode;
}

void nodeNoInicio(node** head, int dados){
    node* novoNode = criarNode(dados);
    novoNode->next = *head;
    *head = novoNode;
}

void mostrarLista(node* head){
    node* atual = head;
    while (atual != NULL)
    {
        printf("%d -> ", atual->dados);
        atual = atual->next;
    }
    printf("NULL\n");
    
}

int main() {
    node* head = NULL;

    nodeNoInicio(&head, 3);
    nodeNoInicio(&head, 4);
    nodeNoInicio(&head, 5);

    mostrarLista(head);

    return 0;
}