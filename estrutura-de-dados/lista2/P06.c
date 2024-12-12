#include <stdio.h>

/*
Dada uma sequência de n números (um número menor ou igual à 0 finaliza a sequência), apresentar o porcentual de números informados que são maiores ou igual a 10 e menores ou igual a 20. Exemplo:  
Número: 5
Número: 6 
Número: 11 
Número: 21 
Número: 0 
% entre 10 e 20: 50% 

*/

int main() {
  int n;
  int valido = 0;
  int total = 0;

  while (1) {
    printf("Insira um número, 0 ou menos termina o programa: ");
    scanf("%d", &n);
    
    if (n <= 0) {
      break;
    }

    total++;

    if (n >= 10 && n <= 20) {
      valido++;
    }
  }
  printf("Porcentagem entre 10 e 20: %d\n", (valido*100)/total);
  return 0;
}
