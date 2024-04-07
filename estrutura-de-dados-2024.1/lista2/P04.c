#include <stdio.h>

/*
Construa um programa que simule uma calculadora simples. Primeiro é solicitada a operação desejada +, -, / ou *, em seguida os dois operandos. Como resultado, o programa mostra o resultado da operação. O Programa é finalizado quando a operação desejada for igual à @. 
*/

int main() {
  char operacao;
  int n1,n2;
  
  while (1) {
    printf("Insira @ se quiser finalizar o programa\n");
    printf("Insira a operacao desejada, +, -, / ou *: \n");
    scanf(" %c", &operacao);

    if (operacao == '@') {
      return 0;
    }

    printf("Insira os dois operandos: \n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    switch (operacao) {
      case '+':
      printf("Resultado: %d\n", n1 + n2);
      break;

      case '-':
      printf("Resultado: %d\n", n1 - n2);
      break;

      case '/':
      printf("Resultado: %d\n", n1 / n2);
      break;

      case '*':
      printf("Resultado: %d\n", n1 * n2);
      break;
    }
  }

  return 0;
}
