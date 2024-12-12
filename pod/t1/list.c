#include "list.h"

node *insList(node *first, node *l) {
    node *aux;
    if (first == NULL) {
        return l;
    }
    for (aux = first; aux->next != NULL; aux=aux->next);
    aux->next = l;
    return first;
}

void printList(node *first) {
    node *aux;
    for (aux = first; aux != NULL; aux=aux->next) {
        printf("%d ", aux->value);
    }
    printf("\n");
}

node *constructList(int *vector, int size) {
    node *first = NULL, *l;
    for(int i = 0; i<size; i++) {
        l = (node *)malloc(sizeof(node));
        l->value = vector[i];
        l->next = NULL;
        first = insList(first, l);
    }
    return first;
}

void listToArray(node* first, int* arr) {
    node *current = first;
    int i = 0;
    while (current != NULL) {
        arr[i++] = current->value;
        current = current->next;
    }
}

void arrayToList(node* first, int* arr) {
    node* current = first;
    int i = 0;
    while (current != NULL) {
        current->value = arr[i++];
        current = current->next;
    }
}

int countListElements(node* first) {
    int count = 0;
    node* current = first;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

void freeList(node *first) {
  if (first == NULL) return;
  freeList(first->next);
  free(first);
}