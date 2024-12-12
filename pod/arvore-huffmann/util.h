#ifndef UTIL_H
#define UTIL_H

#include <stdio.h>


// constantes globais:

// MAX_TREE_HT representa a altura máxima da árvore de huffman, que também é o comprimento máximo
// do código de huffman para um caractere (pois cada link da árvore corresponde a um 0 ou 1)
#define MAX_TREE_HT 15

// M representa o tamanho da hashtable. Por sorte, 127 é primo e representa todas as combinações
// possíveis de 8 bits (2^8 = 128), com isso tem-se uma hash function perfeita.
#define M 127


// struct para os nós da árvore
struct treeNode {
    int qtd;
    char caractere;
    struct treeNode *left, *right;
};
typedef struct treeNode node;


// struct para os nós da lista encadeada
struct tlist {
    node *root;         // <-- a informação guardada consiste de um nó da árvore
    struct tlist* next;
};
typedef struct tlist list;


// Aloca um nó de árvore dinamicamente e retorna o endereço em memória
node* criarNo(char c, int i);

// Insere nó na lista encadeada
void pushNode(list **head, node *root);

// Incrementa a quantidade de um caractere no seu respectivo nó
int incrementarQtd(list* lista, char c);

// Itera pelos caracteres do arquivo, adicionando-os à lista encadeada ou incrementando sua quantidade
list* contarOcorrencias(FILE *arq);

// Ordenação da lista com bubble sort. Bubble sort foi escolhido pois, após a primeira ordenação, a
// tendência é que a lista esteja parcialmente ordenada.
void bubbleSort(list **head);

// Junta os dois primeiros nós da lista encadeada e corrige os apontamentos
void mergeNodes(list **head);

// Itera fazendo o merge dos primeiros nós e ordenando a lista até que reste apenas um item, que corresponde à árvore
node* mergeTree(list **head);

// Checa se o nó atual é folha
int isLeaf(node *root);

// Função que determina o índice do caractere na tabela hash com base no seu valor ASCII
int hashFunction(char c);

// Imprime todos os códigos armazenados na tabela hash
void printCodes(char table[M][MAX_TREE_HT]);

// Inicializa as strings da tabela como vazias
void initTable(char table[M][MAX_TREE_HT]);

// Copia a string desejada de src para dest
void copyCode(char *dest, char *src, int t);

// Armazena todos os códigos de huffman na hashtable recursivamente
void storeAllCodes(node *root, char table[M][MAX_TREE_HT], char *code, int top); 

// Cria variáveis necessárias e invoca storeAllCodes
void storeCodes(node *root, char codeTable[M][MAX_TREE_HT]);

// Lê de um a um os caracteres do arquivo de entrada e insere os códigos no arquivo codificado usando a hashtable
void codificarArquivo(FILE *saida, FILE *entrada, char codeTable[M][MAX_TREE_HT]);

// No arquivo codificado, itera pelo código de huffman e, através da árvore, decodifica os caracteres
char getNextChar(FILE *arq, node *root);

// Até que hajam caracteres, itera pelo arquivo codificado usando getNextChar e insere a string obtida em decodificado.txt
void decodificarArquivo(FILE *saida, FILE *entrada, node *root);

// Abre e fecha o arquivo no modo 'write', esvaziando seus conteúdos
void limparArquivo(char *nomeArq);

// Limpa a árvore da memória
void freeTree(node *root);

#endif