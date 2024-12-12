#ifndef RADIX_H
#define RADIX_H

#include "list.h"
#include "queue.h"

// Gets the maximum value in the array
int getMax(int arr[], int size);

// Implements counting sort based on the digit
void countingSort(int arr[], int size, int digit);

// Main function which implements radix sort on a given list 
void radixSort(node *first);

#endif //RADIX_H
