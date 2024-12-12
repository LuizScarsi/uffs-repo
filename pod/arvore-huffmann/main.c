// Luis Fernando Cerutti Valentini - 20230001310
// Luiz Augusto Scarsi - 2311101009

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "util.h"


int main() {
    limparArquivo("codificado.txt");
    limparArquivo("decodificado.txt");

    FILE *arquivoLeitura = fopen("amostra.txt", "r");
    FILE *arquivoCodificado = fopen("codificado.txt", "a+");
    FILE *arquivoDecodificado = fopen("decodificado.txt", "a");

    if (arquivoLeitura == NULL) {
        printf("Não foi possível abrir o arquivo contendo a amostra.");
        exit(1);
    }

    list *head = contarOcorrencias(arquivoLeitura);
    node *root = mergeTree(&head);  // <-- lista encadeada é limpada do heap

    char codeTable[M][MAX_TREE_HT];  // <-- hashtable não precisa ser limpada pois é alocada estaticamente
    storeCodes(root, codeTable);

    printCodes(codeTable);

    codificarArquivo(arquivoCodificado, arquivoLeitura, codeTable);
    decodificarArquivo(arquivoDecodificado, arquivoCodificado, root);

    freeTree(root);  // <-- árvore é limpada do heap
    root = NULL;

    fclose(arquivoLeitura);
    fclose(arquivoCodificado);
    fclose(arquivoDecodificado);

    return 0;
}
