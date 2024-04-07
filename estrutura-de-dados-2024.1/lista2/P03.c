#include <stdio.h>

/*
Faça um programa que peça uma valor e imprima a soma de todos os números de 1 até o valor informado. Por exemplo, se o valor informado for 6, o resultado será 21, ou seja, 1 + 2 + 3 + 4 + 5 + 6. 
*/

int main() {
  int n;
  int acc = 0;
  printf("Insira um valor: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    acc += i;
    printf("%d\n", acc);
  }

  return 0;
}
