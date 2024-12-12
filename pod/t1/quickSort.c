#include "quickSort.h"
#include <time.h>

// https://www.youtube.com/watch?v=0jDiBM68NGU
void quickSort(node *first) {
    clock_t start_time = clock();
    int size = countListElements(first);
    int arr[size];
    Queue *queue = (Queue *)malloc(sizeof(Queue));

    initQueue(queue);
    listToArray(first, arr);
    freeList(first);

    quickSortRecursion(arr, 0, size - 1);

    for (int i = 0; i < size; i++) {
        insertQueue(queue, arr[i]);
    }
    printQueue(queue);
    freeAll(queue);

    clock_t end_time = clock();
    double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    printf("Execution time: %f seconds\n", time_taken);
}

int partition(int arr[], int low, int high) {
    int pivot_value = arr[high];
    int i = low;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot_value) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[high]);
    return i;
}

void quickSortRecursion(int arr[], int low, int high) {
    if (low < high) {
        int pivot_index = partition(arr, low, high);

        // Left side of the array
        quickSortRecursion(arr, low, pivot_index - 1);
        // Right side of the array
        quickSortRecursion(arr, pivot_index + 1, high);
    }
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}