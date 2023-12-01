#include <stdio.h>

int main() {
    const int numAlunos = 15;
    float notas[numAlunos];

    printf("Digite as notas dos %d alunos:\n", numAlunos);
    for (int i = 0; i < numAlunos; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    float somaNotas = 0.0;
    for (int i = 0; i < numAlunos; i++) {
        somaNotas += notas[i];
    }

    float mediaGeral = somaNotas / numAlunos;

    printf("\nA media geral das notas e: %.2f\n", mediaGeral);

    return 0;
}
