#include <stdio.h>
#include <stdlib.h>
#include "tasks.h"
#include <stdbool.h>

void addTask(TaskList *l, Task *t) {
    Task *aux;
    
    if (l->head == NULL && l->tail == NULL) {
        l->head = t;
        l->tail = t;
        return;
    }

    for(aux = l->head; aux != NULL; aux = aux->next) {
        if (aux->time > t->time) {
            if (aux->prev == NULL) {
                aux->prev = t;
                t->next = aux;
                l->head = t;
                break;
            } else {
                aux->prev->next = t;
                t->prev = aux->prev;
                t->next = aux;
                aux->prev = t;
                break;
            }
        } else if (aux->next == NULL) {
            aux->next = t;
            t->prev = aux;
            l->tail = t;
            break;
        }
    }
}

void showTasks(TaskList *l, int taskFilter) {
    for(Task *aux = l->head; aux != NULL; aux = aux->next) {
        printf("ID: %d\n", aux->id);
        printf("Description: %s\n", aux->desc);
        printf("Time: %d\n", aux->time);
        if (taskFilter == 1) {
            if (aux->status == 0) {
                printf("Status: Completed\n");
            } else {
                printf("Status: Active\n");
            }
        } else if (taskFilter == 2) {
            if (aux->status == 1) {
                printf("Status: Active\n");
            }
        } else if (taskFilter == 3) {
            if (aux->status == 0) {
                printf("Status: Completed\n");
            }
        }
        printf("\n");
    }
}

void finishTask(TaskList *l, int id) {
    Task *aux;
    for(aux = l->head; aux != NULL; aux = aux->next) {
        if(aux->id == id) {
            aux->status = 0;
            return;
        }
    }
}

void deleteTask(TaskList *l, int id) {
    Task *aux, *prev;
    for(aux = l->head; aux != NULL; aux=aux->next) {
        if(aux->id == id) {
            if(aux == l->head) {
                l->head = l->head->next;
                l->tail = l->tail->next;
                break;
            }
            prev->next = aux->next;
            break;
        }
        prev = aux;
    }
    if(aux != NULL) free(aux);
}