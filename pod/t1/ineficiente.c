#include <stdio.h>
#include <stdlib.h>

typedef struct Lista {
    int valor;
    struct Lista *next;
} lista;

// Insere o elemento l no fim da lista
lista *insLista(lista *first, lista *l);

// Cronstrói uma lista encadeada simples a partir do vetor
lista *constroiLista(int *vetor, int tamanho);

// Imprime todos os elementos da lista
void printLista(lista *first);

int main() {
    lista *first = NULL;
    int vetor[] = {1,3,4,2,6};
    first = constroiLista(vetor, 5);
    
    return 0;
}

lista *insLista(lista *first, lista *l) {
    lista *aux;
    if (first == NULL) {
        return l;
    }
    for (aux = first; aux->next != NULL; aux=aux->next);
    aux->next = l;
    return first;
}

void printLista(lista *first) {
    lista *aux;
    for (aux = first; aux != NULL; aux=aux->next) {
        printf("%d ", aux->valor);
    }
    printf("\n");
}

lista *constroiLista(int *vetor, int tamanho) {
    lista *first = NULL, *l;
    for(int i = 0; i<tamanho; i++) {
        printf("Inserindo o valor: %d na posição %d da lista\n", vetor[i], i);
        l = (lista *)malloc(sizeof(lista));
        l->valor = vetor[i];
        l->next = NULL;
        first = insLista(first, l);
    }
    return first;
}