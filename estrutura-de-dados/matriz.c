#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int matrix2[5][5] = {
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
    };
    int bigger = 0, lineBigger = 0, collumnBigger = 0;

    for (int line = 0; line < 3; line++) {
        for (int collumn = 0; collumn < 3; collumn++) {
            if(line == collumn) {
                printf("%d ", matrix[line][collumn]);
            }
        }
    }
    printf("\n");

    for (int line = 0; line < 3; line++) {
        for (int collumn = 0; collumn < 3; collumn++) {
            if (matrix[line][collumn] > bigger) {
                bigger = matrix[line][collumn];
                lineBigger = line;
                collumnBigger =  collumn;
            }
        }
    }
    printf("The bigger number in matrix is: %d in position = [%d,%d]\n", bigger, lineBigger, collumnBigger);

    for (int line = 0; line < 5; line++) {
        for (int collumn = 0; collumn < 5; collumn++) {
            if (collumn >= line) {
                printf("%d ",matrix2[line][collumn]);
            }
        }
    }
    printf("\n");

    for (int line = 0; line < 5; line++) {
        for (int collumn = 0; collumn < 5; collumn++) {
            if (line == collumn) {
                matrix2[line][collumn] = 1;
            } else {
                matrix2[line][collumn] = 0;
            }
        }
    }
    for (int line = 0; line < 5; line++) {
        for (int collumn = 0; collumn < 5; collumn++) {
            printf("%d ", matrix2[line][collumn]);
        }
    }
    printf("\n");
    return 0;
}