#include <stdio.h>

void printLowerAndBigger(int *v, int tam);

int main() {
    int values[5], x;
    for (int i = 0; i < 5; i++) {
        printf("Insira o %d valor: \n", i + 1);
        scanf("%d", &x);
        values[i] = x;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");

    printLowerAndBigger(values, 5);

    return 0;
}

void printLowerAndBigger(int *v, int tam) {
    int lower, bigger = v[0];
    for (int i = 0; i < tam; i++) {
        if (v[i] < lower) {
            lower = v[i];
        }
        if (v[i] > bigger) {
            bigger = v[i];
        }
    }
    printf("Lower: %d\n", lower);
    printf("Bigger: %d\n", bigger);
}