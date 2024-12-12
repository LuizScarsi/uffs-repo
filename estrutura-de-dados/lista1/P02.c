// 2. Uma loja vende produtos à vista e a prazo (pagamento 30 dias depois da compra). À vista tem um desconto de 5% e a prazo um acréscimo de 10%. Faça um programa em C que peça o preço do produto e a forma de pagamento: 1 para à vista e 2 para a prazo. Depois apresente o preço final do produto. Exemplos de execução:

#include <stdio.h>

int main()
{
    float preco;
    int formaPagamento;
    printf("Insira o preço do produto: \n");
    scanf("%f", &preco);
    
    printf("Insira a forma de pagamento\n1- À vista\n2-A prazo\n");
    scanf("%d", &formaPagamento);
    
    if (formaPagamento == 1) {
        preco = preco - (preco*0.05);
        printf("Preco a vista: %.2f", preco);
    } else if (formaPagamento == 2) {
        preco = preco + (preco*0.1);
        printf("Preco a prazo: %.2f", preco);
    };

    return 0;
}

