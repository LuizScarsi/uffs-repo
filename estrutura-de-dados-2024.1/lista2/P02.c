#include <stdio.h>

/*
Faça um programa que simule a multiplicação por meio de adições. Para tal serãoo pedidos os dois operandos. Por exemplo se for informado 3 e 4, deverá ser calculado, usando a soma, 3∗4, ou seja, 12. Este cálculo é feito somando o primeiro valor informado por ele mesmo o número de vezes representada pelo segundo número. Nesse exemplo, o três seria somado quatro vezes: 3+3+3+3, resultando 12.
*/

int main() {
  int n1, n2, acc;
  acc = 0;
  printf("Insira ambos operados: \n");
  scanf("%d", &n1);
  scanf("%d", &n2);

  for (int i = 0; i < n2; i++) {
    acc += n1;
  }

  printf("Resultado: %d\n", acc);

  return 0;
}
