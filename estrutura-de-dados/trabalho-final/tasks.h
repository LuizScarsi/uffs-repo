#include <stdbool.h>

typedef struct task {
    int id;
    char desc[50];
    int time;
    bool status;
    struct task *next, *prev;
} Task;

typedef struct stask {
    Task *head;
    Task *tail;
} TaskList;

void addTask(TaskList *l, Task *t);
void showTasks(TaskList *l, int taskFilter);
void finishTask(TaskList *l, int id);
void deleteTask(TaskList *l, int id);