#include <stdio.h>

/*
Fazer um programa que simule um campeonato com 4 times (A, B, C e D). Sera pedido o nome do primeiro time com os gols marcados e o nome do segundo time com os gols marcados. Este processo se repetirá até que seja informado um valor diferente de A, B, C ou D para o primeiro time. Ao final deverá ser apresentado o número de pontos de cada time e o campeão. Caso houver empate na primeira colocação informar que não houve campeão. Cálculo dos pontos: vitória 3 pontos, empate 1 ponto e derrota 0 ponto. Exemplo: 
Time: A 
Gols: 2 
Time: B 
Gols: 1 
Time: C 
Gols: 2 
Time: A 
Gols: 4 
Time: X ← valor diferente de A, B, C ou D, então finaliza 
Campeão: A 
A: 6 pontos 
B: 0 pontos 
C: 0 pontos 
D: 0 pontos 
*/
int pontuar(char time1, int gols1, char time2, int gols2, int *a, int *b, int *c, int *d);

int main() {
  int ptA = 0;
  int ptB = 0;
  int ptC = 0;
  int ptD = 0;
  int *a = &ptA;
  int *b = &ptB;
  int *c = &ptC;
  int *d = &ptD;
  char time1, time2;
  int gols1, gols2;

  while (1) {
    printf("\nPartida:\nInsira um nome de time diferente de A,B,C ou D para parar o programa\n");

    printf("Time: ");
    scanf(" %c", &time1);

    if (time1 != 'A' && time1 != 'B' && time1 != 'C' && time1 != 'D') {
      break;
    }

    printf("Gols: ");
    scanf("%d", &gols1);

    printf("Time: ");
    scanf(" %c", &time2);

    if (time2 != 'A' && time2 != 'B' && time2 != 'C' && time2 != 'D') {
      break;
    }

    printf("Gols: ");
    scanf("%d", &gols2);
    
    if (!(pontuar(time1, gols1, time2, gols2, a, b, c, d))) {
      break;
    };
  }

  if (ptA > ptB && ptA > ptC && ptA > ptD) {
    printf("Campeão: A\nA: %d\nB: %d\nC: %d\nD: %d\n", ptA, ptB, ptC, ptD);
  }
  if (ptB > ptA && ptB > ptC && ptB > ptD) {
    printf("Campeão: B\nA: %d\nB: %d\nC: %d\nD: %d\n", ptA, ptB, ptC, ptD);
  }
  if (ptC > ptB && ptC > ptA && ptC > ptD) {
    printf("Campeão: A\nA: %d\nB: %d\nC: %d\nD: %d\n", ptA, ptB, ptC, ptD);
  }
  if (ptD > ptB && ptD > ptC && ptD > ptA) {
    printf("Campeão: A\nA: %d\nB: %d\nC: %d\nD: %d\n", ptA, ptB, ptC, ptD);
  }
  return 0;
}

int pontuar(char time1, int gols1, char time2, int gols2, int *a, int *b, int *c, int *d) {
  if (gols1 > gols2) {
    if (time1 == 'A') {
      *a += 3;
    } else if (time1 == 'B') {
      *b += 3;
    } else if (time1 == 'C') {
      *c += 3;
    } else if (time1 == 'D') {
      *d += 3;
    } else {
      return 0;
    }
  } else if (gols2 > gols1) {
    if (time2 == 'A') {
      *a += 3;
    } else if (time2 == 'B') {
      *b += 3;
    } else if (time2 == 'C') {
      *c += 3;
    } else if (time2 == 'D') {
      *d += 3;
    } else {
      return 0;
    }
  } else if (gols1 == gols2) {
    if (time1 == 'A') {
      *a += 1;
    } else if (time1 == 'B') {
      *b += 1;
    } else if (time1 == 'C') {
      *c += 1;
    } else if (time1 == 'D') {
      *d += 1;
    } else {
      return 0;
    }
    if (time2 == 'A') {
      *a += 1;
    } else if (time2 == 'B') {
      *b += 1;
    } else if (time2 == 'C') {
      *c += 1;
    } else if (time2 == 'D') {
      *d += 1;
    } else {
      return 0;
    }
  }
  return 1;
}
