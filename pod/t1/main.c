#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "queue.h"
#include "bogoSort.h"
#include "quickSort.h"
#include "radix.h"

int main() {
    node *firstBogo = NULL, *firstQuick = NULL, *firstRadix = NULL;
    printf("BogoSort: \n");
    int vectorBogo[] = {1,3,4,22,6,12,32};
    firstBogo = constructList(vectorBogo, 7);
    printf("List: ");
    printList(firstBogo);
    printf("Sorting...\n");
    bogo_sort(firstBogo);

    printf("\nQuickSort: \n");
    int vectorQuick[] = {10,3,4,21,6,11,62};
    printf("Creating list: \n");
    firstQuick = constructList(vectorQuick, 7);
    printf("List: ");
    printList(firstQuick);
    printf("Sorting...\n");
    quickSort(firstQuick);

    printf("\nRadix sort: \n");
    int vectorRadix[] = {10,341,409,21,67,91,123};
    firstRadix = constructList(vectorRadix, 7);
    printf("List: ");
    printList(firstRadix);
    printf("Sorting...\n");
    radixSort(firstRadix);

    return 0;
}
