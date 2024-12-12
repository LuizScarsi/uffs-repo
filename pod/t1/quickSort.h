#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "list.h"
#include "queue.h"

// Main function which implements quick sort on a given list 
void quickSort(node *first);

// Finds the correct index for the pivot
int partition(int arr[], int low, int high);

// Recursive calls quickSortRecursion for each partition
void quickSortRecursion(int arr[], int low, int high);

// Change the position of x and y on a given array
void swap(int *x, int *y);

#endif //QUICKSORT_H
