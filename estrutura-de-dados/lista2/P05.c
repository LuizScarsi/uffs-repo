#include <stdio.h>

/*
Faça um programa para calcular o fatorial de um número dado. O fatorial de um número n é n × (n − 1) × (n − 2) × . . . × 1, por definição o fatorial de 0 e 1 é 1. Por exemplo, o fatorial de 5 é 120, ou seja, 5 × 4 × 3 × 2 × 1 (perceba que não é necessário fazer a última multiplicação já que 1 é o elemento neutro da multiplicação). 
*/
int fatorial(int);

int main() {
  int n;
  printf("Insira um inteiro nao negativo: ");
  scanf("%d", &n);

  printf("\nFatorial = %d\n", fatorial(n));
  return 0;
}

int fatorial(int n) {
  if (n > 1) {
    return n * fatorial(n-1);
  }
  return 1;
}
