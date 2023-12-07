#include <stdio.h>
#include <math.h>

int main() {
    int vetor[10];
    double soma = 0.0;
    double media;
    double somatorioDiferencasQuadrado = 0.0;
    double desvioPadrao;

    printf("Digite 10 numeros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / 10;

    for (int i = 0; i < 10; i++) {
        somatorioDiferencasQuadrado += pow(vetor[i] - media, 2);
    }

    desvioPadrao = sqrt(somatorioDiferencasQuadrado / 10);

    printf("\nDesvio Padrao: %.2lf\n", desvioPadrao);

    return 0;
}
