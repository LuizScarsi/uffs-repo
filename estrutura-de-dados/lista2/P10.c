#include <stdio.h>

/*
Um professor gostaria de ter um programa para calcular a média final de seus alunos. Para isso, ele informa a matrícula e as 5 notas que o alunos teve durante o semestre. Após informar as 5 notas, o programa imprime a matrícula do aluno e a média que obteve (média aritmética simples). Quando o professor digitar 0 o programa finaliza e apresenta a média geral da turma. Proibido colocar 5 scanf para pedir as notas. Exemplo: 
Matrícula: 22010 
Nota 1: 4 
Nota 2: 6 
Nota 3: 6 
Nota 4: 6 
Nota 5: 8 
Aluno: 22010  Média: 6.0
Matrícula: 0 
Média geral da turma: 6.0
*/

int main() {
  int matricula; 
  float media, somatorio; 
  float somatorioGeral = 0;
  float notas[5];
  float mediaGeral = 0;
  int contador = 0;
  do {
    printf("Matrícula: ");
    scanf("%d", &matricula);
    if (matricula == 0) {
      break;
    }
    for (int i = 0; i < 5; i++) {
      printf("Nota %d: ", i + 1);
      scanf("%f", &notas[i]);
      somatorio += notas[i];
    }
    media = somatorio/5;
    somatorioGeral += media;
    printf("Aluno: %d  Media: %.2f\n", matricula, media);
    contador++;
    somatorio = 0;
  } while(matricula != 0);
  mediaGeral = somatorioGeral/contador;
  printf("Media geral da turma: %.2f\n", mediaGeral);
  return 0;
}
