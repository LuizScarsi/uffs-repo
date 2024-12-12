#ifndef LISTA_H
#define LISTA_H

#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node in the list
typedef struct Node {
    int value;
    struct Node *next;
} node;

// Inserts the node l at the end of the list
node *insList(node *first, node *l);

// Prints all list nodes
void printList(node *first);

// Constructs a list from given vector
node *constructList(int *vector, int size);

// Stores all list elements into an array
void listToArray(node* first, int* arr);

// Assigns shuffled array values back to the list
void arrayToList(node* first, int* arr);

// Counts the number of elements in the list
int countListElements(node* first);

// Frees the memory allocated in the list
void freeList(node *first);

#endif //LISTA_H