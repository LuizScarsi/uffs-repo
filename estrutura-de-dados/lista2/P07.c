#include <stdio.h>

/*
Faça um programa que peça o salário e o número de filhos dos habitantes de uma região. Quando o salário informado for menor que zero, as entradas são finalizadas e serão apresentadas as médias salarial e de filhos informados. Exemplo: 
Salário: 1500 
Filhos: 2 
Salário: 3245 
Filhos: 2 
Salário: -1 
Média salários: 2372.5 
Média filhos: 2.0 
*/

int main() {
  float salario;
  float totalSalario = 0;
  int qtdFilhos;
  int totalFilhos = 0;
  int contador = 0;

  while (1) {
    printf("Insira o salario, insira 0 ou menos para terminar o programa: ");
    scanf("%f", &salario);

    if (salario <= 0) {
      break;
    }

    totalSalario += salario;
    contador++;

    printf("Insira a quantidade de filhos: ");
    scanf("%d", &qtdFilhos);
    
    totalFilhos += qtdFilhos;
  }
  printf("Media salarios: %.2f\n", totalSalario/contador);
  printf("Media filhos: %d\n", totalFilhos/contador);
  return 0;
}
