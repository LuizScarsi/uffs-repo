#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct employee{
    int id;
    char name[41];
    double salary;
    Date birthDate;
    struct employee *prev;
    struct employee *next;
} Employee;

int main() {
    Employee *first = NULL, *aux, *e;
    int id = 0;

    e = (Employee *)malloc(sizeof(Employee));
    e -> id = ++id;
    printf("Insira um nome: ");
    scanf("%s", e -> name);
    scanf("%lf", &(e -> salary));
    scanf("%d", &(e -> birthDate.day));
    scanf("%d", &(e -> birthDate.month));
    scanf("%d", &(e -> birthDate.year));
    e -> prev = NULL;
    e -> next = NULL;

    if (first == NULL) {
        first = e;
        aux = e;
    } else {
        aux -> next = e;
        e -> prev = aux;
        aux = e;
    }

    for (Employee *aux2 = first; aux2 != NULL; aux2 = aux2->next) {
        printf("ID: %d Name: %s\n", aux2->id, aux2->name);
    }
    return 0;
}