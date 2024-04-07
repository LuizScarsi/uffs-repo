#include <stdio.h>

/*
Antonio tem 1,50m e cresce 2cm por ano. Carlos tem 1,10m e cresce 3cm por ano. Fazer um programa que calcule quantos anos seriam necessários para que Carlos tivesse a mesma altura que Antonio. Supondo que os dois crescem todos os anos. 
*/

int main() {
  float alturaAntonio = 1.50;
  float alturaCarlos = 1.10;
  int anos = 0;

  while (alturaAntonio > alturaCarlos) {
    anos++;
    alturaAntonio += 0.02;
    alturaCarlos += 0.03;
  }

  printf("Demorou %d anos\n", --anos); // mago da computação
  return 0;
}
