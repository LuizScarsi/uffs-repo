#include <stdio.h>
#include <stdlib.h>

// arrumarrrrrrrrrrrrr
int main() {
    int vetor[5]={3,21,7,1,9}, maior=vetor[sizeof(vetor)-1];
    for(int i = sizeof(vetor) - 2; i>=0; i--){
        if (vetor[i] > maior) {
            printf("%d\n", vetor[i]);
            maior = vetor[i];
        }
    }
    return 0;
}