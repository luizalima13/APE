#include <stdio.h>

int main() {
    int numeroAluno;
    float alturaAluno;
    int alunoMaisBaixo, alunoMaisAlto;
    float alturaMaisBaixa = 1000.0;
    float alturaMaisAlta = 0.0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o numero do aluno %d: ", i + 1);
        scanf("%d", &numeroAluno);

        printf("Digite a altura do aluno %d (em metros): ", i + 1);
        scanf("%f", &alturaAluno);

        if (alturaAluno < alturaMaisBaixa) {
            alturaMaisBaixa = alturaAluno;
            alunoMaisBaixo = numeroAluno;
        }

        if (alturaAluno > alturaMaisAlta) {
            alturaMaisAlta = alturaAluno;
            alunoMaisAlto = numeroAluno;
        }
    }

    printf("\nAluno mais baixo:\n");
    printf("Numero do aluno: %d\n", alunoMaisBaixo);
    printf("Altura: %.2f metros\n", alturaMaisBaixa);

    printf("\nAluno mais alto:\n");
    printf("Numero do aluno: %d\n", alunoMaisAlto);
    printf("Altura: %.2f metros\n", alturaMaisAlta);

    return 0;
}
