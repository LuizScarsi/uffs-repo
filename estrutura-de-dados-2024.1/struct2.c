#include <stdio.h>
#include <string.h>

typedef struct aluno {
    int matricula;
    char nome[20];
    int prova1;
    int prova2;
    int prova3;
} Aluno;

Aluno setAluno(int matricula, char nome[20], int prova1, int prova2, int prova3);

int main() {
    int matricula, prova1, prova2, prova3, maiorP1 = 0, maiorMedia = 0, menorMedia = 10;
    char nome[20];
    Aluno alunos[5], alunoMaiorP1, alunoMaiorMedia, alunoMenorMedia;

    for (int i = 0; i < 5; i++) {
        printf("Dados do aluno %d:\n", i + 1);
        printf("Matrícula: ");
        scanf("%d", &matricula);
        printf("Nome: ");
        scanf("%s", nome);
        printf("Prova 1: ");
        scanf("%d", &prova1);
        printf("Prova 2: ");
        scanf("%d", &prova2);
        printf("Prova 3: ");
        scanf("%d", &prova3);
        
        alunos[i] = setAluno(matricula, nome, prova1, prova2, prova3);

        if ((alunos[i].prova1 + alunos[i].prova2 + alunos[i].prova3)/3 >= 6) {
            printf("O aluno %s foi aprovado\n", alunos[i].nome);
        } else {
            printf("O aluno %s foi reprovado\n", alunos[i].nome);
        }
    }

    for (int i = 0; i < 5; i++) {
        if (alunos[i].prova1 > maiorP1) {
            maiorP1 = alunos[i].prova1;
            alunoMaiorP1 = alunos[i];
        }
        if ((alunos[i].prova1 + alunos[i].prova2 + alunos[i].prova3)/3 > maiorMedia) {
            maiorMedia = alunos[i].prova1 + alunos[i].prova2 + alunos[i].prova3;
            alunoMaiorMedia = alunos[i];
        }
        if ((alunos[i].prova1 + alunos[i].prova2 + alunos[i].prova3)/3 < menorMedia) {
            menorMedia = alunos[i].prova1 + alunos[i].prova2 + alunos[i].prova3;
            alunoMenorMedia = alunos[i];
        }
    }

    printf("Maior P1: %s, nota: %d", alunoMaiorP1.nome, maiorP1);
    printf("Maior media: %s, nota: %d", alunoMaiorMedia.nome, maiorMedia);
    printf("Menor media: %s, nota: %d", alunoMenorMedia.nome, menorMedia);

    return 0;
}

Aluno setAluno(int matricula, char nome[20], int prova1, int prova2, int prova3) {
    Aluno a;
    a.matricula = matricula;
    strcpy(a.nome, nome);
    a.prova1 = prova1;
    a.prova2 = prova2;
    a.prova3 = prova3;
    return a;
}