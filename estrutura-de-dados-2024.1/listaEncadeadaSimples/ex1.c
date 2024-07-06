#include <stdio.h>
#include <stdlib.h>

typedef struct Employee {
    int id;
    char name[30];
    // date dbirth;
    struct Employee *next;
} employee;

typedef struct Date {
    int day;
    int month;
    int year;
} date;

employee *insEmployee(employee *, employee *);
employee *insEmployeeAfter(employee *, employee *, int);
employee *delEmployee(employee *, int);
void printEmployeeList(employee *);
void printEmployeeReverse(employee *);
void freeMemory(employee *);

int main() {
    employee *first=NULL, *e;
    int idCounter = 0;

    for (int i=0; i < 4; i++) {
        e=(employee *)malloc(sizeof(employee));
        e->id = ++idCounter;
        printf("Insert name: \n");
        scanf("%s", e->name);
        e->next = NULL;
        first = insEmployee(first, e);   
    }

    printEmployeeList(first);
    printf("######################################################\n");
    first = delEmployee(first, 2);
    printEmployeeReverse(first);
    freeMemory(first);
    return 0;
}

void printEmployeeList(employee *first) {
  employee *aux;
  for (aux=first; aux!=NULL; aux=aux->next) {
    printf("id: %d, name: %s\n", aux->id, aux->name);
  }
}

employee *insEmployee(employee *first, employee *e) {
    employee *aux;
    if (first == NULL) {
        return e;
    }
    for (aux=first; aux->next != NULL; aux=aux->next);
    aux->next = e;
    return first;
}

employee *delEmployee(employee *f, int id) {
  employee *aux, *previous;
  for (aux=f; aux!=NULL;aux=aux->next) {
    if (aux->id == id) {
      if (aux == f) {
        f = f->next;
        break;
      }
      previous->next = aux->next;
      break;
    }
    previous = aux;
  }
  if (aux != NULL) free(aux);
  return f;
}

employee *insEmployeeAfter(employee *f, employee *e, int id) {
  employee *aux;
  if (f == NULL) {
    return e;
  }
  for (aux=f; aux != NULL; aux=aux->next) {
    if (aux->id == id) break;
  }
  e->next = aux->next;
  aux->next = e;
  return f;
}

void printEmployeeReverse(employee *f) {
  if (f == NULL) return;
  printEmployeeReverse(f->next);
  printf("id: %d, name: %s\n", f->id, f->name);
}

void freeMemory(employee *f) {
  if (f == NULL) return;
  freeMemory(f->next);
  free(f);
}