#include <stdio.h>

int potencia(int, int);
int somaVetor(int *v, int);

int main() {
  int base = 2, exp = 3;

  printf("%d\n", potencia(base, exp));
  return 0;
}

int potencia(int base, int exp) {
  if (exp == 0) {
    return 1;
  }
  return base*potencia(base, exp -1);
}

int somaVetor(int *v, int n) {
  if (n == 0) {
    return v[0];
  }
  return v[n] + somaVetor(v, n-1);
}
