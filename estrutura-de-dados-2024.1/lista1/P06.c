// 6. Sabendo que as faixas etárias para votação são: 18 a 70 anos voto obrigatório; 16, 17 e acima de 70 anos voto facultativo; outras idades (ou seja, menor que 16 anos) não pode votar, crie um programa que processa essa verificação. Exemplos de execução:

#include <stdio.h>

int main()
{
    int idade;
    
    printf("Idade: \n");
    scanf("%d", &idade);
    
    if (idade >= 18 && idade <= 70) {
        printf("Voto obrigatório");
    } else if (idade < 16) {
        printf("Não pode votar");
    } else {
        printf("Voto facultativo");
    }
    
    return 0;
}

