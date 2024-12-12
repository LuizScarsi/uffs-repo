#ifndef QUEUE_H
#define QUEUE_H
#include <stdio.h>
#include <stdlib.h>

typedef int Item;

// Defines the structure of a queue's element
typedef struct TQueue {
  int item;
  struct TQueue *next;
} EQueue;

// Defines the general structure of the queue
typedef struct {
  EQueue *head;
  EQueue *tail;
} Queue;

// Inserts item in queue
void insertQueue(Queue *queue, int item);

// Removes item from the queue
void deQueue(Queue *queue, int *item);

// Initializes a new queue
void initQueue(Queue *queue);

// Verifies if the queue is empty
int isEmpty(Queue *queue);

// Frees all memory allocated within the queue
void freeAll(Queue *queue);

// Prints all items in the queue
void printQueue(Queue *queue);


#endif //QUEUE_H
