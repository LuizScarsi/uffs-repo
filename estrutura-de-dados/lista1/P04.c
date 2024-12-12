// 4. Faça um programa que peça 4 números inteiros. Em seguida, apresente quantos números informados são negativos e quantos são positivos (considere o 0 como positivo). Exemplos de execução:

#include <stdio.h>

int main()
{
    int nums[4];
    
    printf("Insira 4 números inteiros: \n");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &nums[i]);
        if (nums[i] < 0) {
            printf("%d é negativo\n", nums[i]);
        } else {
            printf("%d é positivo\n", nums[i]);
        }
    }
    
    return 0;
}

