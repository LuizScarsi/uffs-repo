#include "queue.h"

void insertQueue(Queue *queue, int item) {
  EQueue *aux;

  aux = (EQueue *)malloc(sizeof(EQueue));
  aux->item = item;
  aux->next = NULL;

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
  *item = queue->head->item;
  aux = queue -> head;

  if (queue -> head == queue -> tail) {
    queue -> head = NULL;
    queue -> tail = NULL;
  } else {
    queue -> head = queue -> head -> next;
  }
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
    aux = queue -> head;
    queue -> head = queue -> head -> next;
    free(aux);
  }
  queue -> tail = NULL;
}

void printQueue(Queue *queue) {
    EQueue *current = queue->head;

    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue items: ");
    while (current != NULL) {
        printf("%d ", current->item);
        current = current->next;
    }
    printf("\n");
}
