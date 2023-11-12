#include <stdio.h>

#define NUM_ALUNOS 30
#define PESO_N1 2
#define PESO_N2 4
#define PESO_N3 4
#define NOTA_MIN_APROVACAO 7.0

float calcularMediaPonderada(float n1, float n2, float n3) {
    return (n1 * PESO_N1 + n2 * PESO_N2 + n3 * PESO_N3) / (PESO_N1 + PESO_N2 + PESO_N3);
}

void verificarStatusAluno(int aluno, float media) {
    printf("Media do aluno %d: %.2f - ", aluno, media);
    if (media >= NOTA_MIN_APROVACAO) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
}

int main() {
    int alunos = NUM_ALUNOS;
    float n1, n2, n3, mp, mediaGeral = 0;

    for (int i = 1; i <= alunos; i++) {
        printf("Digite as notas do aluno %d:\n", i);
        printf("Nota 1: ");
        scanf("%f", &n1);
        printf("Nota 2: ");
        scanf("%f", &n2);
        printf("Nota 3: ");
        scanf("%f", &n3);

        mp = calcularMediaPonderada(n1, n2, n3);
        mediaGeral += mp;

        verificarStatusAluno(i, mp);
    }

    mediaGeral /= alunos;
    printf("Media geral: %.2f\n", mediaGeral);

    return 0;
}
