#include <stdlib.h>
#include "util.h"


node* criarNo(char c, int i) {
    node *newNode = (node*)malloc(sizeof(node));
    newNode->qtd = i;
    newNode->caractere = c;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}


void pushNode(list **head, node *root) {
    list *newNode = (list*)malloc(sizeof(list));
    newNode->root = root;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    list *aux;
    for (aux = *head; aux->next != NULL; aux = aux->next);
    aux->next = newNode;
}


int incrementarQtd(list* lista, char c) {
    for (list *aux = lista; aux != NULL; aux = aux->next) {
        if (aux->root->caractere == c) {
            aux->root->qtd++;
            return 1;
        }
    }
    return 0;
}


list* contarOcorrencias(FILE *arq) {
    list *head = NULL;

    char c;
    while ((c=getc(arq)) != EOF) {
        if (!incrementarQtd(head, c)) {
            node *novoItem = criarNo(c, 1);
            pushNode(&head, novoItem);
        }
    }

    return head;
}


void bubbleSort(list **head) {

    if ((*head) == NULL) return;  

    int swapped;
    list *current;
    list *last = NULL;
    list *anterior;
  
    do {  
        swapped = 0;  
        current = *head;  
  
        while (current->next != last) {  
            if (current->root->qtd > current->next->root->qtd || 
            (current->root->qtd == current->next->root->qtd && current->root->caractere > current->next->root->caractere)) {  

                list *prox = current->next;

                if (current == *head) *head = prox;
                else anterior->next = prox;
                current->next = prox->next;
                prox->next = current;
                anterior = prox;
                swapped = 1;  
            }  
            else {
                anterior = current;
                current = current->next;
            }  
        }  
        last = current;
    }  
    while (swapped);  
}  


void mergeNodes(list **head) {
    list *left = (*head), *right = (*head)->next;

    node *root = (node*)malloc(sizeof(node));
    root->qtd = right->root->qtd + left->root->qtd;
    root->caractere = '\0';
    root->left = left->root;
    root->right = right->root;

    list *newNode = (list*)malloc(sizeof(list));
    newNode->root = root;
    newNode->next = right->next;
    *head = newNode;

    free(right);
    free(left);
}


node* mergeTree(list **head) {
    while ((*head)->next != NULL) {
        bubbleSort(head);
        mergeNodes(head);
    }

    node *root = (*head)->root;
    free(*head);
    *head = NULL;
    return root;
}


void printList(list *head) {
    for (list *aux = head; aux != NULL; aux = aux->next) {
        printf("%c -> %d ocorrencias\n", aux->root->caractere, aux->root->qtd);
    }
}



// Funções da hashtable:

int isLeaf(node *root) {
    return !(root->left) && !(root->right);
}


int hashFunction(char c) {
    return ((int)c) % M;
}


void printCodes(char table[M][MAX_TREE_HT]) {
    for (int i = 1; i < M; i++) {
        char *code = table[i];
        if (code[0] != '\0') {
            printf("%c: %s\n", (char)i, code);
        }
    }
}


void initTable(char table[M][MAX_TREE_HT]) {
    for (int i = 0; i < M; i++) {
        table[i][0] = '\0';
    }
}


void copyCode(char *dest, char *src, int t) {
    int i = 0;
    for (i = 0; i < t; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
}


void storeAllCodes(node *root, char table[M][MAX_TREE_HT], char *code, int top) {

    if (root->left) { 
        code[top] = '0'; 
        storeAllCodes(root->left, table, code, top + 1); 
    } 
  
    if (root->right) {
        code[top] = '1'; 
        storeAllCodes(root->right, table, code, top + 1); 
    }
  
    // Se for folha, então contém caractere de entrada. Copia-se o código do char para o devido index da hashtable
    if (isLeaf(root)) {
        int i = hashFunction(root->caractere);
        copyCode(table[i], code, top);
    }
}
 

void storeCodes(node *root, char codeTable[M][MAX_TREE_HT]) {
    initTable(codeTable);
    char code[MAX_TREE_HT];
    storeAllCodes(root, codeTable, code, 0);
}


void codificarArquivo(FILE *saida, FILE *entrada, char codeTable[M][MAX_TREE_HT]) {
    if (ftell(entrada) != 0) fseek(entrada, 0, SEEK_SET);

    char c;
    while ((c=fgetc(entrada)) != EOF) {
        int i = hashFunction(c);
        fprintf(saida, "%s", codeTable[i]);
    }
}


char getNextChar(FILE *arq, node *root) {
    char c;

    while ((c=fgetc(arq)) != EOF) {
        if (c == '0') root = root->left;
        else if (c == '1') root = root->right;
        if (isLeaf(root)) return root->caractere;
    }

    return EOF;
}


void decodificarArquivo(FILE *saida, FILE *entrada, node *root) {
    if (ftell(entrada) != 0) fseek(entrada, 0, SEEK_SET);

    char c;
    while ((c=getNextChar(entrada, root)) != EOF) {
        fputc(c, saida);
    }
}


void limparArquivo(char *nomeArq) {
    FILE *arq = fopen(nomeArq, "w");
    // fprintf(arq, "");
    fclose(arq);
}


void freeTree(node *root) {
    if (root == NULL) return;
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}
