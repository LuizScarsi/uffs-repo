#include "radix.h"
#include <time.h>

int getMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void countingSort(int arr[], int size, int digit) {
    int output[size];
    int i, count[10] = {0};

    // Store count of occurrences in count[]
    for (i = 0; i < size; i++) {
        count[(arr[i] / digit) % 10]++;
    }

    // count[] contains the actual position of the digit in the output
    for (i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // Add values to the output array
    for (i = size-1; i >= 0; i--) {
        output[count[(arr[i] / digit) % 10] - 1] = arr[i];
        count[(arr[i] / digit) % 10]--;
    }

    // Add sorted numbers to the array according to the digit
    for (i = 0; i < size; i++) {
        arr[i] = output[i];
    }
}

void radixSort(node *first) {
    clock_t start_time = clock();
    int size = countListElements(first);
    int arr[size];
    Queue *queue = (Queue *)malloc(sizeof(Queue));

    listToArray(first, arr);
    freeList(first);
    initQueue(queue);

    int max = getMax(arr, size);

    for (int digit = 1; max / digit > 0; digit *= 10) {
        countingSort(arr, size, digit);
    }

    for (int i = 0; i < size; i++) {
        insertQueue(queue, arr[i]);
    }
    printQueue(queue);
    freeAll(queue);

    clock_t end_time = clock();
    double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    printf("Execution time: %f seconds\n", time_taken);
}