// 5. Você vai fazer um programa para classificar os competidores segundo as suas posições. Foram criadas 5 classes: Top 5 (1-5), Top 10 (6-10), Top 20 (11-20), Top 30 (21-30) e Top 100 (outras posições). Faça um programa que peça a posição do competidor e indique a classe do mesmo. Exemplos de execução:

#include <stdio.h>

int main()
{
    int posicao;
    
    printf("Posição: \n");
    scanf("%d", &posicao);
    
    if (posicao < 0) {
        printf("Número inválido\n");
    } else if (1 <= posicao && posicao <= 5) {
        printf("Top 5\n");
    } else if (6 <= posicao && posicao <= 10) {
        printf("Top 10\n");
    } else if (11 <= posicao && posicao <= 20) {
        printf("Top 20\n");
    } else if (21 <= posicao && posicao <= 30) {
        printf("Top 30\n");
    } else {
        printf("Top 100\n");
    };
    return 0;
}

