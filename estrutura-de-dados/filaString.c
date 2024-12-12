#include <stdio.h>
#include <stdlib.h>

typedef struct TQueue {
    char item;
    struct TQueue *next;
} EQueue;

typedef struct queue {
    EQueue *head;
    EQueue *tail;
} Queue;

void initQueue(Queue *q) {
    q->head = NULL;
    q->tail = NULL;
}

void enQueue(Queue *q, char item) {
    EQueue *aux;

    aux = (EQueue *)malloc(sizeof(EQueue));
    aux->item = item;
    aux->next = NULL;

    if (q->head == NULL) {
        q->head = aux;
        q->tail = aux;
    } else {
        q->tail->next = aux;
        q->tail = aux;
    }
}

void deQueue(Queue *q, char *item) {
    EQueue *aux;
    *item = q->head->item;
    aux = q->head;

    if (q->head == q->tail) {
        q->head = NULL;
        q->tail = NULL;
    } else {
        q->head = q->head->next;
    }
    free(aux);
}

int isEmpty(Queue *q) {
    return (q->head == NULL);
}

int main() {
    Queue q;
    char item = '1';
    initQueue(&q);
    while(item != '0') {
        scanf("%c", &item);
        enQueue(&q, item);
    }
    while(isEmpty(&q) == 0) {
        deQueue(&q, &item);
        printf("%c", item);
    }
    
    return 0;
}