#include "bogoSort.h"
#include <time.h>

void bogo_sort(node *first) {
    clock_t start_time = clock();
    int i, j, temp, size;
    Queue *queue = (Queue *)malloc(sizeof(Queue));

    size = countListElements(first);
    int arr[size];
    listToArray(first, arr);
    freeList(first);
    initQueue(queue);

    while (1) {
        int sorted = 1;
        for (i = 1; i < size; i++) {
            if (arr[i-1] > arr[i]) {
                sorted = 0;
                break;
            }
        }
        if (sorted) {
            break;
        }

        // Random shuffle
        for (i = 0; i < size; i++) {
            j = rand() % size;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    for (i = 0; i < size; i++) {
        insertQueue(queue, arr[i]);
    }
    printQueue(queue);
    freeAll(queue);

    clock_t end_time = clock();
    double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    printf("Execution time: %f seconds\n", time_taken);
}