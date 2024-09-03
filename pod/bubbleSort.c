#include <stdio.h>

/*
Repetidamente troca elementos adjacentes se estão na ordem errada
Não é recomendado para grandes quantidades de dados
*/

void bubbleSort(int *arr, int length);
void printArray(int *arr, int length);

int main() {
    int arr[] = {6, 0, 3, 5};
    printArray(arr, 4);
    bubbleSort(arr, 4);
    printArray(arr, 4);
    return 0;
}

void bubbleSort (int *arr, int length) {
    int lower;
    int swap = 0;
    for (int i=length-1; i>=1; i--) {
        for (int j=0; j<=i; j++) {
            if (arr[j]>arr[j+1]) {
                
            }
        }
    }
}

void printArray(int *arr, int length) {
    for (int i=0; i<length; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}