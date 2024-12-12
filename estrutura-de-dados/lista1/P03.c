// 3. Faça um programa que calcule a duração de um evento qualquer. Para tal, o programa pede a hora de início e hora de fim (sem os minutos), as horas serão informadas de 0 a 23. Perceba que um evento pode começar em um dia e acabar em outro. Os eventos nunca terão duração de mais de 24 horas. Exemplos de execução:

#include <stdio.h>

int main()
{
    int horaInicio, horaFim, duracao;
    
    printf("Insira a hora de inicio (0 a 23): \n");
    scanf("%d", &horaInicio);
    
    printf("Insira a hora de fim (0 a 23): \n");
    scanf("%d", &horaFim);
    
    if (horaInicio > horaFim) {
        duracao = (24 - horaInicio) + horaFim;
    } else {
        duracao = horaFim - horaInicio;
    };
    
    printf("%d horas", duracao);

    return 0;
}

