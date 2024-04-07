#include <stdio.h>
/*
Faça um programa que peça um número e imprima os números de 1 até o número informado. Sendo que, quando chegar na metade da impressão, mostrar a mensagem Metade (a metade não precisa ser exata). Exemplos: 
Número: 6					Número: 7		ou	Número: 7
1 						1				1
2 						2				2
3 						3				3
Metade 						4				Metade
4 						Metade			4	
5 						5				5
6 						6				6
							7				7
*/

int main() {
  int n;
  printf("Insira o numero final: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    printf("%d\n", i);
    if (i == n/2) {
      printf("Metade\n");
    }
  }

  return 0;
}
