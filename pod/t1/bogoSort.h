#ifndef BOGOSORT_H
#define BOGOSORT_H
#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "queue.h"

// Implements the inneficient bogo sort algorithm which randomizes the indexes of the elements until the array become sorted
void bogo_sort(node *first);

#endif //BOGOSORT_H
