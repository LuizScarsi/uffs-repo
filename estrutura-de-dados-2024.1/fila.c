#include <stdio.h>
#include <stdlib.h>

// FIFO
// Insere na última posição da lista
// Remove o primeiro da lista (o elemento que está mais tempo)

typedef int Item;

typedef struct TQueue {
  int item;
  struct TQueue *next;
} EQueue;

typedef struct {
  EQueue *head;
  EQueue *tail;
} Queue;

void insertQueue(Queue *queue, int item);
void deQueue(Queue *queue, int *item);
void initQueue(Queue *queue);
int isEmpty(Queue *queue);
void freeAll(Queue *queue);

int main() {
  Queue queue;
  int item;

  initQueue(&queue);

  for (int i = 0; i < 10; i++) {
    item = i;

    printf("Inserindo na fila o item %d.\n", item);
    insertQueue(&queue, item);
  }

  while (isEmpty(&queue) == 0) { // enquanto a fila não estiver vazia
    deQueue(&queue, &item);
    printf("Item %d removido da fila\n", item);
  }

  freeAll(&queue);
  return 0;
}

void insertQueue(Queue *queue, int item) {
  EQueue *aux;

  // Cria um novo elemento da lista encadeada que representa a fila
  // e armazena neste novo elemento o item a ser inserido na fila
  aux = (EQueue *)malloc(sizeof(EQueue));
  aux->item = item;
  aux->next = NULL;

  // Insere o novo elemento no fim da lista encadeada que representa a fila
  if (queue -> head == NULL) {
    queue->head = aux;
    queue->tail = aux;
  } else {
    queue->tail->next = aux;
    queue->tail = aux;
  }
}

void deQueue(Queue *queue, int *item) {
  EQueue *aux;

  // Verificar se a fila está vazia

  // Armazena o item a ser removido da fila
  *item = queue->head->item;

  // Armazena o primeiro item da lista encadeada que representa a fila
  // e remove este primeiro elemento da lista
  aux = queue -> head;
  if (queue -> head == queue -> tail) {
    queue -> head = NULL;
    queue -> tail = NULL;
  } else {
    queue -> head = queue -> head -> next;
  }

  // Libera memória alocada para o elemento removido
  free(aux);
}

int isEmpty(Queue *queue) {
  return (queue -> head == NULL);
}

void initQueue(Queue *queue) {
  queue -> head = NULL;
  queue -> tail = NULL;
}

void freeAll(Queue *queue) {
  EQueue *aux;

  while (queue -> head != NULL) {
    // Armazena o primeiro elemento da lista que representa a fila
    // e remove este primeiro elemento da lista
    aux = queue -> head;
    queue -> head = queue -> head -> next;

    // Libera a memória alocada para o elemento removido
    free(aux);
  }
  queue -> tail = NULL;
}