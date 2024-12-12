#include <stdio.h>
#include <stdlib.h>
#include "tasks.h"

int main() {
    int input, taskFilter, taskID= 0, id;
    Task *t;
    TaskList *l;

    l = (TaskList *)malloc(sizeof(TaskList));

    while(1) {
        printf("0 - Exit\n1 - Add task\n2 - See tasks\n3 - Finish task\n4 - Delete task\n");
        scanf("%d", &input);
        if(input == 0) {
            break;
        } else if(input == 1) {
            t = (Task *)malloc(sizeof(Task));
            taskID += 1;
            t->id = taskID;
            printf("Description: ");
            scanf("%s", t->desc);
            printf("Time: ");
            scanf("%d", &t->time);
            t->status = 1;
            t->next = NULL;
            t->prev = NULL;
            addTask(l, t);
        } else if(input == 2) {
            printf("1 - All tasks\n2 - Active tasks\n3 - Completed tasks\n");
            scanf("%d", &taskFilter);
            showTasks(l, taskFilter);
        } else if(input == 3) {
            printf("Task ID to finish: ");
            scanf("%d", &id);
            finishTask(l, id);
        } else if(input == 4) {
            printf("Task ID to delete: ");
            scanf("%d", &id);
            deleteTask(l, id);
        } else {
            printf("Invalid input\n");
        }
    }
    return 0;
}