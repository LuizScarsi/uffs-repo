// 1. Faça um programa que peça o número de horas trabalhadas e o valor da hora de um determinado funcionário. Em seguida, calcule o salário do funcionário. Caso o funcionário tenha trabalhado mais de 200 horas, o salário final é acrescido de 5%. Exemplos de execução:

#include <stdio.h>

int main()
{
    int horasTrabalhadas; 
    float valorHora, salario;
    
    printf("Insira a quantidade de horas trabalhadas: \n");
    scanf("%d", &horasTrabalhadas);
    
    printf("Insira o valor da hora: \n");
    scanf("%f", &valorHora);
    
    salario = horasTrabalhadas*valorHora;
    if (horasTrabalhadas > 200) {
        salario = salario + (salario*0.05);
    };

    printf("Salario: %.2f\n", salario);

    return 0;
}

